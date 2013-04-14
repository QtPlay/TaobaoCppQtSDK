#include <TaoApiCpp/request/UmpRangeGetRequest.h>

QString UmpRangeGetRequest::getApiMethodName() const {
  return "taobao.ump.range.get";
}

qlonglong UmpRangeGetRequest::getActId() const {
  return actId;
}
void UmpRangeGetRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}



UmpRangeGetResponse *UmpRangeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpRangeGetResponse *tmpResponse = new UmpRangeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
