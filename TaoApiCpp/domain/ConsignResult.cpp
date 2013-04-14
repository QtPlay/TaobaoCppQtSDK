#include <TaoApiCpp/domain/ConsignResult.h>
QString ConsignResult::getLogisticsId() const {
  return logisticsId;
}
void ConsignResult::setLogisticsId (QString logisticsId) {
  this->logisticsId = logisticsId;
}

qlonglong ConsignResult::getOrderId() const {
  return orderId;
}
void ConsignResult::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
}


void ConsignResult::parseResponse() {
  if (responseParser->hasName("logistics_id")) {
  logisticsId = responseParser->getStrByName("logistics_id");
  }
  if (responseParser->hasName("order_id")) {
  orderId = responseParser->getNumByName("order_id");
  }

}

