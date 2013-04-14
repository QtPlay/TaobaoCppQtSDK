#include <TaoApiCpp/request/DeliveryTemplatesGetRequest.h>

QString DeliveryTemplatesGetRequest::getApiMethodName() const {
  return "taobao.delivery.templates.get";
}

QString DeliveryTemplatesGetRequest::getFields() const {
  return fields;
}
void DeliveryTemplatesGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



DeliveryTemplatesGetResponse *DeliveryTemplatesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  DeliveryTemplatesGetResponse *tmpResponse = new DeliveryTemplatesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
