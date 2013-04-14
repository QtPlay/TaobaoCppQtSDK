#include <TaoApiCpp/response/SimbaAdgroupidsDeletedGetResponse.h>

QList<qlonglong> SimbaAdgroupidsDeletedGetResponse::getDeletedAdgroupIds() const {
  return deletedAdgroupIds;
}
void SimbaAdgroupidsDeletedGetResponse::setDeletedAdgroupIds (QList<qlonglong> deletedAdgroupIds) {
  this->deletedAdgroupIds = deletedAdgroupIds;
}

void SimbaAdgroupidsDeletedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("deleted_adgroup_ids")) {
  deletedAdgroupIds = responseParser->getListNumByName("deleted_adgroup_ids");
  }

}

