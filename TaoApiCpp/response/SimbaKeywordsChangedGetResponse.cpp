#include <TaoApiCpp/response/SimbaKeywordsChangedGetResponse.h>

KeywordPage SimbaKeywordsChangedGetResponse::getKeywords() const {
  return keywords;
}
void SimbaKeywordsChangedGetResponse::setKeywords (KeywordPage keywords) {
  this->keywords = keywords;
}

void SimbaKeywordsChangedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("keywords")) {
  keywords.setParser(responseParser->getObjectParser("keywords"));
  keywords.parseResponse();
  }

}

