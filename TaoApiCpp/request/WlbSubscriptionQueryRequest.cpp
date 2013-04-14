#include <TaoApiCpp/request/WlbSubscriptionQueryRequest.h>

QString WlbSubscriptionQueryRequest::getApiMethodName() const {
  return "taobao.wlb.subscription.query";
}

qlonglong WlbSubscriptionQueryRequest::getPageNo() const {
  return pageNo;
}
void WlbSubscriptionQueryRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbSubscriptionQueryRequest::getPageSize() const {
  return pageSize;
}
void WlbSubscriptionQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString WlbSubscriptionQueryRequest::getStatus() const {
  return status;
}
void WlbSubscriptionQueryRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



WlbSubscriptionQueryResponse *WlbSubscriptionQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbSubscriptionQueryResponse *tmpResponse = new WlbSubscriptionQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
