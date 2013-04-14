#include <TaoApiCpp/response/SimbaLoginAuthsignGetResponse.h>

QString SimbaLoginAuthsignGetResponse::getSubwayToken() const {
  return subwayToken;
}
void SimbaLoginAuthsignGetResponse::setSubwayToken (QString subwayToken) {
  this->subwayToken = subwayToken;
}

void SimbaLoginAuthsignGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("subway_token")) {
  subwayToken = responseParser->getStrByName("subway_token");
  }

}

