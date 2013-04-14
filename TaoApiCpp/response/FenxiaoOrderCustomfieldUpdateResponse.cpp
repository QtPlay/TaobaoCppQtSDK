#include <TaoApiCpp/response/FenxiaoOrderCustomfieldUpdateResponse.h>

bool FenxiaoOrderCustomfieldUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoOrderCustomfieldUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoOrderCustomfieldUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

