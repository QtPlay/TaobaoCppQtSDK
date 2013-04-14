#include <TaoApiCpp/response/SellercatsListUpdateResponse.h>

SellerCat SellercatsListUpdateResponse::getSellerCat() const {
  return sellerCat;
}
void SellercatsListUpdateResponse::setSellerCat (SellerCat sellerCat) {
  this->sellerCat = sellerCat;
}

void SellercatsListUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("seller_cat")) {
  sellerCat.setParser(responseParser->getObjectParser("seller_cat"));
  sellerCat.parseResponse();
  }

}

