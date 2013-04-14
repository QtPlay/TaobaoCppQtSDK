#include <TaoApiCpp/request/ItemcatsIncrementGetRequest.h>

QString ItemcatsIncrementGetRequest::getApiMethodName() const {
  return "taobao.itemcats.increment.get";
}

qlonglong ItemcatsIncrementGetRequest::getCids() const {
  return cids;
}
void ItemcatsIncrementGetRequest::setCids (qlonglong cids) {
  this->cids = cids;
  appParams.insert("cids", QString::number(cids));
}

qlonglong ItemcatsIncrementGetRequest::getDays() const {
  return days;
}
void ItemcatsIncrementGetRequest::setDays (qlonglong days) {
  this->days = days;
  appParams.insert("days", QString::number(days));
}

qlonglong ItemcatsIncrementGetRequest::getType() const {
  return type;
}
void ItemcatsIncrementGetRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



ItemcatsIncrementGetResponse *ItemcatsIncrementGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemcatsIncrementGetResponse *tmpResponse = new ItemcatsIncrementGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
