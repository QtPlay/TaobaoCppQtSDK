#include <TaoApiCpp/domain/ADGroupCatMatchForecast.h>
qlonglong ADGroupCatMatchForecast::getAdgroupId() const {
  return adgroupId;
}
void ADGroupCatMatchForecast::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
}

qlonglong ADGroupCatMatchForecast::getCatmatchId() const {
  return catmatchId;
}
void ADGroupCatMatchForecast::setCatmatchId (qlonglong catmatchId) {
  this->catmatchId = catmatchId;
}

QString ADGroupCatMatchForecast::getNick() const {
  return nick;
}
void ADGroupCatMatchForecast::setNick (QString nick) {
  this->nick = nick;
}

QString ADGroupCatMatchForecast::getPriceClick() const {
  return priceClick;
}
void ADGroupCatMatchForecast::setPriceClick (QString priceClick) {
  this->priceClick = priceClick;
}

QString ADGroupCatMatchForecast::getPriceCust() const {
  return priceCust;
}
void ADGroupCatMatchForecast::setPriceCust (QString priceCust) {
  this->priceCust = priceCust;
}

QString ADGroupCatMatchForecast::getPriceRank() const {
  return priceRank;
}
void ADGroupCatMatchForecast::setPriceRank (QString priceRank) {
  this->priceRank = priceRank;
}


void ADGroupCatMatchForecast::parseResponse() {
  if (responseParser->hasName("adgroup_id")) {
  adgroupId = responseParser->getNumByName("adgroup_id");
  }
  if (responseParser->hasName("catmatch_id")) {
  catmatchId = responseParser->getNumByName("catmatch_id");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("price_click")) {
  priceClick = responseParser->getStrByName("price_click");
  }
  if (responseParser->hasName("price_cust")) {
  priceCust = responseParser->getStrByName("price_cust");
  }
  if (responseParser->hasName("price_rank")) {
  priceRank = responseParser->getStrByName("price_rank");
  }

}

