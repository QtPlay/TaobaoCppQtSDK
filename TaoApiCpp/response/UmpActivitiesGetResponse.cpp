#include <TaoApiCpp/response/UmpActivitiesGetResponse.h>

QList<QString> UmpActivitiesGetResponse::getContents() const {
  return contents;
}
void UmpActivitiesGetResponse::setContents (QList<QString> contents) {
  this->contents = contents;
}
qlonglong UmpActivitiesGetResponse::getTotalCount() const {
  return totalCount;
}
void UmpActivitiesGetResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void UmpActivitiesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("contents")) {
  contents = responseParser->getListStrByName("contents");
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

