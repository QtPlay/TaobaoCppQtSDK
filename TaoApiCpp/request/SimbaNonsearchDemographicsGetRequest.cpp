#include <TaoApiCpp/request/SimbaNonsearchDemographicsGetRequest.h>

QString SimbaNonsearchDemographicsGetRequest::getApiMethodName() const {
  return "taobao.simba.nonsearch.demographics.get";
}

qlonglong SimbaNonsearchDemographicsGetRequest::getCampaignId() const {
  return campaignId;
}
void SimbaNonsearchDemographicsGetRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaNonsearchDemographicsGetRequest::getNick() const {
  return nick;
}
void SimbaNonsearchDemographicsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaNonsearchDemographicsGetResponse *SimbaNonsearchDemographicsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaNonsearchDemographicsGetResponse *tmpResponse = new SimbaNonsearchDemographicsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
