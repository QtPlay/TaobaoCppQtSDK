#include <TaoApiCpp/response/UdpShopGetResponse.h>

TargetSearchTopResult UdpShopGetResponse::getContent() const {
  return content;
}
void UdpShopGetResponse::setContent (TargetSearchTopResult content) {
  this->content = content;
}

void UdpShopGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("content")) {
  content.setParser(responseParser->getObjectParser("content"));
  content.parseResponse();
  }

}

