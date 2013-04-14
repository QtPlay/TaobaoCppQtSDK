#include <TaoApiCpp/response/SimbaCustomersAuthorizedGetResponse.h>

QList<QString> SimbaCustomersAuthorizedGetResponse::getNicks() const {
  return nicks;
}
void SimbaCustomersAuthorizedGetResponse::setNicks (QList<QString> nicks) {
  this->nicks = nicks;
}

void SimbaCustomersAuthorizedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("nicks")) {
  nicks = responseParser->getListStrByName("nicks");
  }

}

