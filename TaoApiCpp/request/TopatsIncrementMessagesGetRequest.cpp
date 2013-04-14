#include <TaoApiCpp/request/TopatsIncrementMessagesGetRequest.h>

QString TopatsIncrementMessagesGetRequest::getApiMethodName() const {
  return "taobao.topats.increment.messages.get";
}

QDateTime TopatsIncrementMessagesGetRequest::getEnd() const {
  return end;
}
void TopatsIncrementMessagesGetRequest::setEnd (QDateTime end) {
  this->end = end;
  appParams.insert("end", end.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime TopatsIncrementMessagesGetRequest::getStart() const {
  return start;
}
void TopatsIncrementMessagesGetRequest::setStart (QDateTime start) {
  this->start = start;
  appParams.insert("start", start.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TopatsIncrementMessagesGetRequest::getTopics() const {
  return topics;
}
void TopatsIncrementMessagesGetRequest::setTopics (QString topics) {
  this->topics = topics;
  appParams.insert("topics", topics);
}



TopatsIncrementMessagesGetResponse *TopatsIncrementMessagesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TopatsIncrementMessagesGetResponse *tmpResponse = new TopatsIncrementMessagesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
