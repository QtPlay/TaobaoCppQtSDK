#include <TaoApiCpp/request/ShoprecommendItemsGetRequest.h>

QString ShoprecommendItemsGetRequest::getApiMethodName() const {
  return "taobao.shoprecommend.items.get";
}

qlonglong ShoprecommendItemsGetRequest::getCount() const {
  return count;
}
void ShoprecommendItemsGetRequest::setCount (qlonglong count) {
  this->count = count;
  appParams.insert("count", QString::number(count));
}

QString ShoprecommendItemsGetRequest::getExt() const {
  return ext;
}
void ShoprecommendItemsGetRequest::setExt (QString ext) {
  this->ext = ext;
  appParams.insert("ext", ext);
}

qlonglong ShoprecommendItemsGetRequest::getRecommendType() const {
  return recommendType;
}
void ShoprecommendItemsGetRequest::setRecommendType (qlonglong recommendType) {
  this->recommendType = recommendType;
  appParams.insert("recommend_type", QString::number(recommendType));
}

qlonglong ShoprecommendItemsGetRequest::getSellerId() const {
  return sellerId;
}
void ShoprecommendItemsGetRequest::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
  appParams.insert("seller_id", QString::number(sellerId));
}



ShoprecommendItemsGetResponse *ShoprecommendItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ShoprecommendItemsGetResponse *tmpResponse = new ShoprecommendItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
