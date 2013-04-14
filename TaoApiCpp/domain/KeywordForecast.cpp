#include <TaoApiCpp/domain/KeywordForecast.h>
qlonglong KeywordForecast::getKeywordId() const {
  return keywordId;
}
void KeywordForecast::setKeywordId (qlonglong keywordId) {
  this->keywordId = keywordId;
}

QString KeywordForecast::getNick() const {
  return nick;
}
void KeywordForecast::setNick (QString nick) {
  this->nick = nick;
}

QString KeywordForecast::getPriceClick() const {
  return priceClick;
}
void KeywordForecast::setPriceClick (QString priceClick) {
  this->priceClick = priceClick;
}

QString KeywordForecast::getPriceCust() const {
  return priceCust;
}
void KeywordForecast::setPriceCust (QString priceCust) {
  this->priceCust = priceCust;
}

QString KeywordForecast::getPriceRank() const {
  return priceRank;
}
void KeywordForecast::setPriceRank (QString priceRank) {
  this->priceRank = priceRank;
}

QString KeywordForecast::getWord() const {
  return word;
}
void KeywordForecast::setWord (QString word) {
  this->word = word;
}


void KeywordForecast::parseResponse() {
  if (responseParser->hasName("keyword_id")) {
  keywordId = responseParser->getNumByName("keyword_id");
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
  if (responseParser->hasName("word")) {
  word = responseParser->getStrByName("word");
  }

}

