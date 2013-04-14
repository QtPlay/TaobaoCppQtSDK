#include <TaoApiCpp/request/DeliveryTemplateGetRequest.h>

QString DeliveryTemplateGetRequest::getApiMethodName() const {
  return "taobao.delivery.template.get";
}

QString DeliveryTemplateGetRequest::getFields() const {
  return fields;
}
void DeliveryTemplateGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString DeliveryTemplateGetRequest::getTemplateIds() const {
  return templateIds;
}
void DeliveryTemplateGetRequest::setTemplateIds (QString templateIds) {
  this->templateIds = templateIds;
  appParams.insert("template_ids", templateIds);
}

QString DeliveryTemplateGetRequest::getUserNick() const {
  return userNick;
}
void DeliveryTemplateGetRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



DeliveryTemplateGetResponse *DeliveryTemplateGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  DeliveryTemplateGetResponse *tmpResponse = new DeliveryTemplateGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
