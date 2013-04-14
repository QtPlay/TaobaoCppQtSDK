#include <TaoApiCpp/response/TimeGetResponse.h>

QDateTime TimeGetResponse::getTime() const {
  return time;
}
void TimeGetResponse::setTime (QDateTime time) {
  this->time = time;
}

void TimeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("time")) {
  time = responseParser->getDateByName("time");
  }

}

