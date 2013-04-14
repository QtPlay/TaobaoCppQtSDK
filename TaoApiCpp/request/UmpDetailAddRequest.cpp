#include <TaoApiCpp/request/UmpDetailAddRequest.h>

QString UmpDetailAddRequest::getApiMethodName() const {
  return "taobao.ump.detail.add";
}

qlonglong UmpDetailAddRequest::getActId() const {
  return actId;
}
void UmpDetailAddRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}

QString UmpDetailAddRequest::getContent() const {
  return content;
}
void UmpDetailAddRequest::setContent (QString content) {
  this->content = content;
  appParams.insert("content", content);
}



UmpDetailAddResponse *UmpDetailAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpDetailAddResponse *tmpResponse = new UmpDetailAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
