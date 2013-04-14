#include <TaoApiCpp/response/FenxiaoProductMapAddResponse.h>

bool FenxiaoProductMapAddResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoProductMapAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoProductMapAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

