#include <TaoApiCpp/response/UmpActivityUpdateResponse.h>

bool UmpActivityUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void UmpActivityUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void UmpActivityUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

