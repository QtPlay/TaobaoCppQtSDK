#include <TaoApiCpp/response/RandcatControlGetResponse.h>

BrandCatControlInfo RandcatControlGetResponse::getBrandCatControlInfo() const {
  return brandCatControlInfo;
}
void RandcatControlGetResponse::setBrandCatControlInfo (BrandCatControlInfo brandCatControlInfo) {
  this->brandCatControlInfo = brandCatControlInfo;
}

void RandcatControlGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("brand_cat_control_info")) {
  brandCatControlInfo.setParser(responseParser->getObjectParser("brand_cat_control_info"));
  brandCatControlInfo.parseResponse();
  }

}

