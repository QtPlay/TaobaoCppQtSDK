#include <TaoApiCpp/domain/RouteExtenalInfo.h>
bool RouteExtenalInfo::getCod() const {
  return cod;
}
void RouteExtenalInfo::setCod (bool cod) {
  this->cod = cod;
}

bool RouteExtenalInfo::getCreditOpened() const {
  return creditOpened;
}
void RouteExtenalInfo::setCreditOpened (bool creditOpened) {
  this->creditOpened = creditOpened;
}

QString RouteExtenalInfo::getCreditTotalBalance() const {
  return creditTotalBalance;
}
void RouteExtenalInfo::setCreditTotalBalance (QString creditTotalBalance) {
  this->creditTotalBalance = creditTotalBalance;
}

bool RouteExtenalInfo::getRecommend() const {
  return recommend;
}
void RouteExtenalInfo::setRecommend (bool recommend) {
  this->recommend = recommend;
}

QList<QString> RouteExtenalInfo::getSpecialCodes() const {
  return specialCodes;
}
void RouteExtenalInfo::setSpecialCodes (QList<QString> specialCodes) {
  this->specialCodes = specialCodes;
}

bool RouteExtenalInfo::getTop() const {
  return top;
}
void RouteExtenalInfo::setTop (bool top) {
  this->top = top;
}


void RouteExtenalInfo::parseResponse() {
  if (responseParser->hasName("cod")) {
  cod = responseParser->getBoolByName("cod");
  }
  if (responseParser->hasName("credit_opened")) {
  creditOpened = responseParser->getBoolByName("credit_opened");
  }
  if (responseParser->hasName("credit_total_balance")) {
  creditTotalBalance = responseParser->getStrByName("credit_total_balance");
  }
  if (responseParser->hasName("recommend")) {
  recommend = responseParser->getBoolByName("recommend");
  }
  if (responseParser->hasName("special_codes")) {
  specialCodes = responseParser->getListStrByName("special_codes");
  }
  if (responseParser->hasName("top")) {
  top = responseParser->getBoolByName("top");
  }

}

