#include <TaoApiCpp/response/InventoryOccupyCancelResponse.h>

bool InventoryOccupyCancelResponse::getIsSuccess() const {
  return isSuccess;
}
void InventoryOccupyCancelResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void InventoryOccupyCancelResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

