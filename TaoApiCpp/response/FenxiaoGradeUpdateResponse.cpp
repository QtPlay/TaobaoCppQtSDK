#include <TaoApiCpp/response/FenxiaoGradeUpdateResponse.h>

bool FenxiaoGradeUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoGradeUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoGradeUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

