#include <TaoApiCpp/response/UmpToolDeleteResponse.h>

bool UmpToolDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void UmpToolDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void UmpToolDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

