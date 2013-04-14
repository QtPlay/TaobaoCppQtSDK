#include <TaoApiCpp/response/SimbaCatmatchidsChangedGetResponse.h>

QList<qlonglong> SimbaCatmatchidsChangedGetResponse::getChangedCatmatchIds() const {
  return changedCatmatchIds;
}
void SimbaCatmatchidsChangedGetResponse::setChangedCatmatchIds (QList<qlonglong> changedCatmatchIds) {
  this->changedCatmatchIds = changedCatmatchIds;
}

void SimbaCatmatchidsChangedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("changed_catmatch_ids")) {
  changedCatmatchIds = responseParser->getListNumByName("changed_catmatch_ids");
  }

}

