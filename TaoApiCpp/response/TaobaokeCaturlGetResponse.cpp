#include <TaoApiCpp/response/TaobaokeCaturlGetResponse.h>

TaobaokeItem TaobaokeCaturlGetResponse::getTaobaokeItem() const {
  return taobaokeItem;
}
void TaobaokeCaturlGetResponse::setTaobaokeItem (TaobaokeItem taobaokeItem) {
  this->taobaokeItem = taobaokeItem;
}

void TaobaokeCaturlGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_item")) {
  taobaokeItem.setParser(responseParser->getObjectParser("taobaoke_item"));
  taobaokeItem.parseResponse();
  }

}

