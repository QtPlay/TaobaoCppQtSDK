#include <TaoApiCpp/response/SimbaKeywordsQscoreGetResponse.h>

QList<KeywordQscore> SimbaKeywordsQscoreGetResponse::getKeywordQscoreList() const {
  return keywordQscoreList;
}
void SimbaKeywordsQscoreGetResponse::setKeywordQscoreList (QList<KeywordQscore> keywordQscoreList) {
  this->keywordQscoreList = keywordQscoreList;
}

void SimbaKeywordsQscoreGetResponse::parseNormalResponse() {
  parseError();
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

