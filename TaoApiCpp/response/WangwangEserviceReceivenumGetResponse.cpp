#include <TaoApiCpp/response/WangwangEserviceReceivenumGetResponse.h>

QList<ReplyStatOnDay> WangwangEserviceReceivenumGetResponse::getReplyStatListOnDays() const {
  return replyStatListOnDays;
}
void WangwangEserviceReceivenumGetResponse::setReplyStatListOnDays (QList<ReplyStatOnDay> replyStatListOnDays) {
  this->replyStatListOnDays = replyStatListOnDays;
}

void WangwangEserviceReceivenumGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("reply_stat_list_on_days")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("reply_stat_list_on_days");
  Parser *parser;
  foreach (parser, listParser) {
    ReplyStatOnDay tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    replyStatListOnDays.append(tmp);
  }
  }

}

