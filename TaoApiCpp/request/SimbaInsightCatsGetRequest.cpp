#include <TaoApiCpp/request/SimbaInsightCatsGetRequest.h>

QString SimbaInsightCatsGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.cats.get";
}

QString SimbaInsightCatsGetRequest::getCategoryIds() const {
  return categoryIds;
}
void SimbaInsightCatsGetRequest::setCategoryIds (QString categoryIds) {
  this->categoryIds = categoryIds;
  appParams.insert("category_ids", categoryIds);
}

QString SimbaInsightCatsGetRequest::getNick() const {
  return nick;
}
void SimbaInsightCatsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaInsightCatsGetResponse *SimbaInsightCatsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightCatsGetResponse *tmpResponse = new SimbaInsightCatsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
