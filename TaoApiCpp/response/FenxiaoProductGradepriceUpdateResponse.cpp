#include <TaoApiCpp/response/FenxiaoProductGradepriceUpdateResponse.h>

bool FenxiaoProductGradepriceUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoProductGradepriceUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoProductGradepriceUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

