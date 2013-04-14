#include <TaoApiCpp/domain/PromotionInShop.h>
QString PromotionInShop::getName() const {
  return name;
}
void PromotionInShop::setName (QString name) {
  this->name = name;
}

QString PromotionInShop::getPromotionDetailDesc() const {
  return promotionDetailDesc;
}
void PromotionInShop::setPromotionDetailDesc (QString promotionDetailDesc) {
  this->promotionDetailDesc = promotionDetailDesc;
}

QString PromotionInShop::getPromotionId() const {
  return promotionId;
}
void PromotionInShop::setPromotionId (QString promotionId) {
  this->promotionId = promotionId;
}


void PromotionInShop::parseResponse() {
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("promotion_detail_desc")) {
  promotionDetailDesc = responseParser->getStrByName("promotion_detail_desc");
  }
  if (responseParser->hasName("promotion_id")) {
  promotionId = responseParser->getStrByName("promotion_id");
  }

}

