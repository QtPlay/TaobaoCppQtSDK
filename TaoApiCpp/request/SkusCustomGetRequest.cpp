#include <TaoApiCpp/request/SkusCustomGetRequest.h>

QString SkusCustomGetRequest::getApiMethodName() const {
  return "taobao.skus.custom.get";
}

QString SkusCustomGetRequest::getFields() const {
  return fields;
}
void SkusCustomGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString SkusCustomGetRequest::getOuterId() const {
  return outerId;
}
void SkusCustomGetRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}



SkusCustomGetResponse *SkusCustomGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SkusCustomGetResponse *tmpResponse = new SkusCustomGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
