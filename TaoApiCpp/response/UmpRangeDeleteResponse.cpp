#include <TaoApiCpp/response/UmpRangeDeleteResponse.h>

bool UmpRangeDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void UmpRangeDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void UmpRangeDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

