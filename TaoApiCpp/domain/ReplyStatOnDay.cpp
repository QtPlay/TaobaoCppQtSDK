#include <TaoApiCpp/domain/ReplyStatOnDay.h>
QDateTime ReplyStatOnDay::getReplyDate() const {
  return replyDate;
}
void ReplyStatOnDay::setReplyDate (QDateTime replyDate) {
  this->replyDate = replyDate;
}

QList<ReplyStatById> ReplyStatOnDay::getReplyStatByIds() const {
  return replyStatByIds;
}
void ReplyStatOnDay::setReplyStatByIds (QList<ReplyStatById> replyStatByIds) {
  this->replyStatByIds = replyStatByIds;
}


void ReplyStatOnDay::parseResponse() {
  if (responseParser->hasName("reply_date")) {
  replyDate = responseParser->getDateByName("reply_date");
  }
  if (responseParser->hasName("reply_stat_by_ids")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("reply_stat_by_ids");
  Parser *parser;
  foreach (parser, listParser) {
    ReplyStatById tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    replyStatByIds.append(tmp);
  }
  }

}

