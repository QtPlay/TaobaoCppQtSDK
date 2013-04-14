#include <TaoApiCpp/domain/SearchOrderResult.h>
bool SearchOrderResult::getHasNext() const {
  return hasNext;
}
void SearchOrderResult::setHasNext (bool hasNext) {
  this->hasNext = hasNext;
}

QList<qlonglong> SearchOrderResult::getOrderIds() const {
  return orderIds;
}
void SearchOrderResult::setOrderIds (QList<qlonglong> orderIds) {
  this->orderIds = orderIds;
}

qlonglong SearchOrderResult::getPageSize() const {
  return pageSize;
}
void SearchOrderResult::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}


void SearchOrderResult::parseResponse() {
  if (responseParser->hasName("has_next")) {
  hasNext = responseParser->getBoolByName("has_next");
  }
  if (responseParser->hasName("order_ids")) {
  orderIds = responseParser->getListNumByName("order_ids");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }

}

