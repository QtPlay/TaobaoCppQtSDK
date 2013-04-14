#include <TaoApiCpp/response/WlbItemCombinationGetResponse.h>

QList<qlonglong> WlbItemCombinationGetResponse::getItemIdList() const {
  return itemIdList;
}
void WlbItemCombinationGetResponse::setItemIdList (QList<qlonglong> itemIdList) {
  this->itemIdList = itemIdList;
}

void WlbItemCombinationGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_id_list")) {
  itemIdList = responseParser->getListNumByName("item_id_list");
  }

}

