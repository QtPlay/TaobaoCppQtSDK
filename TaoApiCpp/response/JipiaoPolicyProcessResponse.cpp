#include <TaoApiCpp/response/JipiaoPolicyProcessResponse.h>

bool JipiaoPolicyProcessResponse::getIsSuccess() const {
  return isSuccess;
}
void JipiaoPolicyProcessResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}
qlonglong JipiaoPolicyProcessResponse::getPolicyId() const {
  return policyId;
}
void JipiaoPolicyProcessResponse::setPolicyId (qlonglong policyId) {
  this->policyId = policyId;
}

void JipiaoPolicyProcessResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }
  if (responseParser->hasName("policy_id")) {
  policyId = responseParser->getNumByName("policy_id");
  }

}

