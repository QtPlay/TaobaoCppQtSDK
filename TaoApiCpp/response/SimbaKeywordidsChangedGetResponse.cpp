#include <TaoApiCpp/response/SimbaKeywordidsChangedGetResponse.h>

QList<qlonglong> SimbaKeywordidsChangedGetResponse::getChangedKeywordIds() const {
  return changedKeywordIds;
}
void SimbaKeywordidsChangedGetResponse::setChangedKeywordIds (QList<qlonglong> changedKeywordIds) {
  this->changedKeywordIds = changedKeywordIds;
}

void SimbaKeywordidsChangedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("changed_keyword_ids")) {
  changedKeywordIds = responseParser->getListNumByName("changed_keyword_ids");
  }

}

