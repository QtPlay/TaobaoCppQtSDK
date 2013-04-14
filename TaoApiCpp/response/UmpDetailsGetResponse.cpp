#include <TaoApiCpp/response/UmpDetailsGetResponse.h>

QList<QString> UmpDetailsGetResponse::getContents() const {
  return contents;
}
void UmpDetailsGetResponse::setContents (QList<QString> contents) {
  this->contents = contents;
}
qlonglong UmpDetailsGetResponse::getTotalCount() const {
  return totalCount;
}
void UmpDetailsGetResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void UmpDetailsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("contents")) {
  contents = responseParser->getListStrByName("contents");
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

