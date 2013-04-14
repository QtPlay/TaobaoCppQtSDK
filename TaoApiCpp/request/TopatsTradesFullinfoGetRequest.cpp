#include <TaoApiCpp/request/TopatsTradesFullinfoGetRequest.h>

QString TopatsTradesFullinfoGetRequest::getApiMethodName() const {
  return "taobao.topats.trades.fullinfo.get";
}

QString TopatsTradesFullinfoGetRequest::getFields() const {
  return fields;
}
void TopatsTradesFullinfoGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString TopatsTradesFullinfoGetRequest::getTids() const {
  return tids;
}
void TopatsTradesFullinfoGetRequest::setTids (QString tids) {
  this->tids = tids;
  appParams.insert("tids", tids);
}



TopatsTradesFullinfoGetResponse *TopatsTradesFullinfoGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsTradesFullinfoGetResponse *tmpResponse = new TopatsTradesFullinfoGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
