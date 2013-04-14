#include <TaoApiCpp/request/UmpDetailListAddRequest.h>

QString UmpDetailListAddRequest::getApiMethodName() const {
  return "taobao.ump.detail.list.add";
}

qlonglong UmpDetailListAddRequest::getActId() const {
  return actId;
}
void UmpDetailListAddRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}

QString UmpDetailListAddRequest::getDetails() const {
  return details;
}
void UmpDetailListAddRequest::setDetails (QString details) {
  this->details = details;
  appParams.insert("details", details);
}



UmpDetailListAddResponse *UmpDetailListAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpDetailListAddResponse *tmpResponse = new UmpDetailListAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
