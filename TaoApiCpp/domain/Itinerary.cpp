#include <TaoApiCpp/domain/Itinerary.h>
QString Itinerary::getAddress() const {
  return address;
}
void Itinerary::setAddress (QString address) {
  this->address = address;
}

QString Itinerary::getAlipayTradeNo() const {
  return alipayTradeNo;
}
void Itinerary::setAlipayTradeNo (QString alipayTradeNo) {
  this->alipayTradeNo = alipayTradeNo;
}

QString Itinerary::getCompanyCode() const {
  return companyCode;
}
void Itinerary::setCompanyCode (QString companyCode) {
  this->companyCode = companyCode;
}

QString Itinerary::getExpressCode() const {
  return expressCode;
}
void Itinerary::setExpressCode (QString expressCode) {
  this->expressCode = expressCode;
}

QString Itinerary::getExtra() const {
  return extra;
}
void Itinerary::setExtra (QString extra) {
  this->extra = extra;
}

qlonglong Itinerary::getId() const {
  return id;
}
void Itinerary::setId (qlonglong id) {
  this->id = id;
}

QString Itinerary::getItineraryNo() const {
  return itineraryNo;
}
void Itinerary::setItineraryNo (QString itineraryNo) {
  this->itineraryNo = itineraryNo;
}

QString Itinerary::getMobile() const {
  return mobile;
}
void Itinerary::setMobile (QString mobile) {
  this->mobile = mobile;
}

QString Itinerary::getMobileBak() const {
  return mobileBak;
}
void Itinerary::setMobileBak (QString mobileBak) {
  this->mobileBak = mobileBak;
}

QString Itinerary::getName() const {
  return name;
}
void Itinerary::setName (QString name) {
  this->name = name;
}

QString Itinerary::getPrice() const {
  return price;
}
void Itinerary::setPrice (QString price) {
  this->price = price;
}

QString Itinerary::getSendDate() const {
  return sendDate;
}
void Itinerary::setSendDate (QString sendDate) {
  this->sendDate = sendDate;
}

qlonglong Itinerary::getStatus() const {
  return status;
}
void Itinerary::setStatus (qlonglong status) {
  this->status = status;
}

qlonglong Itinerary::getType() const {
  return type;
}
void Itinerary::setType (qlonglong type) {
  this->type = type;
}


void Itinerary::parseResponse() {
  if (responseParser->hasName("address")) {
  address = responseParser->getStrByName("address");
  }
  if (responseParser->hasName("alipay_trade_no")) {
  alipayTradeNo = responseParser->getStrByName("alipay_trade_no");
  }
  if (responseParser->hasName("company_code")) {
  companyCode = responseParser->getStrByName("company_code");
  }
  if (responseParser->hasName("express_code")) {
  expressCode = responseParser->getStrByName("express_code");
  }
  if (responseParser->hasName("extra")) {
  extra = responseParser->getStrByName("extra");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("itinerary_no")) {
  itineraryNo = responseParser->getStrByName("itinerary_no");
  }
  if (responseParser->hasName("mobile")) {
  mobile = responseParser->getStrByName("mobile");
  }
  if (responseParser->hasName("mobile_bak")) {
  mobileBak = responseParser->getStrByName("mobile_bak");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("send_date")) {
  sendDate = responseParser->getStrByName("send_date");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getNumByName("type");
  }

}

