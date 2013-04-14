#include <TaoApiCpp/domain/OnlineTimesOnDay.h>
QDateTime OnlineTimesOnDay::getOnlineDate() const {
  return onlineDate;
}
void OnlineTimesOnDay::setOnlineDate (QDateTime onlineDate) {
  this->onlineDate = onlineDate;
}

QList<OnlineTimeById> OnlineTimesOnDay::getOnlineTimeByIds() const {
  return onlineTimeByIds;
}
void OnlineTimesOnDay::setOnlineTimeByIds (QList<OnlineTimeById> onlineTimeByIds) {
  this->onlineTimeByIds = onlineTimeByIds;
}


void OnlineTimesOnDay::parseResponse() {
  if (responseParser->hasName("online_date")) {
  onlineDate = responseParser->getDateByName("online_date");
  }
  if (responseParser->hasName("online_time_by_ids")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("online_time_by_ids");
  Parser *parser;
  foreach (parser, listParser) {
    OnlineTimeById tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    onlineTimeByIds.append(tmp);
  }
  }

}

