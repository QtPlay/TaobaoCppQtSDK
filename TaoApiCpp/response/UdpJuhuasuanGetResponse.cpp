#include <TaoApiCpp/response/UdpJuhuasuanGetResponse.h>

TargetSearchTopResult UdpJuhuasuanGetResponse::getContent() const {
  return content;
}
void UdpJuhuasuanGetResponse::setContent (TargetSearchTopResult content) {
  this->content = content;
}

void UdpJuhuasuanGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("content")) {
  content.setParser(responseParser->getObjectParser("content"));
  content.parseResponse();
  }

}

