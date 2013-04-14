#include <TaoApiCpp/domain/CreativePage.h>
QList<Creative> CreativePage::getCreativeList() const {
  return creativeList;
}
void CreativePage::setCreativeList (QList<Creative> creativeList) {
  this->creativeList = creativeList;
}

qlonglong CreativePage::getPageNo() const {
  return pageNo;
}
void CreativePage::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
}

qlonglong CreativePage::getPageSize() const {
  return pageSize;
}
void CreativePage::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}

qlonglong CreativePage::getTotalItem() const {
  return totalItem;
}
void CreativePage::setTotalItem (qlonglong totalItem) {
  this->totalItem = totalItem;
}


void CreativePage::parseResponse() {
  if (responseParser->hasName("creative_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("creative_list");
  Parser *parser;
  foreach (parser, listParser) {
    Creative tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    creativeList.append(tmp);
  }
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

