#include <TaoApiCpp/request/DeliveryTemplateUpdateRequest.h>

QString DeliveryTemplateUpdateRequest::getApiMethodName() const {
  return "taobao.delivery.template.update";
}

qlonglong DeliveryTemplateUpdateRequest::getAssumer() const {
  return assumer;
}
void DeliveryTemplateUpdateRequest::setAssumer (qlonglong assumer) {
  this->assumer = assumer;
  appParams.insert("assumer", QString::number(assumer));
}

QString DeliveryTemplateUpdateRequest::getName() const {
  return name;
}
void DeliveryTemplateUpdateRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString DeliveryTemplateUpdateRequest::getTemplateAddFees() const {
  return templateAddFees;
}
void DeliveryTemplateUpdateRequest::setTemplateAddFees (QString templateAddFees) {
  this->templateAddFees = templateAddFees;
  appParams.insert("template_add_fees", templateAddFees);
}

QString DeliveryTemplateUpdateRequest::getTemplateAddStandards() const {
  return templateAddStandards;
}
void DeliveryTemplateUpdateRequest::setTemplateAddStandards (QString templateAddStandards) {
  this->templateAddStandards = templateAddStandards;
  appParams.insert("template_add_standards", templateAddStandards);
}

QString DeliveryTemplateUpdateRequest::getTemplateDests() const {
  return templateDests;
}
void DeliveryTemplateUpdateRequest::setTemplateDests (QString templateDests) {
  this->templateDests = templateDests;
  appParams.insert("template_dests", templateDests);
}

qlonglong DeliveryTemplateUpdateRequest::getTemplateId() const {
  return templateId;
}
void DeliveryTemplateUpdateRequest::setTemplateId (qlonglong templateId) {
  this->templateId = templateId;
  appParams.insert("template_id", QString::number(templateId));
}

QString DeliveryTemplateUpdateRequest::getTemplateStartFees() const {
  return templateStartFees;
}
void DeliveryTemplateUpdateRequest::setTemplateStartFees (QString templateStartFees) {
  this->templateStartFees = templateStartFees;
  appParams.insert("template_start_fees", templateStartFees);
}

QString DeliveryTemplateUpdateRequest::getTemplateStartStandards() const {
  return templateStartStandards;
}
void DeliveryTemplateUpdateRequest::setTemplateStartStandards (QString templateStartStandards) {
  this->templateStartStandards = templateStartStandards;
  appParams.insert("template_start_standards", templateStartStandards);
}

QString DeliveryTemplateUpdateRequest::getTemplateTypes() const {
  return templateTypes;
}
void DeliveryTemplateUpdateRequest::setTemplateTypes (QString templateTypes) {
  this->templateTypes = templateTypes;
  appParams.insert("template_types", templateTypes);
}



DeliveryTemplateUpdateResponse *DeliveryTemplateUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  DeliveryTemplateUpdateResponse *tmpResponse = new DeliveryTemplateUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
