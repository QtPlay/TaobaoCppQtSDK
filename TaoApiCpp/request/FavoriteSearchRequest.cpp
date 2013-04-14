#include <TaoApiCpp/request/FavoriteSearchRequest.h>

QString FavoriteSearchRequest::getApiMethodName() const {
  return "taobao.favorite.search";
}

QString FavoriteSearchRequest::getCollectType() const {
  return collectType;
}
void FavoriteSearchRequest::setCollectType (QString collectType) {
  this->collectType = collectType;
  appParams.insert("collect_type", collectType);
}

qlonglong FavoriteSearchRequest::getPageNo() const {
  return pageNo;
}
void FavoriteSearchRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}



FavoriteSearchResponse *FavoriteSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FavoriteSearchResponse *tmpResponse = new FavoriteSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
