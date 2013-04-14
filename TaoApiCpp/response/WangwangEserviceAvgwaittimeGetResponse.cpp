#include <TaoApiCpp/response/WangwangEserviceAvgwaittimeGetResponse.h>

QList<WaitingTimesOnDay> WangwangEserviceAvgwaittimeGetResponse::getWaitingTimeListOnDays() const {
  return waitingTimeListOnDays;
}
void WangwangEserviceAvgwaittimeGetResponse::setWaitingTimeListOnDays (QList<WaitingTimesOnDay> waitingTimeListOnDays) {
  this->waitingTimeListOnDays = waitingTimeListOnDays;
}

void WangwangEserviceAvgwaittimeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("waiting_time_list_on_days")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("waiting_time_list_on_days");
  Parser *parser;
  foreach (parser, listParser) {
    WaitingTimesOnDay tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    waitingTimeListOnDays.append(tmp);
  }
  }

}

