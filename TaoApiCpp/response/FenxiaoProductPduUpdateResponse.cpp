#include <TaoApiCpp/response/FenxiaoProductPduUpdateResponse.h>

bool FenxiaoProductPduUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoProductPduUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoProductPduUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

