#include <TaoApiCpp/response/SimbaKeywordscatQscoreGetResponse.h>

Qscore SimbaKeywordscatQscoreGetResponse::getQscore() const {
  return qscore;
}
void SimbaKeywordscatQscoreGetResponse::setQscore (Qscore qscore) {
  this->qscore = qscore;
}

void SimbaKeywordscatQscoreGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("qscore")) {
  qscore.setParser(responseParser->getObjectParser("qscore"));
  qscore.parseResponse();
  }

}

