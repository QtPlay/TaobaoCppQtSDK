#include <TaoApiCpp/response/SellercatsListGetResponse.h>

QList<SellerCat> SellercatsListGetResponse::getSellerCats() const {
  return sellerCats;
}
void SellercatsListGetResponse::setSellerCats (QList<SellerCat> sellerCats) {
  this->sellerCats = sellerCats;
}

void SellercatsListGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("seller_cats")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("seller_cats");
  Parser *parser;
  foreach (parser, listParser) {
    SellerCat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    sellerCats.append(tmp);
  }
  }

}

