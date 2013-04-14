#include <TaoApiCpp/request/SimbaNonsearchDemographicsUpdateRequest.h>

QString SimbaNonsearchDemographicsUpdateRequest::getApiMethodName() const {
  return "taobao.simba.nonsearch.demographics.update";
}

qlonglong SimbaNonsearchDemographicsUpdateRequest::getCampaignId() const {
  return campaignId;
}
void SimbaNonsearchDemographicsUpdateRequest::setCampaignId (qlonglong campaignId) {
  this->campaignId = campaignId;
  appParams.insert("campaign_id", QString::number(campaignId));
}

QString SimbaNonsearchDemographicsUpdateRequest::getDemographicIdPriceJson() const {
  return demographicIdPriceJson;
}
void SimbaNonsearchDemographicsUpdateRequest::setDemographicIdPriceJson (QString demographicIdPriceJson) {
  this->demographicIdPriceJson = demographicIdPriceJson;
  appParams.insert("demographic_id_price_json", demographicIdPriceJson);
}

QString SimbaNonsearchDemographicsUpdateRequest::getNick() const {
  return nick;
}
void SimbaNonsearchDemographicsUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaNonsearchDemographicsUpdateResponse *SimbaNonsearchDemographicsUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaNonsearchDemographicsUpdateResponse *tmpResponse = new SimbaNonsearchDemographicsUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
