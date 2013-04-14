#include <TaoApiCpp/response/UmpActivityGetResponse.h>

QString UmpActivityGetResponse::getContent() const {
  return content;
}
void UmpActivityGetResponse::setContent (QString content) {
  this->content = content;
}

void UmpActivityGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("content")) {
  content = responseParser->getStrByName("content");
  }

}

