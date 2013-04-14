#include <TaoApiCpp/domain/RecommendWord.h>
QString RecommendWord::getAveragePrice() const {
  return averagePrice;
}
void RecommendWord::setAveragePrice (QString averagePrice) {
  this->averagePrice = averagePrice;
}

QString RecommendWord::getPertinence() const {
  return pertinence;
}
void RecommendWord::setPertinence (QString pertinence) {
  this->pertinence = pertinence;
}

QString RecommendWord::getPv() const {
  return pv;
}
void RecommendWord::setPv (QString pv) {
  this->pv = pv;
}

QString RecommendWord::getWord() const {
  return word;
}
void RecommendWord::setWord (QString word) {
  this->word = word;
}


void RecommendWord::parseResponse() {
  if (responseParser->hasName("average_price")) {
  averagePrice = responseParser->getStrByName("average_price");
  }
  if (responseParser->hasName("pertinence")) {
  pertinence = responseParser->getStrByName("pertinence");
  }
  if (responseParser->hasName("pv")) {
  pv = responseParser->getStrByName("pv");
  }
  if (responseParser->hasName("word")) {
  word = responseParser->getStrByName("word");
  }

}

