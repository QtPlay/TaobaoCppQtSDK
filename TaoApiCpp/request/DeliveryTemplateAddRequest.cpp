#include <TaoApiCpp/request/DeliveryTemplateAddRequest.h>

QString DeliveryTemplateAddRequest::getApiMethodName() const {
  return "taobao.delivery.template.add";
}

qlonglong DeliveryTemplateAddRequest::getAssumer() const {
  return assumer;
}
void DeliveryTemplateAddRequest::setAssumer (qlonglong assumer) {
  this->assumer = assumer;
  appParams.insert("assumer", QString::number(assumer));
}

qlonglong DeliveryTemplateAddRequest::getConsignAreaId() const {
  return consignAreaId;
}
void DeliveryTemplateAddRequest::setConsignAreaId (qlonglong consignAreaId) {
  this->consignAreaId = consignAreaId;
  appParams.insert("consign_area_id", QString::number(consignAreaId));
}

QString DeliveryTemplateAddRequest::getName() const {
  return name;
}
void DeliveryTemplateAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString DeliveryTemplateAddRequest::getTemplateAddFees() const {
  return templateAddFees;
}
void DeliveryTemplateAddRequest::setTemplateAddFees (QString templateAddFees) {
  this->templateAddFees = templateAddFees;
  appParams.insert("template_add_fees", templateAddFees);
}

QString DeliveryTemplateAddRequest::getTemplateAddStandards() const {
  return templateAddStandards;
}
void DeliveryTemplateAddRequest::setTemplateAddStandards (QString templateAddStandards) {
  this->templateAddStandards = templateAddStandards;
  appParams.insert("template_add_standards", templateAddStandards);
}

QString DeliveryTemplateAddRequest::getTemplateDests() const {
  return templateDests;
}
void DeliveryTemplateAddRequest::setTemplateDests (QString templateDests) {
  this->templateDests = templateDests;
  appParams.insert("template_dests", templateDests);
}

QString DeliveryTemplateAddRequest::getTemplateStartFees() const {
  return templateStartFees;
}
void DeliveryTemplateAddRequest::setTemplateStartFees (QString templateStartFees) {
  this->templateStartFees = templateStartFees;
  appParams.insert("template_start_fees", templateStartFees);
}

QString DeliveryTemplateAddRequest::getTemplateStartStandards() const {
  return templateStartStandards;
}
void DeliveryTemplateAddRequest::setTemplateStartStandards (QString templateStartStandards) {
  this->templateStartStandards = templateStartStandards;
  appParams.insert("template_start_standards", templateStartStandards);
}

QString DeliveryTemplateAddRequest::getTemplateTypes() const {
  return templateTypes;
}
void DeliveryTemplateAddRequest::setTemplateTypes (QString templateTypes) {
  this->templateTypes = templateTypes;
  appParams.insert("template_types", templateTypes);
}

qlonglong DeliveryTemplateAddRequest::getValuation() const {
  return valuation;
}
void DeliveryTemplateAddRequest::setValuation (qlonglong valuation) {
  this->valuation = valuation;
  appParams.insert("valuation", QString::number(valuation));
}



DeliveryTemplateAddResponse *DeliveryTemplateAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  DeliveryTemplateAddResponse *tmpResponse = new DeliveryTemplateAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
