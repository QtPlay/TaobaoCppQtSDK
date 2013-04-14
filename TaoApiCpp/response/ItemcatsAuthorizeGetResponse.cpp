#include <TaoApiCpp/response/ItemcatsAuthorizeGetResponse.h>

SellerAuthorize ItemcatsAuthorizeGetResponse::getSellerAuthorize() const {
  return sellerAuthorize;
}
void ItemcatsAuthorizeGetResponse::setSellerAuthorize (SellerAuthorize sellerAuthorize) {
  this->sellerAuthorize = sellerAuthorize;
}

void ItemcatsAuthorizeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("seller_authorize")) {
  sellerAuthorize.setParser(responseParser->getObjectParser("seller_authorize"));
  sellerAuthorize.parseResponse();
  }

}

