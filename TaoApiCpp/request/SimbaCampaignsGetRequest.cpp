#include <TaoApiCpp/request/SimbaCampaignsGetRequest.h>

QString SimbaCampaignsGetRequest::getApiMethodName() const {
  return "taobao.simba.campaigns.get";
}

QString SimbaCampaignsGetRequest::getNick() const {
  return nick;
}
void SimbaCampaignsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCampaignsGetResponse *SimbaCampaignsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignsGetResponse *tmpResponse = new SimbaCampaignsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
