#include <TaoApiCpp/response/JipiaoPolicyGetResponse.h>

Policy JipiaoPolicyGetResponse::getPolicy() const {
  return policy;
}
void JipiaoPolicyGetResponse::setPolicy (Policy policy) {
  this->policy = policy;
}

void JipiaoPolicyGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("policy")) {
  policy.setParser(responseParser->getObjectParser("policy"));
  policy.parseResponse();
  }

}

