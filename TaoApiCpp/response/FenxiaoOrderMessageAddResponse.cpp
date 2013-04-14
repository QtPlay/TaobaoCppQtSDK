#include <TaoApiCpp/response/FenxiaoOrderMessageAddResponse.h>

bool FenxiaoOrderMessageAddResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoOrderMessageAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoOrderMessageAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

