#include <TaoApiCpp/request/SimbaCreativeUpdateRequest.h>

QString SimbaCreativeUpdateRequest::getApiMethodName() const {
  return "taobao.simba.creative.update";
}

qlonglong SimbaCreativeUpdateRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaCreativeUpdateRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaCreativeUpdateRequest::getCreativeId() const {
  return creativeId;
}
void SimbaCreativeUpdateRequest::setCreativeId (qlonglong creativeId) {
  this->creativeId = creativeId;
  appParams.insert("creative_id", QString::number(creativeId));
}

QString SimbaCreativeUpdateRequest::getImgUrl() const {
  return imgUrl;
}
void SimbaCreativeUpdateRequest::setImgUrl (QString imgUrl) {
  this->imgUrl = imgUrl;
  appParams.insert("img_url", imgUrl);
}

QString SimbaCreativeUpdateRequest::getNick() const {
  return nick;
}
void SimbaCreativeUpdateRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaCreativeUpdateRequest::getTitle() const {
  return title;
}
void SimbaCreativeUpdateRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



SimbaCreativeUpdateResponse *SimbaCreativeUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCreativeUpdateResponse *tmpResponse = new SimbaCreativeUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
