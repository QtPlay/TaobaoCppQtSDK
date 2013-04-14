#include <TaoApiCpp/request/TopatsItemcatsGetRequest.h>

QString TopatsItemcatsGetRequest::getApiMethodName() const {
  return "taobao.topats.itemcats.get";
}

QString TopatsItemcatsGetRequest::getCids() const {
  return cids;
}
void TopatsItemcatsGetRequest::setCids (QString cids) {
  this->cids = cids;
  appParams.insert("cids", cids);
}

QString TopatsItemcatsGetRequest::getOutputFormat() const {
  return outputFormat;
}
void TopatsItemcatsGetRequest::setOutputFormat (QString outputFormat) {
  this->outputFormat = outputFormat;
  appParams.insert("output_format", outputFormat);
}

qlonglong TopatsItemcatsGetRequest::getType() const {
  return type;
}
void TopatsItemcatsGetRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



TopatsItemcatsGetResponse *TopatsItemcatsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsItemcatsGetResponse *tmpResponse = new TopatsItemcatsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
