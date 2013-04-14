#include <TaoApiCpp/response/UmpDetailGetResponse.h>

QString UmpDetailGetResponse::getContent() const {
  return content;
}
void UmpDetailGetResponse::setContent (QString content) {
  this->content = content;
}

void UmpDetailGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("content")) {
  content = responseParser->getStrByName("content");
  }

}

