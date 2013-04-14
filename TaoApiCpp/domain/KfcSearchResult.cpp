#include <TaoApiCpp/domain/KfcSearchResult.h>
QString KfcSearchResult::getContent() const {
  return content;
}
void KfcSearchResult::setContent (QString content) {
  this->content = content;
}

QString KfcSearchResult::getLevel() const {
  return level;
}
void KfcSearchResult::setLevel (QString level) {
  this->level = level;
}

bool KfcSearchResult::getMatched() const {
  return matched;
}
void KfcSearchResult::setMatched (bool matched) {
  this->matched = matched;
}


void KfcSearchResult::parseResponse() {
  if (responseParser->hasName("content")) {
  content = responseParser->getStrByName("content");
  }
  if (responseParser->hasName("level")) {
  level = responseParser->getStrByName("level");
  }
  if (responseParser->hasName("matched")) {
  matched = responseParser->getBoolByName("matched");
  }

}

