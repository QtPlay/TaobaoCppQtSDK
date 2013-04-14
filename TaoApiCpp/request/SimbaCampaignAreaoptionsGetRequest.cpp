#include <TaoApiCpp/request/SimbaCampaignAreaoptionsGetRequest.h>

QString SimbaCampaignAreaoptionsGetRequest::getApiMethodName() const {
  return "taobao.simba.campaign.areaoptions.get";
}



SimbaCampaignAreaoptionsGetResponse *SimbaCampaignAreaoptionsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignAreaoptionsGetResponse *tmpResponse = new SimbaCampaignAreaoptionsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
