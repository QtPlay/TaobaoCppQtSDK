#include <TaoApiCpp/response/SimbaKeywordsRecommendGetResponse.h>

RecommendWordPage SimbaKeywordsRecommendGetResponse::getRecommendWords() const {
  return recommendWords;
}
void SimbaKeywordsRecommendGetResponse::setRecommendWords (RecommendWordPage recommendWords) {
  this->recommendWords = recommendWords;
}

void SimbaKeywordsRecommendGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("recommend_words")) {
  recommendWords.setParser(responseParser->getObjectParser("recommend_words"));
  recommendWords.parseResponse();
  }

}

