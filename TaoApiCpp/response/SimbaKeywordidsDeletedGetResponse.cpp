#include <TaoApiCpp/response/SimbaKeywordidsDeletedGetResponse.h>

QList<qlonglong> SimbaKeywordidsDeletedGetResponse::getDeletedKeywordIds() const {
  return deletedKeywordIds;
}
void SimbaKeywordidsDeletedGetResponse::setDeletedKeywordIds (QList<qlonglong> deletedKeywordIds) {
  this->deletedKeywordIds = deletedKeywordIds;
}

void SimbaKeywordidsDeletedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("deleted_keyword_ids")) {
  deletedKeywordIds = responseParser->getListNumByName("deleted_keyword_ids");
  }

}

