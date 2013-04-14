#include <TaoApiCpp/domain/WaitingTimesOnDay.h>
QDateTime WaitingTimesOnDay::getWaitingDate() const {
  return waitingDate;
}
void WaitingTimesOnDay::setWaitingDate (QDateTime waitingDate) {
  this->waitingDate = waitingDate;
}

QList<WaitingTimeById> WaitingTimesOnDay::getWaitingTimeByIds() const {
  return waitingTimeByIds;
}
void WaitingTimesOnDay::setWaitingTimeByIds (QList<WaitingTimeById> waitingTimeByIds) {
  this->waitingTimeByIds = waitingTimeByIds;
}


void WaitingTimesOnDay::parseResponse() {
  if (responseParser->hasName("waiting_date")) {
  waitingDate = responseParser->getDateByName("waiting_date");
  }
  if (responseParser->hasName("waiting_time_by_ids")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("waiting_time_by_ids");
  Parser *parser;
  foreach (parser, listParser) {
    WaitingTimeById tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    waitingTimeByIds.append(tmp);
  }
  }

}

