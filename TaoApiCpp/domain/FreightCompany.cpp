#include <TaoApiCpp/domain/FreightCompany.h>
QString FreightCompany::getComments() const {
  return comments;
}
void FreightCompany::setComments (QString comments) {
  this->comments = comments;
}

qlonglong FreightCompany::getCompanyId() const {
  return companyId;
}
void FreightCompany::setCompanyId (qlonglong companyId) {
  this->companyId = companyId;
}

QString FreightCompany::getCompanyName() const {
  return companyName;
}
void FreightCompany::setCompanyName (QString companyName) {
  this->companyName = companyName;
}

QString FreightCompany::getCompanyeCode() const {
  return companyeCode;
}
void FreightCompany::setCompanyeCode (QString companyeCode) {
  this->companyeCode = companyeCode;
}

QString FreightCompany::getCorpLevel() const {
  return corpLevel;
}
void FreightCompany::setCorpLevel (QString corpLevel) {
  this->corpLevel = corpLevel;
}

QString FreightCompany::getCustomerServiceTel() const {
  return customerServiceTel;
}
void FreightCompany::setCustomerServiceTel (QString customerServiceTel) {
  this->customerServiceTel = customerServiceTel;
}

QString FreightCompany::getLogoUrl() const {
  return logoUrl;
}
void FreightCompany::setLogoUrl (QString logoUrl) {
  this->logoUrl = logoUrl;
}

QString FreightCompany::getShopUrl() const {
  return shopUrl;
}
void FreightCompany::setShopUrl (QString shopUrl) {
  this->shopUrl = shopUrl;
}

qlonglong FreightCompany::getSort() const {
  return sort;
}
void FreightCompany::setSort (qlonglong sort) {
  this->sort = sort;
}

QString FreightCompany::getVasFeeHelpUrl() const {
  return vasFeeHelpUrl;
}
void FreightCompany::setVasFeeHelpUrl (QString vasFeeHelpUrl) {
  this->vasFeeHelpUrl = vasFeeHelpUrl;
}

QList<WangwangInfo> FreightCompany::getWangwangList() const {
  return wangwangList;
}
void FreightCompany::setWangwangList (QList<WangwangInfo> wangwangList) {
  this->wangwangList = wangwangList;
}


void FreightCompany::parseResponse() {
  if (responseParser->hasName("comments")) {
  comments = responseParser->getStrByName("comments");
  }
  if (responseParser->hasName("company_id")) {
  companyId = responseParser->getNumByName("company_id");
  }
  if (responseParser->hasName("company_name")) {
  companyName = responseParser->getStrByName("company_name");
  }
  if (responseParser->hasName("companye_code")) {
  companyeCode = responseParser->getStrByName("companye_code");
  }
  if (responseParser->hasName("corp_level")) {
  corpLevel = responseParser->getStrByName("corp_level");
  }
  if (responseParser->hasName("customer_service_tel")) {
  customerServiceTel = responseParser->getStrByName("customer_service_tel");
  }
  if (responseParser->hasName("logo_url")) {
  logoUrl = responseParser->getStrByName("logo_url");
  }
  if (responseParser->hasName("shop_url")) {
  shopUrl = responseParser->getStrByName("shop_url");
  }
  if (responseParser->hasName("sort")) {
  sort = responseParser->getNumByName("sort");
  }
  if (responseParser->hasName("vas_fee_help_url")) {
  vasFeeHelpUrl = responseParser->getStrByName("vas_fee_help_url");
  }
  if (responseParser->hasName("wangwang_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("wangwang_list");
  Parser *parser;
  foreach (parser, listParser) {
    WangwangInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    wangwangList.append(tmp);
  }
  }

}

