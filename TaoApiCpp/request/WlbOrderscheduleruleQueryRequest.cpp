#include <TaoApiCpp/request/WlbOrderscheduleruleQueryRequest.h>

QString WlbOrderscheduleruleQueryRequest::getApiMethodName() const {
  return "taobao.wlb.orderschedulerule.query";
}

qlonglong WlbOrderscheduleruleQueryRequest::getPageNo() const {
  return pageNo;
}
void WlbOrderscheduleruleQueryRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbOrderscheduleruleQueryRequest::getPageSize() const {
  return pageSize;
}
void WlbOrderscheduleruleQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



WlbOrderscheduleruleQueryResponse *WlbOrderscheduleruleQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOrderscheduleruleQueryResponse *tmpResponse = new WlbOrderscheduleruleQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
