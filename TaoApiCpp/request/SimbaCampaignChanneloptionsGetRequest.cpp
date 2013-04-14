#include <TaoApiCpp/request/SimbaCampaignChanneloptionsGetRequest.h>

QString SimbaCampaignChanneloptionsGetRequest::getApiMethodName() const {
  return "taobao.simba.campaign.channeloptions.get";
}



SimbaCampaignChanneloptionsGetResponse *SimbaCampaignChanneloptionsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignChanneloptionsGetResponse *tmpResponse = new SimbaCampaignChanneloptionsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
