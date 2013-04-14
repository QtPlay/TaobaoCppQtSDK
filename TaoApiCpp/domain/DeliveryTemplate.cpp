#include <TaoApiCpp/domain/DeliveryTemplate.h>
QString DeliveryTemplate::getAddress() const {
  return address;
}
void DeliveryTemplate::setAddress (QString address) {
  this->address = address;
}

qlonglong DeliveryTemplate::getAssumer() const {
  return assumer;
}
void DeliveryTemplate::setAssumer (qlonglong assumer) {
  this->assumer = assumer;
}

qlonglong DeliveryTemplate::getConsignAreaId() const {
  return consignAreaId;
}
void DeliveryTemplate::setConsignAreaId (qlonglong consignAreaId) {
  this->consignAreaId = consignAreaId;
}

QDateTime DeliveryTemplate::getCreated() const {
  return created;
}
void DeliveryTemplate::setCreated (QDateTime created) {
  this->created = created;
}

QList<TopFee> DeliveryTemplate::getFeeList() const {
  return feeList;
}
void DeliveryTemplate::setFeeList (QList<TopFee> feeList) {
  this->feeList = feeList;
}

QDateTime DeliveryTemplate::getModified() const {
  return modified;
}
void DeliveryTemplate::setModified (QDateTime modified) {
  this->modified = modified;
}

QString DeliveryTemplate::getName() const {
  return name;
}
void DeliveryTemplate::setName (QString name) {
  this->name = name;
}

QString DeliveryTemplate::getSupports() const {
  return supports;
}
void DeliveryTemplate::setSupports (QString supports) {
  this->supports = supports;
}

qlonglong DeliveryTemplate::getTemplateId() const {
  return templateId;
}
void DeliveryTemplate::setTemplateId (qlonglong templateId) {
  this->templateId = templateId;
}

qlonglong DeliveryTemplate::getValuation() const {
  return valuation;
}
void DeliveryTemplate::setValuation (qlonglong valuation) {
  this->valuation = valuation;
}


void DeliveryTemplate::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("assumer")) {
  assumer = responseParser->getNumByName("assumer");
  }
  if (responseParser->hasName("consign_area_id")) {
  consignAreaId = responseParser->getNumByName("consign_area_id");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("fee_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("fee_list");
  Parser *parser;
  foreach (parser, listParser) {
    TopFee tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    feeList.append(tmp);
  }
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("supports")) {
  supports = responseParser->getStrByName("supports");
  }
  if (responseParser->hasName("template_id")) {
  templateId = responseParser->getNumByName("template_id");
  }
  if (responseParser->hasName("valuation")) {
  valuation = responseParser->getNumByName("valuation");
  }

}

