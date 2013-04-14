#include <TaoApiCpp/request/ShopUpdateRequest.h>

QString ShopUpdateRequest::getApiMethodName() const {
  return "taobao.shop.update";
}

QString ShopUpdateRequest::getBulletin() const {
  return bulletin;
}
void ShopUpdateRequest::setBulletin (QString bulletin) {
  this->bulletin = bulletin;
  appParams.insert("bulletin", bulletin);
}

QString ShopUpdateRequest::getDesc() const {
  return desc;
}
void ShopUpdateRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

QString ShopUpdateRequest::getTitle() const {
  return title;
}
void ShopUpdateRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



ShopUpdateResponse *ShopUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ShopUpdateResponse *tmpResponse = new ShopUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
