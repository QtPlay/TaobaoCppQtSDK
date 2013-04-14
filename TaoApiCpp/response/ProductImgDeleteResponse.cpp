#include <TaoApiCpp/response/ProductImgDeleteResponse.h>

ProductImg ProductImgDeleteResponse::getProductImg() const {
  return productImg;
}
void ProductImgDeleteResponse::setProductImg (ProductImg productImg) {
  this->productImg = productImg;
}

void ProductImgDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product_img")) {
  productImg.setParser(responseParser->getObjectParser("product_img"));
  productImg.parseResponse();
  }

}

