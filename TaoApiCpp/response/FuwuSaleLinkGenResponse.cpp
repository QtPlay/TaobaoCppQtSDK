#include <TaoApiCpp/response/FuwuSaleLinkGenResponse.h>

QString FuwuSaleLinkGenResponse::getUrl() const {
  return url;
}
void FuwuSaleLinkGenResponse::setUrl (QString url) {
  this->url = url;
}

void FuwuSaleLinkGenResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("url")) {
  url = responseParser->getStrByName("url");
  }

}

