#include <TaoApiCpp/request/ItemsCustomGetRequest.h>

QString ItemsCustomGetRequest::getApiMethodName() const {
  return "taobao.items.custom.get";
}

QString ItemsCustomGetRequest::getFields() const {
  return fields;
}
void ItemsCustomGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString ItemsCustomGetRequest::getOuterId() const {
  return outerId;
}
void ItemsCustomGetRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}



ItemsCustomGetResponse *ItemsCustomGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemsCustomGetResponse *tmpResponse = new ItemsCustomGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
