#include <TaoApiCpp/response/ProductPropimgUploadResponse.h>

ProductPropImg ProductPropimgUploadResponse::getProductPropImg() const {
  return productPropImg;
}
void ProductPropimgUploadResponse::setProductPropImg (ProductPropImg productPropImg) {
  this->productPropImg = productPropImg;
}

void ProductPropimgUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product_prop_img")) {
  productPropImg.setParser(responseParser->getObjectParser("product_prop_img"));
  productPropImg.parseResponse();
  }

}

