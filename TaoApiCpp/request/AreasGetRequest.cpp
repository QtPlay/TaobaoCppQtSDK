#include <TaoApiCpp/request/AreasGetRequest.h>

QString AreasGetRequest::getApiMethodName() const {
  return "taobao.areas.get";
}

QString AreasGetRequest::getFields() const {
  return fields;
}
void AreasGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



AreasGetResponse *AreasGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  AreasGetResponse *tmpResponse = new AreasGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
