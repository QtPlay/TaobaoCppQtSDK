#include <TaoApiCpp/domain/WlbItemBatch.h>
QString WlbItemBatch::getBatchCode() const {
  return batchCode;
}
void WlbItemBatch::setBatchCode (QString batchCode) {
  this->batchCode = batchCode;
}

QString WlbItemBatch::getCreator() const {
  return creator;
}
void WlbItemBatch::setCreator (QString creator) {
  this->creator = creator;
}

qlonglong WlbItemBatch::getDefectQuantity() const {
  return defectQuantity;
}
void WlbItemBatch::setDefectQuantity (qlonglong defectQuantity) {
  this->defectQuantity = defectQuantity;
}

QDateTime WlbItemBatch::getDueDate() const {
  return dueDate;
}
void WlbItemBatch::setDueDate (QDateTime dueDate) {
  this->dueDate = dueDate;
}

QDateTime WlbItemBatch::getGmtCreate() const {
  return gmtCreate;
}
void WlbItemBatch::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

QDateTime WlbItemBatch::getGmtModified() const {
  return gmtModified;
}
void WlbItemBatch::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

QString WlbItemBatch::getGuaranteePeriod() const {
  return guaranteePeriod;
}
void WlbItemBatch::setGuaranteePeriod (QString guaranteePeriod) {
  this->guaranteePeriod = guaranteePeriod;
}

qlonglong WlbItemBatch::getGuaranteeUnit() const {
  return guaranteeUnit;
}
void WlbItemBatch::setGuaranteeUnit (qlonglong guaranteeUnit) {
  this->guaranteeUnit = guaranteeUnit;
}

qlonglong WlbItemBatch::getId() const {
  return id;
}
void WlbItemBatch::setId (qlonglong id) {
  this->id = id;
}

bool WlbItemBatch::getIsDeleted() const {
  return isDeleted;
}
void WlbItemBatch::setIsDeleted (bool isDeleted) {
  this->isDeleted = isDeleted;
}

qlonglong WlbItemBatch::getItemId() const {
  return itemId;
}
void WlbItemBatch::setItemId (qlonglong itemId) {
  this->itemId = itemId;
}

QString WlbItemBatch::getLastModifier() const {
  return lastModifier;
}
void WlbItemBatch::setLastModifier (QString lastModifier) {
  this->lastModifier = lastModifier;
}

QString WlbItemBatch::getProduceArea() const {
  return produceArea;
}
void WlbItemBatch::setProduceArea (QString produceArea) {
  this->produceArea = produceArea;
}

QString WlbItemBatch::getProduceCode() const {
  return produceCode;
}
void WlbItemBatch::setProduceCode (QString produceCode) {
  this->produceCode = produceCode;
}

QDateTime WlbItemBatch::getProduceDate() const {
  return produceDate;
}
void WlbItemBatch::setProduceDate (QDateTime produceDate) {
  this->produceDate = produceDate;
}

qlonglong WlbItemBatch::getQuantity() const {
  return quantity;
}
void WlbItemBatch::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

QDateTime WlbItemBatch::getReceiveDate() const {
  return receiveDate;
}
void WlbItemBatch::setReceiveDate (QDateTime receiveDate) {
  this->receiveDate = receiveDate;
}

QString WlbItemBatch::getRemarks() const {
  return remarks;
}
void WlbItemBatch::setRemarks (QString remarks) {
  this->remarks = remarks;
}

QString WlbItemBatch::getStatus() const {
  return status;
}
void WlbItemBatch::setStatus (QString status) {
  this->status = status;
}

QString WlbItemBatch::getStoreCode() const {
  return storeCode;
}
void WlbItemBatch::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
}

qlonglong WlbItemBatch::getUserId() const {
  return userId;
}
void WlbItemBatch::setUserId (qlonglong userId) {
  this->userId = userId;
}

qlonglong WlbItemBatch::getVersion() const {
  return version;
}
void WlbItemBatch::setVersion (qlonglong version) {
  this->version = version;
}


void WlbItemBatch::parseResponse() {
  if (responseParser->hasName("batch_code")) {
  batchCode = responseParser->getStrByName("batch_code");
  }
  if (responseParser->hasName("creator")) {
  creator = responseParser->getStrByName("creator");
  }
  if (responseParser->hasName("defect_quantity")) {
  defectQuantity = responseParser->getNumByName("defect_quantity");
  }
  if (responseParser->hasName("due_date")) {
  dueDate = responseParser->getDateByName("due_date");
  }
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }
  if (responseParser->hasName("guarantee_period")) {
  guaranteePeriod = responseParser->getStrByName("guarantee_period");
  }
  if (responseParser->hasName("guarantee_unit")) {
  guaranteeUnit = responseParser->getNumByName("guarantee_unit");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("is_deleted")) {
  isDeleted = responseParser->getBoolByName("is_deleted");
  }
  if (responseParser->hasName("item_id")) {
  itemId = responseParser->getNumByName("item_id");
  }
  if (responseParser->hasName("last_modifier")) {
  lastModifier = responseParser->getStrByName("last_modifier");
  }
  if (responseParser->hasName("produce_area")) {
  produceArea = responseParser->getStrByName("produce_area");
  }
  if (responseParser->hasName("produce_code")) {
  produceCode = responseParser->getStrByName("produce_code");
  }
  if (responseParser->hasName("produce_date")) {
  produceDate = responseParser->getDateByName("produce_date");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("receive_date")) {
  receiveDate = responseParser->getDateByName("receive_date");
  }
  if (responseParser->hasName("remarks")) {
  remarks = responseParser->getStrByName("remarks");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("store_code")) {
  storeCode = responseParser->getStrByName("store_code");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("version")) {
  version = responseParser->getNumByName("version");
  }

}

