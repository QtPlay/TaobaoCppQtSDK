#include <TaoApiCpp/response/CaipiaoSignstatusCheckResponse.h>

bool CaipiaoSignstatusCheckResponse::getSign() const {
  return sign;
}
void CaipiaoSignstatusCheckResponse::setSign (bool sign) {
  this->sign = sign;
}
QString CaipiaoSignstatusCheckResponse::getSignUrl() const {
  return signUrl;
}
void CaipiaoSignstatusCheckResponse::setSignUrl (QString signUrl) {
  this->signUrl = signUrl;
}

void CaipiaoSignstatusCheckResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("sign")) {
  sign = responseParser->getBoolByName("sign");
  }
  if (responseParser->hasName("sign_url")) {
  signUrl = responseParser->getStrByName("sign_url");
  }

}

