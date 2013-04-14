#include <TaoApiCpp/response/TaobaokeListurlGetResponse.h>

TaobaokeItem TaobaokeListurlGetResponse::getTaobaokeItem() const {
  return taobaokeItem;
}
void TaobaokeListurlGetResponse::setTaobaokeItem (TaobaokeItem taobaokeItem) {
  this->taobaokeItem = taobaokeItem;
}

void TaobaokeListurlGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_item")) {
  taobaokeItem.setParser(responseParser->getObjectParser("taobaoke_item"));
  taobaokeItem.parseResponse();
  }

}

