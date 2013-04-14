#include <TaoApiCpp/response/SellercatsListAddResponse.h>

SellerCat SellercatsListAddResponse::getSellerCat() const {
  return sellerCat;
}
void SellercatsListAddResponse::setSellerCat (SellerCat sellerCat) {
  this->sellerCat = sellerCat;
}

void SellercatsListAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("seller_cat")) {
  sellerCat.setParser(responseParser->getObjectParser("seller_cat"));
  sellerCat.parseResponse();
  }

}

