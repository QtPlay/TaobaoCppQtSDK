#include <TaoApiCpp/domain/SelectedItem.h>
qlonglong SelectedItem::getCid() const {
  return cid;
}
void SelectedItem::setCid (qlonglong cid) {
  this->cid = cid;
}

QString SelectedItem::getItemScore() const {
  return itemScore;
}
void SelectedItem::setItemScore (QString itemScore) {
  this->itemScore = itemScore;
}

qlonglong SelectedItem::getShopId() const {
  return shopId;
}
void SelectedItem::setShopId (qlonglong shopId) {
  this->shopId = shopId;
}

QString SelectedItem::getTrackIid() const {
  return trackIid;
}
void SelectedItem::setTrackIid (QString trackIid) {
  this->trackIid = trackIid;
}


void SelectedItem::parseResponse() {
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("item_score")) {
  itemScore = responseParser->getStrByName("item_score");
  }
  if (responseParser->hasName("shop_id")) {
  shopId = responseParser->getNumByName("shop_id");
  }
  if (responseParser->hasName("track_iid")) {
  trackIid = responseParser->getStrByName("track_iid");
  }

}

