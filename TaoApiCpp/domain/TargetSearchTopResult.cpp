#include <TaoApiCpp/domain/TargetSearchTopResult.h>
QString TargetSearchTopResult::getField() const {
  return field;
}
void TargetSearchTopResult::setField (QString field) {
  this->field = field;
}

qlonglong TargetSearchTopResult::getPageSize() const {
  return pageSize;
}
void TargetSearchTopResult::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}

QString TargetSearchTopResult::getResultData() const {
  return resultData;
}
void TargetSearchTopResult::setResultData (QString resultData) {
  this->resultData = resultData;
}

qlonglong TargetSearchTopResult::getTotalCount() const {
  return totalCount;
}
void TargetSearchTopResult::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}


void TargetSearchTopResult::parseResponse() {
  if (responseParser->hasName("field")) {
  field = responseParser->getStrByName("field");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }
  if (responseParser->hasName("result_data")) {
  resultData = responseParser->getStrByName("result_data");
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

