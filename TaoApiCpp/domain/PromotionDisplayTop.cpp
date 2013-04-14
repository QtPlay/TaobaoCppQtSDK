#include <TaoApiCpp/domain/PromotionDisplayTop.h>
QList<PromotionInItem> PromotionDisplayTop::getPromotionInItem() const {
  return promotionInItem;
}
void PromotionDisplayTop::setPromotionInItem (QList<PromotionInItem> promotionInItem) {
  this->promotionInItem = promotionInItem;
}

QList<PromotionInShop> PromotionDisplayTop::getPromotionInShop() const {
  return promotionInShop;
}
void PromotionDisplayTop::setPromotionInShop (QList<PromotionInShop> promotionInShop) {
  this->promotionInShop = promotionInShop;
}


void PromotionDisplayTop::parseResponse() {
  if (responseParser->hasName("promotion_in_item")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("promotion_in_item");
  Parser *parser;
  foreach (parser, listParser) {
    PromotionInItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    promotionInItem.append(tmp);
  }
  }
  if (responseParser->hasName("promotion_in_shop")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("promotion_in_shop");
  Parser *parser;
  foreach (parser, listParser) {
    PromotionInShop tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    promotionInShop.append(tmp);
  }
  }

}

