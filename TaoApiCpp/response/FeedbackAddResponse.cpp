#include <TaoApiCpp/response/FeedbackAddResponse.h>

QDateTime FeedbackAddResponse::getResult() const {
  return result;
}
void FeedbackAddResponse::setResult (QDateTime result) {
  this->result = result;
}

void FeedbackAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("result")) {
  result = responseParser->getDateByName("result");
  }

}

