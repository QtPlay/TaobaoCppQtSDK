#include <TaoApiCpp/response/TopatsTaskDeleteResponse.h>

bool TopatsTaskDeleteResponse::getIsSuccess() const {
  return isSuccess;
}
void TopatsTaskDeleteResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void TopatsTaskDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

