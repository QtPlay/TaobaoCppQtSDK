#include <TaoApiCpp/domain/Qscore.h>
QString Qscore::getCatmatchQscore() const {
  return catmatchQscore;
}
void Qscore::setCatmatchQscore (QString catmatchQscore) {
  this->catmatchQscore = catmatchQscore;
}

QList<KeywordQscore> Qscore::getKeywordQscoreList() const {
  return keywordQscoreList;
}
void Qscore::setKeywordQscoreList (QList<KeywordQscore> keywordQscoreList) {
  this->keywordQscoreList = keywordQscoreList;
}


void Qscore::parseResponse() {
  if (responseParser->hasName("catmatch_qscore")) {
  catmatchQscore = responseParser->getStrByName("catmatch_qscore");
  }
  if (responseParser->hasName("keyword_qscore_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("keyword_qscore_list");
  Parser *parser;
  foreach (parser, listParser) {
    KeywordQscore tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    keywordQscoreList.append(tmp);
  }
  }

}

