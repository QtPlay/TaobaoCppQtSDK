#include <TaoApiCpp/request/ShopcatsListGetRequest.h>

QString ShopcatsListGetRequest::getApiMethodName() const {
  return "taobao.shopcats.list.get";
}

QString ShopcatsListGetRequest::getFields() const {
  return fields;
}
void ShopcatsListGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



ShopcatsListGetResponse *ShopcatsListGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ShopcatsListGetResponse *tmpResponse = new ShopcatsListGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
