#include <TaoApiCpp/response/FenxiaoGradeDeleteResponse.h>

bool FenxiaoGradeDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoGradeDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoGradeDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

