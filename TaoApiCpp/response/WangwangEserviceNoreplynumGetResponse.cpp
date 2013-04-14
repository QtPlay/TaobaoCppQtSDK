#include <TaoApiCpp/response/WangwangEserviceNoreplynumGetResponse.h>

QList<NonReplyStatOnDay> WangwangEserviceNoreplynumGetResponse::getNonReplyStatOnDays() const {
  return nonReplyStatOnDays;
}
void WangwangEserviceNoreplynumGetResponse::setNonReplyStatOnDays (QList<NonReplyStatOnDay> nonReplyStatOnDays) {
  this->nonReplyStatOnDays = nonReplyStatOnDays;
}

void WangwangEserviceNoreplynumGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("non_reply_stat_on_days")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("non_reply_stat_on_days");
  Parser *parser;
  foreach (parser, listParser) {
    NonReplyStatOnDay tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    nonReplyStatOnDays.append(tmp);
  }
  }

}

