#include <TaoApiCpp/domain/CancelOrderResult.h>
qlonglong CancelOrderResult::getRecreateOrderId() const {
  return recreateOrderId;
}
void CancelOrderResult::setRecreateOrderId (qlonglong recreateOrderId) {
  this->recreateOrderId = recreateOrderId;
}


void CancelOrderResult::parseResponse() {
  if (responseParser->hasName("recreate_order_id")) {
  recreateOrderId = responseParser->getNumByName("recreate_order_id");
  }

}

