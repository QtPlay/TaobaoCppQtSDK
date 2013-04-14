#include <TaoApiCpp/response/UmpRangeAddResponse.h>

bool UmpRangeAddResponse::getIsSuccess() const {
  return isSuccess;
}
void UmpRangeAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void UmpRangeAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

