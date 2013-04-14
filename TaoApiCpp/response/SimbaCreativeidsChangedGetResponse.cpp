#include <TaoApiCpp/response/SimbaCreativeidsChangedGetResponse.h>

QList<qlonglong> SimbaCreativeidsChangedGetResponse::getChangedCreativeIds() const {
  return changedCreativeIds;
}
void SimbaCreativeidsChangedGetResponse::setChangedCreativeIds (QList<qlonglong> changedCreativeIds) {
  this->changedCreativeIds = changedCreativeIds;
}

void SimbaCreativeidsChangedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("changed_creative_ids")) {
  changedCreativeIds = responseParser->getListNumByName("changed_creative_ids");
  }

}

