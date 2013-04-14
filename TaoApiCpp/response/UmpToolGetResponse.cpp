#include <TaoApiCpp/response/UmpToolGetResponse.h>

QString UmpToolGetResponse::getContent() const {
  return content;
}
void UmpToolGetResponse::setContent (QString content) {
  this->content = content;
}

void UmpToolGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("content")) {
  content = responseParser->getStrByName("content");
  }

}

