#include <TaoApiCpp/request/WlbOrderitemPageGetRequest.h>

QString WlbOrderitemPageGetRequest::getApiMethodName() const {
  return "taobao.wlb.orderitem.page.get";
}

QString WlbOrderitemPageGetRequest::getOrderCode() const {
  return orderCode;
}
void WlbOrderitemPageGetRequest::setOrderCode (QString orderCode) {
  this->orderCode = orderCode;
  appParams.insert("order_code", orderCode);
}

qlonglong WlbOrderitemPageGetRequest::getPageNo() const {
  return pageNo;
}
void WlbOrderitemPageGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbOrderitemPageGetRequest::getPageSize() const {
  return pageSize;
}
void WlbOrderitemPageGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



WlbOrderitemPageGetResponse *WlbOrderitemPageGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderitemPageGetResponse *tmpResponse = new WlbOrderitemPageGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
