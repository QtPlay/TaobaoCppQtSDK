#include <TaoApiCpp/request/UserTradeSearchRequest.h>

QString UserTradeSearchRequest::getApiMethodName() const {
  return "alipay.user.trade.search";
}

QString UserTradeSearchRequest::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void UserTradeSearchRequest::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
  appParams.insert("alipay_order_no", alipayOrderNo);
}

QString UserTradeSearchRequest::getEndTime() const {
  return endTime;
}
void UserTradeSearchRequest::setEndTime (QString endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime);
}

QString UserTradeSearchRequest::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void UserTradeSearchRequest::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
  appParams.insert("merchant_order_no", merchantOrderNo);
}

QString UserTradeSearchRequest::getOrderFrom() const {
  return orderFrom;
}
void UserTradeSearchRequest::setOrderFrom (QString orderFrom) {
  this->orderFrom = orderFrom;
  appParams.insert("order_from", orderFrom);
}

QString UserTradeSearchRequest::getOrderStatus() const {
  return orderStatus;
}
void UserTradeSearchRequest::setOrderStatus (QString orderStatus) {
  this->orderStatus = orderStatus;
  appParams.insert("order_status", orderStatus);
}

QString UserTradeSearchRequest::getOrderType() const {
  return orderType;
}
void UserTradeSearchRequest::setOrderType (QString orderType) {
  this->orderType = orderType;
  appParams.insert("order_type", orderType);
}

QString UserTradeSearchRequest::getPageNo() const {
  return pageNo;
}
void UserTradeSearchRequest::setPageNo (QString pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", pageNo);
}

QString UserTradeSearchRequest::getPageSize() const {
  return pageSize;
}
void UserTradeSearchRequest::setPageSize (QString pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", pageSize);
}

QString UserTradeSearchRequest::getStartTime() const {
  return startTime;
}
void UserTradeSearchRequest::setStartTime (QString startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime);
}



UserTradeSearchResponse *UserTradeSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UserTradeSearchResponse *tmpResponse = new UserTradeSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
