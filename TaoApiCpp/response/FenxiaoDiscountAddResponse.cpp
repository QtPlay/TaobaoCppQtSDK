#include <TaoApiCpp/response/FenxiaoDiscountAddResponse.h>

qlonglong FenxiaoDiscountAddResponse::getDiscountId() const {
  return discountId;
}
void FenxiaoDiscountAddResponse::setDiscountId (qlonglong discountId) {
  this->discountId = discountId;
}

void FenxiaoDiscountAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("discount_id")) {
  discountId = responseParser->getNumByName("discount_id");
  }

}

