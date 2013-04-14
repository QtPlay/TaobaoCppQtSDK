#include <TaoApiCpp/response/FenxiaoProductcatUpdateResponse.h>

bool FenxiaoProductcatUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoProductcatUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoProductcatUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

