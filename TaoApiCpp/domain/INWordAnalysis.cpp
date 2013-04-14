#include <TaoApiCpp/domain/INWordAnalysis.h>
QString INWordAnalysis::getWord() const {
  return word;
}
void INWordAnalysis::setWord (QString word) {
  this->word = word;
}

QString INWordAnalysis::getWordAreaPer() const {
  return wordAreaPer;
}
void INWordAnalysis::setWordAreaPer (QString wordAreaPer) {
  this->wordAreaPer = wordAreaPer;
}

QString INWordAnalysis::getWordHpPrice() const {
  return wordHpPrice;
}
void INWordAnalysis::setWordHpPrice (QString wordHpPrice) {
  this->wordHpPrice = wordHpPrice;
}

QString INWordAnalysis::getWordSourcePer() const {
  return wordSourcePer;
}
void INWordAnalysis::setWordSourcePer (QString wordSourcePer) {
  this->wordSourcePer = wordSourcePer;
}


void INWordAnalysis::parseResponse() {
  if (responseParser->hasName("word")) {
  word = responseParser->getStrByName("word");
  }
  if (responseParser->hasName("word_area_per")) {
  wordAreaPer = responseParser->getStrByName("word_area_per");
  }
  if (responseParser->hasName("word_hp_price")) {
  wordHpPrice = responseParser->getStrByName("word_hp_price");
  }
  if (responseParser->hasName("word_source_per")) {
  wordSourcePer = responseParser->getStrByName("word_source_per");
  }

}

