#include <TaoApiCpp/response/UmpDetailUpdateResponse.h>

bool UmpDetailUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void UmpDetailUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void UmpDetailUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

