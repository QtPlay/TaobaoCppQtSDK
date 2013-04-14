#include <TaoApiCpp/response/SimbaCreativeidsDeletedGetResponse.h>

QList<qlonglong> SimbaCreativeidsDeletedGetResponse::getDeletedCreativeIds() const {
  return deletedCreativeIds;
}
void SimbaCreativeidsDeletedGetResponse::setDeletedCreativeIds (QList<qlonglong> deletedCreativeIds) {
  this->deletedCreativeIds = deletedCreativeIds;
}

void SimbaCreativeidsDeletedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("deleted_creative_ids")) {
  deletedCreativeIds = responseParser->getListNumByName("deleted_creative_ids");
  }

}

