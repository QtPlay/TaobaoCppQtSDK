#include <TaoApiCpp/domain/RankedItem.h>
QString RankedItem::getLinkUrl() const {
  return linkUrl;
}
void RankedItem::setLinkUrl (QString linkUrl) {
  this->linkUrl = linkUrl;
}

QString RankedItem::getMaxPrice() const {
  return maxPrice;
}
void RankedItem::setMaxPrice (QString maxPrice) {
  this->maxPrice = maxPrice;
}

QString RankedItem::getNick() const {
  return nick;
}
void RankedItem::setNick (QString nick) {
  this->nick = nick;
}

qlonglong RankedItem::getOrder() const {
  return order;
}
void RankedItem::setOrder (qlonglong order) {
  this->order = order;
}

qlonglong RankedItem::getRankScore() const {
  return rankScore;
}
void RankedItem::setRankScore (qlonglong rankScore) {
  this->rankScore = rankScore;
}

QString RankedItem::getTitle() const {
  return title;
}
void RankedItem::setTitle (QString title) {
  this->title = title;
}


void RankedItem::parseResponse() {
  if (responseParser->hasName("link_url")) {
  linkUrl = responseParser->getStrByName("link_url");
  }
  if (responseParser->hasName("max_price")) {
  maxPrice = responseParser->getStrByName("max_price");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("order")) {
  order = responseParser->getNumByName("order");
  }
  if (responseParser->hasName("rank_score")) {
  rankScore = responseParser->getNumByName("rank_score");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }

}

