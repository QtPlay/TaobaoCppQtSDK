#include <TaoApiCpp/response/JipiaoPolicystatusUpdateResponse.h>

bool JipiaoPolicystatusUpdateResponse::getIsSuccess() const {
  return isSuccess;
}
void JipiaoPolicystatusUpdateResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void JipiaoPolicystatusUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

