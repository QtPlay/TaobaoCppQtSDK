#include <TaoApiCpp/request/SimbaCampaignAddRequest.h>

QString SimbaCampaignAddRequest::getApiMethodName() const {
  return "taobao.simba.campaign.add";
}

QString SimbaCampaignAddRequest::getNick() const {
  return nick;
}
void SimbaCampaignAddRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaCampaignAddRequest::getTitle() const {
  return title;
}
void SimbaCampaignAddRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



SimbaCampaignAddResponse *SimbaCampaignAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCampaignAddResponse *tmpResponse = new SimbaCampaignAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
