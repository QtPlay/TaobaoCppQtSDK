#include <TaoApiCpp/response/SimbaInsightCatsrelatedwordGetResponse.h>

QList<QString> SimbaInsightCatsrelatedwordGetResponse::getRelatedWords() const {
  return relatedWords;
}
void SimbaInsightCatsrelatedwordGetResponse::setRelatedWords (QList<QString> relatedWords) {
  this->relatedWords = relatedWords;
}

void SimbaInsightCatsrelatedwordGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("related_words")) {
  relatedWords = responseParser->getListStrByName("related_words");
  }

}

