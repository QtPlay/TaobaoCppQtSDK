#include <TaoApiCpp/response/SimbaKeywordKeywordforecastGetResponse.h>

KeywordForecast SimbaKeywordKeywordforecastGetResponse::getKeywordForecast() const {
  return keywordForecast;
}
void SimbaKeywordKeywordforecastGetResponse::setKeywordForecast (KeywordForecast keywordForecast) {
  this->keywordForecast = keywordForecast;
}

void SimbaKeywordKeywordforecastGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("keyword_forecast")) {
  keywordForecast.setParser(responseParser->getObjectParser("keyword_forecast"));
  keywordForecast.parseResponse();
  }

}

