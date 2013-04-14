#include <TaoApiCpp/request/FavoriteAddRequest.h>

QString FavoriteAddRequest::getApiMethodName() const {
  return "taobao.favorite.add";
}

QString FavoriteAddRequest::getCollectType() const {
  return collectType;
}
void FavoriteAddRequest::setCollectType (QString collectType) {
  this->collectType = collectType;
  appParams.insert("collect_type", collectType);
}

qlonglong FavoriteAddRequest::getItemNumid() const {
  return itemNumid;
}
void FavoriteAddRequest::setItemNumid (qlonglong itemNumid) {
  this->itemNumid = itemNumid;
  appParams.insert("item_numid", QString::number(itemNumid));
}

bool FavoriteAddRequest::getShared() const {
  return shared;
}
void FavoriteAddRequest::setShared (bool shared) {
  this->shared = shared;
  appParams.insert("shared", shared? "true": "false");
}



FavoriteAddResponse *FavoriteAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FavoriteAddResponse *tmpResponse = new FavoriteAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
