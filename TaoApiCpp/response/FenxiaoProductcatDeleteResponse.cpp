#include <TaoApiCpp/response/FenxiaoProductcatDeleteResponse.h>

bool FenxiaoProductcatDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoProductcatDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoProductcatDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

