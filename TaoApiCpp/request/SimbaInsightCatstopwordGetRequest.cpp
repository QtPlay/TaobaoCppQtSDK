#include <TaoApiCpp/request/SimbaInsightCatstopwordGetRequest.h>

QString SimbaInsightCatstopwordGetRequest::getApiMethodName() const {
  return "taobao.simba.insight.catstopword.get";
}

QString SimbaInsightCatstopwordGetRequest::getCategoryIds() const {
  return categoryIds;
}
void SimbaInsightCatstopwordGetRequest::setCategoryIds (QString categoryIds) {
  this->categoryIds = categoryIds;
  appParams.insert("category_ids", categoryIds);
}

QString SimbaInsightCatstopwordGetRequest::getNick() const {
  return nick;
}
void SimbaInsightCatstopwordGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaInsightCatstopwordGetRequest::getResultNum() const {
  return resultNum;
}
void SimbaInsightCatstopwordGetRequest::setResultNum (qlonglong resultNum) {
  this->resultNum = resultNum;
  appParams.insert("result_num", QString::number(resultNum));
}



SimbaInsightCatstopwordGetResponse *SimbaInsightCatstopwordGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaInsightCatstopwordGetResponse *tmpResponse = new SimbaInsightCatstopwordGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
