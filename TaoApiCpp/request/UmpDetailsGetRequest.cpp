#include <TaoApiCpp/request/UmpDetailsGetRequest.h>

QString UmpDetailsGetRequest::getApiMethodName() const {
  return "taobao.ump.details.get";
}

qlonglong UmpDetailsGetRequest::getActId() const {
  return actId;
}
void UmpDetailsGetRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}

qlonglong UmpDetailsGetRequest::getPageNo() const {
  return pageNo;
}
void UmpDetailsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong UmpDetailsGetRequest::getPageSize() const {
  return pageSize;
}
void UmpDetailsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



UmpDetailsGetResponse *UmpDetailsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpDetailsGetResponse *tmpResponse = new UmpDetailsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
