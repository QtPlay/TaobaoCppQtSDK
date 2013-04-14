#include <TaoApiCpp/domain/BrandCatControlInfo.h>
QList<BrandCatControl> BrandCatControlInfo::getBrandCatControls() const {
  return brandCatControls;
}
void BrandCatControlInfo::setBrandCatControls (QList<BrandCatControl> brandCatControls) {
  this->brandCatControls = brandCatControls;
}


void BrandCatControlInfo::parseResponse() {
  if (responseParser->hasName("brand_cat_controls")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("brand_cat_controls");
  Parser *parser;
  foreach (parser, listParser) {
    BrandCatControl tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    brandCatControls.append(tmp);
  }
  }

}

