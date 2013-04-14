#include <TaoApiCpp/request/UmpRangeAddRequest.h>

QString UmpRangeAddRequest::getApiMethodName() const {
  return "taobao.ump.range.add";
}

qlonglong UmpRangeAddRequest::getActId() const {
  return actId;
}
void UmpRangeAddRequest::setActId (qlonglong actId) {
  this->actId = actId;
  appParams.insert("act_id", QString::number(actId));
}

QString UmpRangeAddRequest::getIds() const {
  return ids;
}
void UmpRangeAddRequest::setIds (QString ids) {
  this->ids = ids;
  appParams.insert("ids", ids);
}

qlonglong UmpRangeAddRequest::getType() const {
  return type;
}
void UmpRangeAddRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



UmpRangeAddResponse *UmpRangeAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpRangeAddResponse *tmpResponse = new UmpRangeAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
