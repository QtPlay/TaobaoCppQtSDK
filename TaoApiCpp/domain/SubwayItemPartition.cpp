#include <TaoApiCpp/domain/SubwayItemPartition.h>
QList<SubwayItem> SubwayItemPartition::getItemList() const {
  return itemList;
}
void SubwayItemPartition::setItemList (QList<SubwayItem> itemList) {
  this->itemList = itemList;
}

bool SubwayItemPartition::getOrderBy() const {
  return orderBy;
}
void SubwayItemPartition::setOrderBy (bool orderBy) {
  this->orderBy = orderBy;
}

QString SubwayItemPartition::getOrderField() const {
  return orderField;
}
void SubwayItemPartition::setOrderField (QString orderField) {
  this->orderField = orderField;
}

qlonglong SubwayItemPartition::getPageNo() const {
  return pageNo;
}
void SubwayItemPartition::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
}

qlonglong SubwayItemPartition::getPageSize() const {
  return pageSize;
}
void SubwayItemPartition::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}

qlonglong SubwayItemPartition::getTotalItem() const {
  return totalItem;
}
void SubwayItemPartition::setTotalItem (qlonglong totalItem) {
  this->totalItem = totalItem;
}


void SubwayItemPartition::parseResponse() {
  if (responseParser->hasName("item_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_list");
  Parser *parser;
  foreach (parser, listParser) {
    SubwayItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemList.append(tmp);
  }
  }
  if (responseParser->hasName("order_by")) {
  orderBy = responseParser->getBoolByName("order_by");
  }
  if (responseParser->hasName("order_field")) {
  orderField = responseParser->getStrByName("order_field");
  }
  if (responseParser->hasName("page_no")) {
  pageNo = responseParser->getNumByName("page_no");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }
  if (responseParser->hasName("total_item")) {
  totalItem = responseParser->getNumByName("total_item");
  }

}

