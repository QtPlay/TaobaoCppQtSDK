#include <TaoApiCpp/request/SimbaKeywordsDeleteRequest.h>

QString SimbaKeywordsDeleteRequest::getApiMethodName() const {
  return "taobao.simba.keywords.delete";
}

qlonglong SimbaKeywordsDeleteRequest::getCampaignId() const {
  return campaignId;
}
void SimbaKeywordsDeleteRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

qlonglong SimbaKeywordsDeleteRequest::getKeywordIds() const {
  return keywordIds;
}
void SimbaKeywordsDeleteRequest::setKeywordIds (qlonglong keywordIds) {
  this->keywordIds = keywordIds;
  appParams.insert("keyword_ids", QString::number(keywordIds));
}

QString SimbaKeywordsDeleteRequest::getNick() const {
  return nick;
}
void SimbaKeywordsDeleteRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaKeywordsDeleteResponse *SimbaKeywordsDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordsDeleteResponse *tmpResponse = new SimbaKeywordsDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
