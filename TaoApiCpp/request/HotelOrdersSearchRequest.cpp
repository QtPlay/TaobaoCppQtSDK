#include <TaoApiCpp/request/HotelOrdersSearchRequest.h>

QString HotelOrdersSearchRequest::getApiMethodName() const {
  return "taobao.hotel.orders.search";
}

QDateTime HotelOrdersSearchRequest::getCheckinDateEnd() const {
  return checkinDateEnd;
}
void HotelOrdersSearchRequest::setCheckinDateEnd (QDateTime checkinDateEnd) {
  this->checkinDateEnd = checkinDateEnd;
  appParams.insert("checkin_date_end", checkinDateEnd.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime HotelOrdersSearchRequest::getCheckinDateStart() const {
  return checkinDateStart;
}
void HotelOrdersSearchRequest::setCheckinDateStart (QDateTime checkinDateStart) {
  this->checkinDateStart = checkinDateStart;
  appParams.insert("checkin_date_start", checkinDateStart.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime HotelOrdersSearchRequest::getCheckoutDateEnd() const {
  return checkoutDateEnd;
}
void HotelOrdersSearchRequest::setCheckoutDateEnd (QDateTime checkoutDateEnd) {
  this->checkoutDateEnd = checkoutDateEnd;
  appParams.insert("checkout_date_end", checkoutDateEnd.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime HotelOrdersSearchRequest::getCheckoutDateStart() const {
  return checkoutDateStart;
}
void HotelOrdersSearchRequest::setCheckoutDateStart (QDateTime checkoutDateStart) {
  this->checkoutDateStart = checkoutDateStart;
  appParams.insert("checkout_date_start", checkoutDateStart.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime HotelOrdersSearchRequest::getCreatedEnd() const {
  return createdEnd;
}
void HotelOrdersSearchRequest::setCreatedEnd (QDateTime createdEnd) {
  this->createdEnd = createdEnd;
  appParams.insert("created_end", createdEnd.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime HotelOrdersSearchRequest::getCreatedStart() const {
  return createdStart;
}
void HotelOrdersSearchRequest::setCreatedStart (QDateTime createdStart) {
  this->createdStart = createdStart;
  appParams.insert("created_start", createdStart.toString("yyyy-MM-dd hh:mm:ss"));
}

QString HotelOrdersSearchRequest::getGids() const {
  return gids;
}
void HotelOrdersSearchRequest::setGids (QString gids) {
  this->gids = gids;
  appParams.insert("gids", gids);
}

QString HotelOrdersSearchRequest::getHids() const {
  return hids;
}
void HotelOrdersSearchRequest::setHids (QString hids) {
  this->hids = hids;
  appParams.insert("hids", hids);
}

bool HotelOrdersSearchRequest::getNeedGuest() const {
  return needGuest;
}
void HotelOrdersSearchRequest::setNeedGuest (bool needGuest) {
  this->needGuest = needGuest;
  appParams.insert("need_guest", needGuest? "true": "false");
}

bool HotelOrdersSearchRequest::getNeedMessage() const {
  return needMessage;
}
void HotelOrdersSearchRequest::setNeedMessage (bool needMessage) {
  this->needMessage = needMessage;
  appParams.insert("need_message", needMessage? "true": "false");
}

QString HotelOrdersSearchRequest::getOids() const {
  return oids;
}
void HotelOrdersSearchRequest::setOids (QString oids) {
  this->oids = oids;
  appParams.insert("oids", oids);
}

qlonglong HotelOrdersSearchRequest::getPageNo() const {
  return pageNo;
}
void HotelOrdersSearchRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

QString HotelOrdersSearchRequest::getRids() const {
  return rids;
}
void HotelOrdersSearchRequest::setRids (QString rids) {
  this->rids = rids;
  appParams.insert("rids", rids);
}

QString HotelOrdersSearchRequest::getStatus() const {
  return status;
}
void HotelOrdersSearchRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString HotelOrdersSearchRequest::getTids() const {
  return tids;
}
void HotelOrdersSearchRequest::setTids (QString tids) {
  this->tids = tids;
  appParams.insert("tids", tids);
}



HotelOrdersSearchResponse *HotelOrdersSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelOrdersSearchResponse *tmpResponse = new HotelOrdersSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
