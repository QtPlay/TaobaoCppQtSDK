#include <TaoApiCpp/request/CategoryrecommendItemsGetRequest.h>

QString CategoryrecommendItemsGetRequest::getApiMethodName() const {
  return "taobao.categoryrecommend.items.get";
}

qlonglong CategoryrecommendItemsGetRequest::getCategoryId() const {
  return categoryId;
}
void CategoryrecommendItemsGetRequest::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
  appParams.insert("category_id", QString::number(categoryId));
}

qlonglong CategoryrecommendItemsGetRequest::getCount() const {
  return count;
}
void CategoryrecommendItemsGetRequest::setCount (qlonglong count) {
  this->count = count;
  appParams.insert("count", QString::number(count));
}

QString CategoryrecommendItemsGetRequest::getExt() const {
  return ext;
}
void CategoryrecommendItemsGetRequest::setExt (QString ext) {
  this->ext = ext;
  appParams.insert("ext", ext);
}

qlonglong CategoryrecommendItemsGetRequest::getRecommendType() const {
  return recommendType;
}
void CategoryrecommendItemsGetRequest::setRecommendType (qlonglong recommendType) {
  this->recommendType = recommendType;
  appParams.insert("recommend_type", QString::number(recommendType));
}



CategoryrecommendItemsGetResponse *CategoryrecommendItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CategoryrecommendItemsGetResponse *tmpResponse = new CategoryrecommendItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
