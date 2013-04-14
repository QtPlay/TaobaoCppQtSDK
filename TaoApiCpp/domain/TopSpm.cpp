#include <TaoApiCpp/domain/TopSpm.h>
QString TopSpm::getAlipayDealAmount() const {
  return alipayDealAmount;
}
void TopSpm::setAlipayDealAmount (QString alipayDealAmount) {
  this->alipayDealAmount = alipayDealAmount;
}

qlonglong TopSpm::getAlipayDealCount() const {
  return alipayDealCount;
}
void TopSpm::setAlipayDealCount (qlonglong alipayDealCount) {
  this->alipayDealCount = alipayDealCount;
}

qlonglong TopSpm::getAlipayUv() const {
  return alipayUv;
}
void TopSpm::setAlipayUv (qlonglong alipayUv) {
  this->alipayUv = alipayUv;
}

QString TopSpm::getModule() const {
  return module;
}
void TopSpm::setModule (QString module) {
  this->module = module;
}

QString TopSpm::getPage() const {
  return page;
}
void TopSpm::setPage (QString page) {
  this->page = page;
}

qlonglong TopSpm::getPv() const {
  return pv;
}
void TopSpm::setPv (qlonglong pv) {
  this->pv = pv;
}

qlonglong TopSpm::getUv() const {
  return uv;
}
void TopSpm::setUv (qlonglong uv) {
  this->uv = uv;
}


void TopSpm::parseResponse() {
  if (responseParser->hasName("alipay_deal_amount")) {
  alipayDealAmount = responseParser->getStrByName("alipay_deal_amount");
  }
  if (responseParser->hasName("alipay_deal_count")) {
  alipayDealCount = responseParser->getNumByName("alipay_deal_count");
  }
  if (responseParser->hasName("alipay_uv")) {
  alipayUv = responseParser->getNumByName("alipay_uv");
  }
  if (responseParser->hasName("module")) {
  module = responseParser->getStrByName("module");
  }
  if (responseParser->hasName("page")) {
  page = responseParser->getStrByName("page");
  }
  if (responseParser->hasName("pv")) {
  pv = responseParser->getNumByName("pv");
  }
  if (responseParser->hasName("uv")) {
  uv = responseParser->getNumByName("uv");
  }

}

