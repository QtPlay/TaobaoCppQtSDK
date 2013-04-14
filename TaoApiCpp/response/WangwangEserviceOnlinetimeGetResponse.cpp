#include <TaoApiCpp/response/WangwangEserviceOnlinetimeGetResponse.h>

QList<OnlineTimesOnDay> WangwangEserviceOnlinetimeGetResponse::getOnlineTimesListOnDays() const {
  return onlineTimesListOnDays;
}
void WangwangEserviceOnlinetimeGetResponse::setOnlineTimesListOnDays (QList<OnlineTimesOnDay> onlineTimesListOnDays) {
  this->onlineTimesListOnDays = onlineTimesListOnDays;
}

void WangwangEserviceOnlinetimeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("online_times_list_on_days")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("online_times_list_on_days");
  Parser *parser;
  foreach (parser, listParser) {
    OnlineTimesOnDay tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    onlineTimesListOnDays.append(tmp);
  }
  }

}

