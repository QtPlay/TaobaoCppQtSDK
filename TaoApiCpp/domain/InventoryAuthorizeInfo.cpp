#include <TaoApiCpp/domain/InventoryAuthorizeInfo.h>
QString InventoryAuthorizeInfo::getAuthorizeCode() const {
  return authorizeCode;
}
void InventoryAuthorizeInfo::setAuthorizeCode (QString authorizeCode) {
  this->authorizeCode = authorizeCode;
}

qlonglong InventoryAuthorizeInfo::getChannelFlag() const {
  return channelFlag;
}
void InventoryAuthorizeInfo::setChannelFlag (qlonglong channelFlag) {
  this->channelFlag = channelFlag;
}

qlonglong InventoryAuthorizeInfo::getIndex() const {
  return index;
}
void InventoryAuthorizeInfo::setIndex (qlonglong index) {
  this->index = index;
}

qlonglong InventoryAuthorizeInfo::getInventoryType() const {
  return inventoryType;
}
void InventoryAuthorizeInfo::setInventoryType (qlonglong inventoryType) {
  this->inventoryType = inventoryType;
}

QString InventoryAuthorizeInfo::getNickName() const {
  return nickName;
}
void InventoryAuthorizeInfo::setNickName (QString nickName) {
  this->nickName = nickName;
}

QString InventoryAuthorizeInfo::getNickNameList() const {
  return nickNameList;
}
void InventoryAuthorizeInfo::setNickNameList (QString nickNameList) {
  this->nickNameList = nickNameList;
}

qlonglong InventoryAuthorizeInfo::getOccupyQuantity() const {
  return occupyQuantity;
}
void InventoryAuthorizeInfo::setOccupyQuantity (qlonglong occupyQuantity) {
  this->occupyQuantity = occupyQuantity;
}

qlonglong InventoryAuthorizeInfo::getQuantity() const {
  return quantity;
}
void InventoryAuthorizeInfo::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

qlonglong InventoryAuthorizeInfo::getQuotaQuantity() const {
  return quotaQuantity;
}
void InventoryAuthorizeInfo::setQuotaQuantity (qlonglong quotaQuantity) {
  this->quotaQuantity = quotaQuantity;
}

QString InventoryAuthorizeInfo::getScItemCode() const {
  return scItemCode;
}
void InventoryAuthorizeInfo::setScItemCode (QString scItemCode) {
  this->scItemCode = scItemCode;
}

qlonglong InventoryAuthorizeInfo::getScItemId() const {
  return scItemId;
}
void InventoryAuthorizeInfo::setScItemId (qlonglong scItemId) {
  this->scItemId = scItemId;
}

QString InventoryAuthorizeInfo::getStoreCode() const {
  return storeCode;
}
void InventoryAuthorizeInfo::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}


void InventoryAuthorizeInfo::parseResponse() {
  if (responseParser->hasName("authorize_code")) {
  authorizeCode = responseParser->getStrByName("authorize_code");
  }
  if (responseParser->hasName("channel_flag")) {
  channelFlag = responseParser->getNumByName("channel_flag");
  }
  if (responseParser->hasName("index")) {
  index = responseParser->getNumByName("index");
  }
  if (responseParser->hasName("inventory_type")) {
  inventoryType = responseParser->getNumByName("inventory_type");
  }
  if (responseParser->hasName("nick_name")) {
  nickName = responseParser->getStrByName("nick_name");
  }
  if (responseParser->hasName("nick_name_list")) {
  nickNameList = responseParser->getStrByName("nick_name_list");
  }
  if (responseParser->hasName("occupy_quantity")) {
  occupyQuantity = responseParser->getNumByName("occupy_quantity");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("quota_quantity")) {
  quotaQuantity = responseParser->getNumByName("quota_quantity");
  }
  if (responseParser->hasName("sc_item_code")) {
  scItemCode = responseParser->getStrByName("sc_item_code");
  }
  if (responseParser->hasName("sc_item_id")) {
  scItemId = responseParser->getNumByName("sc_item_id");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }

}

