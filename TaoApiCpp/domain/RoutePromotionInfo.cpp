#include <TaoApiCpp/domain/RoutePromotionInfo.h>
QString RoutePromotionInfo::getBasePromotionId() const {
  return basePromotionId;
}
void RoutePromotionInfo::setBasePromotionId (QString basePromotionId) {
  this->basePromotionId = basePromotionId;
}

QString RoutePromotionInfo::getPromotionDescription() const {
  return promotionDescription;
}
void RoutePromotionInfo::setPromotionDescription (QString promotionDescription) {
  this->promotionDescription = promotionDescription;
}

QString RoutePromotionInfo::getPromotionUrl() const {
  return promotionUrl;
}
void RoutePromotionInfo::setPromotionUrl (QString promotionUrl) {
  this->promotionUrl = promotionUrl;
}

bool RoutePromotionInfo::getUnbasePromotion() const {
  return unbasePromotion;
}
void RoutePromotionInfo::setUnbasePromotion (bool unbasePromotion) {
  this->unbasePromotion = unbasePromotion;
}


void RoutePromotionInfo::parseResponse() {
  if (responseParser->hasName("base_promotion_id")) {
  basePromotionId = responseParser->getStrByName("base_promotion_id");
  }
  if (responseParser->hasName("promotion_description")) {
  promotionDescription = responseParser->getStrByName("promotion_description");
  }
  if (responseParser->hasName("promotion_url")) {
  promotionUrl = responseParser->getStrByName("promotion_url");
  }
  if (responseParser->hasName("unbase_promotion")) {
  unbasePromotion = responseParser->getBoolByName("unbase_promotion");
  }

}

