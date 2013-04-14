#include <TaoApiCpp/response/UmpActivityDeleteResponse.h>

bool UmpActivityDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void UmpActivityDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void UmpActivityDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

