#include <TaoApiCpp/request/ItemSkusGetRequest.h>

QString ItemSkusGetRequest::getApiMethodName() const {
  return "taobao.item.skus.get";
}

QString ItemSkusGetRequest::getFields() const {
  return fields;
}
void ItemSkusGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString ItemSkusGetRequest::getNumIids() const {
  return numIids;
}
void ItemSkusGetRequest::setNumIids (QString numIids) {
  this->numIids = numIids;
  appParams.insert("num_iids", numIids);
}



ItemSkusGetResponse *ItemSkusGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemSkusGetResponse *tmpResponse = new ItemSkusGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
