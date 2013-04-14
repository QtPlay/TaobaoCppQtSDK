#include <TaoApiCpp/response/SimbaCatmatchidsDeletedGetResponse.h>

QList<qlonglong> SimbaCatmatchidsDeletedGetResponse::getDeletedCatmatchIds() const {
  return deletedCatmatchIds;
}
void SimbaCatmatchidsDeletedGetResponse::setDeletedCatmatchIds (QList<qlonglong> deletedCatmatchIds) {
  this->deletedCatmatchIds = deletedCatmatchIds;
}

void SimbaCatmatchidsDeletedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("deleted_catmatch_ids")) {
  deletedCatmatchIds = responseParser->getListNumByName("deleted_catmatch_ids");
  }

}

