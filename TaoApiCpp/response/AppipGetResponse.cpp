#include <TaoApiCpp/response/AppipGetResponse.h>

QString AppipGetResponse::getIp() const {
  return ip;
}
void AppipGetResponse::setIp (QString ip) {
  this->ip = ip;
}

void AppipGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("ip")) {
  ip = responseParser->getStrByName("ip");
  }

}

