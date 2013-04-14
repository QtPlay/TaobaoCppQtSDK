#include <TaoApiCpp/request/DeliveryTemplateDeleteRequest.h>

QString DeliveryTemplateDeleteRequest::getApiMethodName() const {
  return "taobao.delivery.template.delete";
}

qlonglong DeliveryTemplateDeleteRequest::getTemplateId() const {
  return templateId;
}
void DeliveryTemplateDeleteRequest::setTemplateId (qlonglong templateId) {
  this->templateId = templateId;
  appParams.insert("template_id", QString::number(templateId));
}



DeliveryTemplateDeleteResponse *DeliveryTemplateDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  DeliveryTemplateDeleteResponse *tmpResponse = new DeliveryTemplateDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
