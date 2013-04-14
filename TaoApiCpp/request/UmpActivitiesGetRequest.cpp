#include <TaoApiCpp/request/UmpActivitiesGetRequest.h>

QString UmpActivitiesGetRequest::getApiMethodName() const {
  return "taobao.ump.activities.get";
}

qlonglong UmpActivitiesGetRequest::getPageNo() const {
  return pageNo;
}
void UmpActivitiesGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong UmpActivitiesGetRequest::getPageSize() const {
  return pageSize;
}
void UmpActivitiesGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong UmpActivitiesGetRequest::getToolId() const {
  return toolId;
}
void UmpActivitiesGetRequest::setToolId (qlonglong toolId) {
  this->toolId = toolId;
  appParams.insert("tool_id", QString::number(toolId));
}



UmpActivitiesGetResponse *UmpActivitiesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpActivitiesGetResponse *tmpResponse = new UmpActivitiesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
