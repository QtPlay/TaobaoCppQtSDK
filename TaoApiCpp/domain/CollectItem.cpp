#include <TaoApiCpp/domain/CollectItem.h>
qlonglong CollectItem::getItemNumid() const {
  return itemNumid;
}
void CollectItem::setItemNumid (qlonglong itemNumid) {
  this->itemNumid = itemNumid;
}

QString CollectItem::getItemOwnerNick() const {
  return itemOwnerNick;
}
void CollectItem::setItemOwnerNick (QString itemOwnerNick) {
  this->itemOwnerNick = itemOwnerNick;
}

QString CollectItem::getTitle() const {
  return title;
}
void CollectItem::setTitle (QString title) {
  this->title = title;
}


void CollectItem::parseResponse() {
  if (responseParser->hasName("item_numid")) {
  itemNumid = responseParser->getNumByName("item_numid");
  }
  if (responseParser->hasName("item_owner_nick")) {
  itemOwnerNick = responseParser->getStrByName("item_owner_nick");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

