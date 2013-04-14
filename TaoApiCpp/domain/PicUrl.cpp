#include <TaoApiCpp/domain/PicUrl.h>
QString PicUrl::getUrl() const {
  return url;
}
void PicUrl::setUrl (QString url) {
  this->url = url;
}


void PicUrl::parseResponse() {
  if (responseParser->hasName("url")) {
  url = responseParser->getStrByName("url");
  }

}

