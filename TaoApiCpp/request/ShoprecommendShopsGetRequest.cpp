#include <TaoApiCpp/request/ShoprecommendShopsGetRequest.h>

QString ShoprecommendShopsGetRequest::getApiMethodName() const {
  return "taobao.shoprecommend.shops.get";
}

qlonglong ShoprecommendShopsGetRequest::getCount() const {
  return count;
}
void ShoprecommendShopsGetRequest::setCount (qlonglong count) {
  this->count = count;
  appParams.insert("count", QString::number(count));
}

QString ShoprecommendShopsGetRequest::getExt() const {
  return ext;
}
void ShoprecommendShopsGetRequest::setExt (QString ext) {
  this->ext = ext;
  appParams.insert("ext", ext);
}

qlonglong ShoprecommendShopsGetRequest::getRecommendType() const {
  return recommendType;
}
void ShoprecommendShopsGetRequest::setRecommendType (qlonglong recommendType) {
  this->recommendType = recommendType;
  appParams.insert("recommend_type", QString::number(recommendType));
}

qlonglong ShoprecommendShopsGetRequest::getSellerId() const {
  return sellerId;
}
void ShoprecommendShopsGetRequest::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
  appParams.insert("seller_id", QString::number(sellerId));
}



ShoprecommendShopsGetResponse *ShoprecommendShopsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ShoprecommendShopsGetResponse *tmpResponse = new ShoprecommendShopsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
