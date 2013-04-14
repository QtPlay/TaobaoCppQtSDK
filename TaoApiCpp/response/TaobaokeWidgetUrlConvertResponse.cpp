#include <TaoApiCpp/response/TaobaokeWidgetUrlConvertResponse.h>

TaobaokeItem TaobaokeWidgetUrlConvertResponse::getTaobaokeItem() const {
  return taobaokeItem;
}
void TaobaokeWidgetUrlConvertResponse::setTaobaokeItem (TaobaokeItem taobaokeItem) {
  this->taobaokeItem = taobaokeItem;
}

void TaobaokeWidgetUrlConvertResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_item")) {
  taobaokeItem.setParser(responseParser->getObjectParser("taobaoke_item"));
  taobaokeItem.parseResponse();
  }

}

