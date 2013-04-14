#include <TaoApiCpp/response/ProductPropimgDeleteResponse.h>

ProductPropImg ProductPropimgDeleteResponse::getProductPropImg() const {
  return productPropImg;
}
void ProductPropimgDeleteResponse::setProductPropImg (ProductPropImg productPropImg) {
  this->productPropImg = productPropImg;
}

void ProductPropimgDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product_prop_img")) {
  productPropImg.setParser(responseParser->getObjectParser("product_prop_img"));
  productPropImg.parseResponse();
  }

}

