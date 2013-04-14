#include <TaoApiCpp/domain/Requisition.h>
qlonglong Requisition::getDistAppraise() const {
  return distAppraise;
}
void Requisition::setDistAppraise (qlonglong distAppraise) {
  this->distAppraise = distAppraise;
}

qlonglong Requisition::getDistCategory() const {
  return distCategory;
}
void Requisition::setDistCategory (qlonglong distCategory) {
  this->distCategory = distCategory;
}

QString Requisition::getDistCategoryName() const {
  return distCategoryName;
}
void Requisition::setDistCategoryName (QString distCategoryName) {
  this->distCategoryName = distCategoryName;
}

qlonglong Requisition::getDistIsXiaobao() const {
  return distIsXiaobao;
}
void Requisition::setDistIsXiaobao (qlonglong distIsXiaobao) {
  this->distIsXiaobao = distIsXiaobao;
}

qlonglong Requisition::getDistLevel() const {
  return distLevel;
}
void Requisition::setDistLevel (qlonglong distLevel) {
  this->distLevel = distLevel;
}

QString Requisition::getDistMessage() const {
  return distMessage;
}
void Requisition::setDistMessage (QString distMessage) {
  this->distMessage = distMessage;
}

QDateTime Requisition::getDistOpenDate() const {
  return distOpenDate;
}
void Requisition::setDistOpenDate (QDateTime distOpenDate) {
  this->distOpenDate = distOpenDate;
}

QString Requisition::getDistShopAddress() const {
  return distShopAddress;
}
void Requisition::setDistShopAddress (QString distShopAddress) {
  this->distShopAddress = distShopAddress;
}

qlonglong Requisition::getDistributorId() const {
  return distributorId;
}
void Requisition::setDistributorId (qlonglong distributorId) {
  this->distributorId = distributorId;
}

QString Requisition::getDistributorNick() const {
  return distributorNick;
}
void Requisition::setDistributorNick (QString distributorNick) {
  this->distributorNick = distributorNick;
}

QDateTime Requisition::getGmtCreate() const {
  return gmtCreate;
}
void Requisition::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

qlonglong Requisition::getRequisitionId() const {
  return requisitionId;
}
void Requisition::setRequisitionId (qlonglong requisitionId) {
  this->requisitionId = requisitionId;
}

qlonglong Requisition::getStatus() const {
  return status;
}
void Requisition::setStatus (qlonglong status) {
  this->status = status;
}


void Requisition::parseResponse() {
  if (responseParser->hasName("dist_appraise")) {
  distAppraise = responseParser->getNumByName("dist_appraise");
  }
  if (responseParser->hasName("dist_category")) {
  distCategory = responseParser->getNumByName("dist_category");
  }
  if (responseParser->hasName("dist_category_name")) {
  distCategoryName = responseParser->getStrByName("dist_category_name");
  }
  if (responseParser->hasName("dist_is_xiaobao")) {
  distIsXiaobao = responseParser->getNumByName("dist_is_xiaobao");
  }
  if (responseParser->hasName("dist_level")) {
  distLevel = responseParser->getNumByName("dist_level");
  }
  if (responseParser->hasName("dist_message")) {
  distMessage = responseParser->getStrByName("dist_message");
  }
  if (responseParser->hasName("dist_open_date")) {
  distOpenDate = responseParser->getDateByName("dist_open_date");
  }
  if (responseParser->hasName("dist_shop_address")) {
  distShopAddress = responseParser->getStrByName("dist_shop_address");
  }
  if (responseParser->hasName("distributor_id")) {
  distributorId = responseParser->getNumByName("distributor_id");
  }
  if (responseParser->hasName("distributor_nick")) {
  distributorNick = responseParser->getStrByName("distributor_nick");
  }
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("requisition_id")) {
  requisitionId = responseParser->getNumByName("requisition_id");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }

}

