#include <TaoApiCpp/response/LogisticsOrderChargeResponse.h>

OrderCharge LogisticsOrderChargeResponse::getOrderCharge() const {
  return orderCharge;
}
void LogisticsOrderChargeResponse::setOrderCharge (OrderCharge orderCharge) {
  this->orderCharge = orderCharge;
}

void LogisticsOrderChargeResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("order_charge")) {
  orderCharge.setParser(responseParser->getObjectParser("order_charge"));
  orderCharge.parseResponse();
  }

}

