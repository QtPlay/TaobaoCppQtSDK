#include <TaoApiCpp/request/UmpMbbsListGetRequest.h>

QString UmpMbbsListGetRequest::getApiMethodName() const {
  return "taobao.ump.mbbs.list.get";
}

qlonglong UmpMbbsListGetRequest::getIds() const {
  return ids;
}
void UmpMbbsListGetRequest::setIds (qlonglong ids) {
  this->ids = ids;
  appParams.insert("ids", QString::number(ids));
}



UmpMbbsListGetResponse *UmpMbbsListGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpMbbsListGetResponse *tmpResponse = new UmpMbbsListGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
