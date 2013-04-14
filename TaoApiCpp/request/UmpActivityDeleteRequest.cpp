#include <TaoApiCpp/request/UmpActivityDeleteRequest.h>

QString UmpActivityDeleteRequest::getApiMethodName() const {
  return "taobao.ump.activity.delete";
}

qlonglong UmpActivityDeleteRequest::getActId() const {
  return actId;
}
void UmpActivityDeleteRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}



UmpActivityDeleteResponse *UmpActivityDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpActivityDeleteResponse *tmpResponse = new UmpActivityDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
