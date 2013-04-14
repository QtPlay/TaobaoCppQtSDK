#include <TaoApiCpp/request/TopatsDeliverySendRequest.h>

QString TopatsDeliverySendRequest::getApiMethodName() const {
  return "taobao.topats.delivery.send";
}

QString TopatsDeliverySendRequest::getCompanyCodes() const {
  return companyCodes;
}
void TopatsDeliverySendRequest::setCompanyCodes (QString companyCodes) {
  this->companyCodes = companyCodes;
  appParams.insert("company_codes", companyCodes);
}

QString TopatsDeliverySendRequest::getMemos() const {
  return memos;
}
void TopatsDeliverySendRequest::setMemos (QString memos) {
  this->memos = memos;
  appParams.insert("memos", memos);
}

QString TopatsDeliverySendRequest::getOrderTypes() const {
  return orderTypes;
}
void TopatsDeliverySendRequest::setOrderTypes (QString orderTypes) {
  this->orderTypes = orderTypes;
  appParams.insert("order_types", orderTypes);
}

QString TopatsDeliverySendRequest::getOutSids() const {
  return outSids;
}
void TopatsDeliverySendRequest::setOutSids (QString outSids) {
  this->outSids = outSids;
  appParams.insert("out_sids", outSids);
}

QString TopatsDeliverySendRequest::getSellerAddress() const {
  return sellerAddress;
}
void TopatsDeliverySendRequest::setSellerAddress (QString sellerAddress) {
  this->sellerAddress = sellerAddress;
  appParams.insert("seller_address", sellerAddress);
}

qlonglong TopatsDeliverySendRequest::getSellerAreaId() const {
  return sellerAreaId;
}
void TopatsDeliverySendRequest::setSellerAreaId (qlonglong sellerAreaId) {
  this->sellerAreaId = sellerAreaId;
  appParams.insert("seller_area_id", QString::number(sellerAreaId));
}

QString TopatsDeliverySendRequest::getSellerMobile() const {
  return sellerMobile;
}
void TopatsDeliverySendRequest::setSellerMobile (QString sellerMobile) {
  this->sellerMobile = sellerMobile;
  appParams.insert("seller_mobile", sellerMobile);
}

QString TopatsDeliverySendRequest::getSellerName() const {
  return sellerName;
}
void TopatsDeliverySendRequest::setSellerName (QString sellerName) {
  this->sellerName = sellerName;
  appParams.insert("seller_name", sellerName);
}

QString TopatsDeliverySendRequest::getSellerPhone() const {
  return sellerPhone;
}
void TopatsDeliverySendRequest::setSellerPhone (QString sellerPhone) {
  this->sellerPhone = sellerPhone;
  appParams.insert("seller_phone", sellerPhone);
}

QString TopatsDeliverySendRequest::getSellerZip() const {
  return sellerZip;
}
void TopatsDeliverySendRequest::setSellerZip (QString sellerZip) {
  this->sellerZip = sellerZip;
  appParams.insert("seller_zip", sellerZip);
}

QString TopatsDeliverySendRequest::getTids() const {
  return tids;
}
void TopatsDeliverySendRequest::setTids (QString tids) {
  this->tids = tids;
  appParams.insert("tids", tids);
}



TopatsDeliverySendResponse *TopatsDeliverySendRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsDeliverySendResponse *tmpResponse = new TopatsDeliverySendResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
