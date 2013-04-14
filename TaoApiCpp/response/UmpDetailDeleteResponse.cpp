#include <TaoApiCpp/response/UmpDetailDeleteResponse.h>

bool UmpDetailDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void UmpDetailDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void UmpDetailDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

