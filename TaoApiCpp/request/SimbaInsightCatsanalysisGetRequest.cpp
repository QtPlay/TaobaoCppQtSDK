#include <TaoApiCpp/request/SimbaInsightCatsanalysisGetRequest.h>

QString SimbaInsightCatsanalysisGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.catsanalysis.get";
}

QString SimbaInsightCatsanalysisGetRequest::getCategoryIds() const {
  return categoryIds;
}
void SimbaInsightCatsanalysisGetRequest::setCategoryIds (QString categoryIds) {
  this->categoryIds = categoryIds;
  appParams.insert("category_ids", categoryIds);
}

QString SimbaInsightCatsanalysisGetRequest::getNick() const {
  return nick;
}
void SimbaInsightCatsanalysisGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaInsightCatsanalysisGetRequest::getStu() const {
  return stu;
}
void SimbaInsightCatsanalysisGetRequest::setStu (QString stu) {
  this->stu = stu;
  appParams.insert("stu", stu);
}



SimbaInsightCatsanalysisGetResponse *SimbaInsightCatsanalysisGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightCatsanalysisGetResponse *tmpResponse = new SimbaInsightCatsanalysisGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
