#include <TaoApiCpp/request/UmpActivityGetRequest.h>

QString UmpActivityGetRequest::getApiMethodName() const {
  return "taobao.ump.activity.get";
}

qlonglong UmpActivityGetRequest::getActId() const {
  return actId;
}
void UmpActivityGetRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}



UmpActivityGetResponse *UmpActivityGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpActivityGetResponse *tmpResponse = new UmpActivityGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
