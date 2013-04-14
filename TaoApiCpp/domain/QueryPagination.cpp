#include <TaoApiCpp/domain/QueryPagination.h>
qlonglong QueryPagination::getPageIndex() const {
  return pageIndex;
}
void QueryPagination::setPageIndex (qlonglong pageIndex) {
  this->pageIndex = pageIndex;
}

qlonglong QueryPagination::getPageSize() const {
  return pageSize;
}
void QueryPagination::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}


void QueryPagination::parseResponse() {
  if (responseParser->hasName("page_index")) {
  pageIndex = responseParser->getNumByName("page_index");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }

}

