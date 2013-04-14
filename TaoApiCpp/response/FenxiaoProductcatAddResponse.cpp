#include <TaoApiCpp/response/FenxiaoProductcatAddResponse.h>

bool FenxiaoProductcatAddResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoProductcatAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}
qlonglong FenxiaoProductcatAddResponse::getProductLineId() const {
  return productLineId;
}
void FenxiaoProductcatAddResponse::setProductLineId (qlonglong productLineId) {
  this->productLineId = productLineId;
}

void FenxiaoProductcatAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }
  if (responseParser->hasName("product_line_id")) {
  productLineId = responseParser->getNumByName("product_line_id");
  }

}

