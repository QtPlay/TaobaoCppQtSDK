#include <TaoApiCpp/domain/WlbSellerSubscription.h>
QDateTime WlbSellerSubscription::getEndDate() const {
  return endDate;
}
void WlbSellerSubscription::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
}

QDateTime WlbSellerSubscription::getGmtCreate() const {
  return gmtCreate;
}
void WlbSellerSubscription::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

QDateTime WlbSellerSubscription::getGmtModified() const {
  return gmtModified;
}
void WlbSellerSubscription::setGmtModified (QDateTime gmtModified) {
  this->gmtModified = gmtModified;
}

qlonglong WlbSellerSubscription::getId() const {
  return id;
}
void WlbSellerSubscription::setId (qlonglong id) {
  this->id = id;
}

qlonglong WlbSellerSubscription::getIsOwnService() const {
  return isOwnService;
}
void WlbSellerSubscription::setIsOwnService (qlonglong isOwnService) {
  this->isOwnService = isOwnService;
}

qlonglong WlbSellerSubscription::getParentId() const {
  return parentId;
}
void WlbSellerSubscription::setParentId (qlonglong parentId) {
  this->parentId = parentId;
}

qlonglong WlbSellerSubscription::getProviderUserId() const {
  return providerUserId;
}
void WlbSellerSubscription::setProviderUserId (qlonglong providerUserId) {
  this->providerUserId = providerUserId;
}

QString WlbSellerSubscription::getRemark() const {
  return remark;
}
void WlbSellerSubscription::setRemark (QString remark) {
  this->remark = remark;
}

QString WlbSellerSubscription::getServiceAlias() const {
  return serviceAlias;
}
void WlbSellerSubscription::setServiceAlias (QString serviceAlias) {
  this->serviceAlias = serviceAlias;
}

QString WlbSellerSubscription::getServiceCode() const {
  return serviceCode;
}
void WlbSellerSubscription::setServiceCode (QString serviceCode) {
  this->serviceCode = serviceCode;
}

qlonglong WlbSellerSubscription::getServiceId() const {
  return serviceId;
}
void WlbSellerSubscription::setServiceId (qlonglong serviceId) {
  this->serviceId = serviceId;
}

QString WlbSellerSubscription::getServiceName() const {
  return serviceName;
}
void WlbSellerSubscription::setServiceName (QString serviceName) {
  this->serviceName = serviceName;
}

QString WlbSellerSubscription::getServiceType() const {
  return serviceType;
}
void WlbSellerSubscription::setServiceType (QString serviceType) {
  this->serviceType = serviceType;
}

QDateTime WlbSellerSubscription::getStartDate() const {
  return startDate;
}
void WlbSellerSubscription::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
}

QString WlbSellerSubscription::getStatus() const {
  return status;
}
void WlbSellerSubscription::setStatus (QString status) {
  this->status = status;
}

qlonglong WlbSellerSubscription::getSubscriberUserId() const {
  return subscriberUserId;
}
void WlbSellerSubscription::setSubscriberUserId (qlonglong subscriberUserId) {
  this->subscriberUserId = subscriberUserId;
}

QString WlbSellerSubscription::getSubscriberUserNick() const {
  return subscriberUserNick;
}
void WlbSellerSubscription::setSubscriberUserNick (QString subscriberUserNick) {
  this->subscriberUserNick = subscriberUserNick;
}

WlbPartnerAddress WlbSellerSubscription::getWlbPartnerAddress() const {
  return wlbPartnerAddress;
}
void WlbSellerSubscription::setWlbPartnerAddress (WlbPartnerAddress wlbPartnerAddress) {
  this->wlbPartnerAddress = wlbPartnerAddress;
}

WlbPartnerContact WlbSellerSubscription::getWlbPartnerContact() const {
  return wlbPartnerContact;
}
void WlbSellerSubscription::setWlbPartnerContact (WlbPartnerContact wlbPartnerContact) {
  this->wlbPartnerContact = wlbPartnerContact;
}


void WlbSellerSubscription::parseResponse() {
  if (responseParser->hasName("end_date")) {
  endDate = responseParser->getDateByName("end_date");
  }
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getDateByName("gmt_modified");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("is_own_service")) {
  isOwnService = responseParser->getNumByName("is_own_service");
  }
  if (responseParser->hasName("parent_id")) {
  parentId = responseParser->getNumByName("parent_id");
  }
  if (responseParser->hasName("provider_user_id")) {
  providerUserId = responseParser->getNumByName("provider_user_id");
  }
  if (responseParser->hasName("remark")) {
  remark = responseParser->getStrByName("remark");
  }
  if (responseParser->hasName("service_alias")) {
  serviceAlias = responseParser->getStrByName("service_alias");
  }
  if (responseParser->hasName("service_code")) {
  serviceCode = responseParser->getStrByName("service_code");
  }
  if (responseParser->hasName("service_id")) {
  serviceId = responseParser->getNumByName("service_id");
  }
  if (responseParser->hasName("service_name")) {
  serviceName = responseParser->getStrByName("service_name");
  }
  if (responseParser->hasName("service_type")) {
  serviceType = responseParser->getStrByName("service_type");
  }
  if (responseParser->hasName("start_date")) {
  startDate = responseParser->getDateByName("start_date");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("subscriber_user_id")) {
  subscriberUserId = responseParser->getNumByName("subscriber_user_id");
  }
  if (responseParser->hasName("subscriber_user_nick")) {
  subscriberUserNick = responseParser->getStrByName("subscriber_user_nick");
  }
  if (responseParser->hasName("wlb_partner_address")) {
  wlbPartnerAddress.setParser(responseParser->getObjectParser("wlb_partner_address"));
  wlbPartnerAddress.parseResponse();
  }
  if (responseParser->hasName("wlb_partner_contact")) {
  wlbPartnerContact.setParser(responseParser->getObjectParser("wlb_partner_contact"));
  wlbPartnerContact.parseResponse();
  }

}

