#include <TaoApiCpp/request/UmpActivityUpdateRequest.h>

QString UmpActivityUpdateRequest::getApiMethodName() const {
  return "taobao.ump.activity.update";
}

qlonglong UmpActivityUpdateRequest::getActId() const {
  return actId;
}
void UmpActivityUpdateRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}

QString UmpActivityUpdateRequest::getContent() const {
  return content;
}
void UmpActivityUpdateRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}



UmpActivityUpdateResponse *UmpActivityUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpActivityUpdateResponse *tmpResponse = new UmpActivityUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
