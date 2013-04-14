#include <TaoApiCpp/request/WlbTmsorderQueryRequest.h>

QString WlbTmsorderQueryRequest::getApiMethodName() const {
  return "taobao.wlb.tmsorder.query";
}

QString WlbTmsorderQueryRequest::getOrderCode() const {
  return orderCode;
}
void WlbTmsorderQueryRequest::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
  appParams.insert("order_code", orderCode);
}

qlonglong WlbTmsorderQueryRequest::getPageNo() const {
  return pageNo;
}
void WlbTmsorderQueryRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbTmsorderQueryRequest::getPageSize() const {
  return pageSize;
}
void WlbTmsorderQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



WlbTmsorderQueryResponse *WlbTmsorderQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbTmsorderQueryResponse *tmpResponse = new WlbTmsorderQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
