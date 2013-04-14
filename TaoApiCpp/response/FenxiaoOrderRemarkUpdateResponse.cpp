#include <TaoApiCpp/response/FenxiaoOrderRemarkUpdateResponse.h>

bool FenxiaoOrderRemarkUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoOrderRemarkUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoOrderRemarkUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

