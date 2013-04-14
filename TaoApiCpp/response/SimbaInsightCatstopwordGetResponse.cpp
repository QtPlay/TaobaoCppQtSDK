#include <TaoApiCpp/response/SimbaInsightCatstopwordGetResponse.h>

QList<QString> SimbaInsightCatstopwordGetResponse::getTopWords() const {
  return topWords;
}
void SimbaInsightCatstopwordGetResponse::setTopWords (QList<QString> topWords) {
  this->topWords = topWords;
}

void SimbaInsightCatstopwordGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("top_words")) {
  topWords = responseParser->getListStrByName("top_words");
  }

}

