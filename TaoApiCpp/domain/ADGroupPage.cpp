#include <TaoApiCpp/domain/ADGroupPage.h>
QList<ADGroup> ADGroupPage::getAdgroupList() const {
  return adgroupList;
}
void ADGroupPage::setAdgroupList (QList<ADGroup> adgroupList) {
  this->adgroupList = adgroupList;
}

qlonglong ADGroupPage::getPageNo() const {
  return pageNo;
}
void ADGroupPage::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
}

qlonglong ADGroupPage::getPageSize() const {
  return pageSize;
}
void ADGroupPage::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}

qlonglong ADGroupPage::getTotalItem() const {
  return totalItem;
}
void ADGroupPage::setTotalItem (qlonglong totalItem) {
  this->totalItem = totalItem;
}


void ADGroupPage::parseResponse() {
  if (responseParser->hasName("adgroup_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("adgroup_list");
  Parser *parser;
  foreach (parser, listParser) {
    ADGroup tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    adgroupList.append(tmp);
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

