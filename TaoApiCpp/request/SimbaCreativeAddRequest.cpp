#include <TaoApiCpp/request/SimbaCreativeAddRequest.h>

QString SimbaCreativeAddRequest::getApiMethodName() const {
  return "taobao.simba.creative.add";
}

qlonglong SimbaCreativeAddRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaCreativeAddRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

QString SimbaCreativeAddRequest::getImgUrl() const {
  return imgUrl;
}
void SimbaCreativeAddRequest::setImgUrl (QString imgUrl) {
  this->imgUrl = imgUrl;
  appParams.insert("img_url", imgUrl);
}

QString SimbaCreativeAddRequest::getNick() const {
  return nick;
}
void SimbaCreativeAddRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

QString SimbaCreativeAddRequest::getTitle() const {
  return title;
}
void SimbaCreativeAddRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



SimbaCreativeAddResponse *SimbaCreativeAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCreativeAddResponse *tmpResponse = new SimbaCreativeAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
