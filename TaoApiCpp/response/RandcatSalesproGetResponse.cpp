#include <TaoApiCpp/response/RandcatSalesproGetResponse.h>

QList<CatBrandSaleProp> RandcatSalesproGetResponse::getCatBrandSaleProps() const {
  return catBrandSaleProps;
}
void RandcatSalesproGetResponse::setCatBrandSaleProps (QList<CatBrandSaleProp> catBrandSaleProps) {
  this->catBrandSaleProps = catBrandSaleProps;
}

void RandcatSalesproGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("cat_brand_sale_props")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("cat_brand_sale_props");
  Parser *parser;
  foreach (parser, listParser) {
    CatBrandSaleProp tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    catBrandSaleProps.append(tmp);
  }
  }

}

