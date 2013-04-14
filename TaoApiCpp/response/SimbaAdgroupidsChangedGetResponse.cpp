#include <TaoApiCpp/response/SimbaAdgroupidsChangedGetResponse.h>

QList<qlonglong> SimbaAdgroupidsChangedGetResponse::getChangedAdgroupids() const {
  return changedAdgroupids;
}
void SimbaAdgroupidsChangedGetResponse::setChangedAdgroupids (QList<qlonglong> changedAdgroupids) {
  this->changedAdgroupids = changedAdgroupids;
}

void SimbaAdgroupidsChangedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("changed_adgroupids")) {
  changedAdgroupids = responseParser->getListNumByName("changed_adgroupids");
  }

}

