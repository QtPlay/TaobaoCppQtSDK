#include <TaoApiCpp/request/WlbOrderPageGetRequest.h>

QString WlbOrderPageGetRequest::getApiMethodName() const {
  return "taobao.wlb.order.page.get";
}

QDateTime WlbOrderPageGetRequest::getEndTime() const {
  return endTime;
}
void WlbOrderPageGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WlbOrderPageGetRequest::getOrderCode() const {
  return orderCode;
}
void WlbOrderPageGetRequest::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
  appParams.insert("order_code", orderCode);
}

qlonglong WlbOrderPageGetRequest::getOrderStatus() const {
  return orderStatus;
}
void WlbOrderPageGetRequest::setOrderStatus (qlonglong orderStatus) {
  this->orderStatus = orderStatus;
  appParams.insert("order_status", QString::number(orderStatus));
}

QString WlbOrderPageGetRequest::getOrderSubType() const {
  return orderSubType;
}
void WlbOrderPageGetRequest::setOrderSubType (QString orderSubType) {
  this->orderSubType = orderSubType;
  appParams.insert("order_sub_type", orderSubType);
}

QString WlbOrderPageGetRequest::getOrderType() const {
  return orderType;
}
void WlbOrderPageGetRequest::setOrderType (QString orderType) {
  this->orderType = orderType;
  appParams.insert("order_type", orderType);
}

qlonglong WlbOrderPageGetRequest::getPageNo() const {
  return pageNo;
}
void WlbOrderPageGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbOrderPageGetRequest::getPageSize() const {
  return pageSize;
}
void WlbOrderPageGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime WlbOrderPageGetRequest::getStartTime() const {
  return startTime;
}
void WlbOrderPageGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}



WlbOrderPageGetResponse *WlbOrderPageGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderPageGetResponse *tmpResponse = new WlbOrderPageGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
