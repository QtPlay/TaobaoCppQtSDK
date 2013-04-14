#include <TaoApiCpp/request/UmpActivitiesListGetRequest.h>

QString UmpActivitiesListGetRequest::getApiMethodName() const {
  return "taobao.ump.activities.list.get";
}

qlonglong UmpActivitiesListGetRequest::getIds() const {
  return ids;
}
void UmpActivitiesListGetRequest::setIds (qlonglong ids) {
  this->ids = ids;
  appParams.insert("ids", QString::number(ids));
}



UmpActivitiesListGetResponse *UmpActivitiesListGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpActivitiesListGetResponse *tmpResponse = new UmpActivitiesListGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
