#include <TaoApiCpp/response/ProductImgUploadResponse.h>

ProductImg ProductImgUploadResponse::getProductImg() const {
  return productImg;
}
void ProductImgUploadResponse::setProductImg (ProductImg productImg) {
  this->productImg = productImg;
}

void ProductImgUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("product_img")) {
  productImg.setParser(responseParser->getObjectParser("product_img"));
  productImg.parseResponse();
  }

}

