#include <TaoApiCpp/response/WlbItemConsignmentCreateResponse.h>

qlonglong WlbItemConsignmentCreateResponse::getConsignmentId() const {
  return consignmentId;
}
void WlbItemConsignmentCreateResponse::setConsignmentId (qlonglong consignmentId) {
  this->consignmentId = consignmentId;
}

void WlbItemConsignmentCreateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("consignment_id")) {
  consignmentId = responseParser->getNumByName("consignment_id");
  }

}

