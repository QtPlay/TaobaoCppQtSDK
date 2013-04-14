#include <TaoApiCpp/response/UdpItemGetResponse.h>

TargetSearchTopResult UdpItemGetResponse::getContent() const {
  return content;
}
void UdpItemGetResponse::setContent (TargetSearchTopResult content) {
  this->content = content;
}

void UdpItemGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("content")) {
  content.setParser(responseParser->getObjectParser("content"));
  content.parseResponse();
  }

}

