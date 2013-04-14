#include <TaoApiCpp/domain/NonReplyStatOnDay.h>
QDateTime NonReplyStatOnDay::getNonreplyDate() const {
  return nonreplyDate;
}
void NonReplyStatOnDay::setNonreplyDate (QDateTime nonreplyDate) {
  this->nonreplyDate = nonreplyDate;
}

QList<NonreplyStatById> NonReplyStatOnDay::getNonreplyStatByIds() const {
  return nonreplyStatByIds;
}
void NonReplyStatOnDay::setNonreplyStatByIds (QList<NonreplyStatById> nonreplyStatByIds) {
  this->nonreplyStatByIds = nonreplyStatByIds;
}


void NonReplyStatOnDay::parseResponse() {
  if (responseParser->hasName("nonreply_date")) {
  nonreplyDate = responseParser->getDateByName("nonreply_date");
  }
  if (responseParser->hasName("nonreply_stat_by_ids")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("nonreply_stat_by_ids");
  Parser *parser;
  foreach (parser, listParser) {
    NonreplyStatById tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    nonreplyStatByIds.append(tmp);
  }
  }

}

