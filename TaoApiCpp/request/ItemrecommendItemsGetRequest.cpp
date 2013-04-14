#include <TaoApiCpp/request/ItemrecommendItemsGetRequest.h>

QString ItemrecommendItemsGetRequest::getApiMethodName() const {
  return "taobao.itemrecommend.items.get";
}

qlonglong ItemrecommendItemsGetRequest::getCount() const {
  return count;
}
void ItemrecommendItemsGetRequest::setCount (qlonglong count) {
  this->count = count;
  appParams.insert("count", QString::number(count));
}

QString ItemrecommendItemsGetRequest::getExt() const {
  return ext;
}
void ItemrecommendItemsGetRequest::setExt (QString ext) {
  this->ext = ext;
  appParams.insert("ext", ext);
}

qlonglong ItemrecommendItemsGetRequest::getItemId() const {
  return itemId;
}
void ItemrecommendItemsGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

qlonglong ItemrecommendItemsGetRequest::getRecommendType() const {
  return recommendType;
}
void ItemrecommendItemsGetRequest::setRecommendType (qlonglong recommendType) {
  this->recommendType = recommendType;
  appParams.insert("recommend_type", QString::number(recommendType));
}



ItemrecommendItemsGetResponse *ItemrecommendItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemrecommendItemsGetResponse *tmpResponse = new ItemrecommendItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
