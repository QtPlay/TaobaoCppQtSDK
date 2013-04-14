#include <TaoApiCpp/request/UserrecommendItemsGetRequest.h>

QString UserrecommendItemsGetRequest::getApiMethodName() const {
  return "taobao.userrecommend.items.get";
}

qlonglong UserrecommendItemsGetRequest::getCount() const {
  return count;
}
void UserrecommendItemsGetRequest::setCount (qlonglong count) {
  this->count = count;
  appParams.insert("count", QString::number(count));
}

QString UserrecommendItemsGetRequest::getExt() const {
  return ext;
}
void UserrecommendItemsGetRequest::setExt (QString ext) {
  this->ext = ext;
  appParams.insert("ext", ext);
}

qlonglong UserrecommendItemsGetRequest::getRecommendType() const {
  return recommendType;
}
void UserrecommendItemsGetRequest::setRecommendType (qlonglong recommendType) {
  this->recommendType = recommendType;
  appParams.insert("recommend_type", QString::number(recommendType));
}



UserrecommendItemsGetResponse *UserrecommendItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UserrecommendItemsGetResponse *tmpResponse = new UserrecommendItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
