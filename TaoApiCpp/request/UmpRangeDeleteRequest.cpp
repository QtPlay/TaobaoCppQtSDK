#include <TaoApiCpp/request/UmpRangeDeleteRequest.h>

QString UmpRangeDeleteRequest::getApiMethodName() const {
  return "taobao.ump.range.delete";
}

qlonglong UmpRangeDeleteRequest::getActId() const {
  return actId;
}
void UmpRangeDeleteRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}

QString UmpRangeDeleteRequest::getIds() const {
  return ids;
}
void UmpRangeDeleteRequest::setIds (QString ids) {
  this->ids = ids;
  appParams.insert("ids", ids);
}

qlonglong UmpRangeDeleteRequest::getType() const {
  return type;
}
void UmpRangeDeleteRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



UmpRangeDeleteResponse *UmpRangeDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpRangeDeleteResponse *tmpResponse = new UmpRangeDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
