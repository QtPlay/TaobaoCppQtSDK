#include <TaoApiCpp/request/SimbaInsightCatsbaseGetRequest.h>

QString SimbaInsightCatsbaseGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.catsbase.get";
}

QString SimbaInsightCatsbaseGetRequest::getCategoryIds() const {
  return categoryIds;
}
void SimbaInsightCatsbaseGetRequest::setCategoryIds (QString categoryIds) {
  this->categoryIds = categoryIds;
  appParams.insert("category_ids", categoryIds);
}

QString SimbaInsightCatsbaseGetRequest::getFilter() const {
  return filter;
}
void SimbaInsightCatsbaseGetRequest::setFilter (QString filter) {
  this->filter = filter;
  appParams.insert("filter", filter);
}

QString SimbaInsightCatsbaseGetRequest::getNick() const {
  return nick;
}
void SimbaInsightCatsbaseGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaInsightCatsbaseGetRequest::getTime() const {
  return time;
}
void SimbaInsightCatsbaseGetRequest::setTime (QString time) {
  this->time = time;
  appParams.insert("time", time);
}



SimbaInsightCatsbaseGetResponse *SimbaInsightCatsbaseGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightCatsbaseGetResponse *tmpResponse = new SimbaInsightCatsbaseGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
