#include <TaoApiCpp/domain/ADGroupCatMatchPage.h>
QList<ADGroupCatmatch> ADGroupCatMatchPage::getAdgroupCatmatchList() const {
  return adgroupCatmatchList;
}
void ADGroupCatMatchPage::setAdgroupCatmatchList (QList<ADGroupCatmatch> adgroupCatmatchList) {
  this->adgroupCatmatchList = adgroupCatmatchList;
}

qlonglong ADGroupCatMatchPage::getPageNo() const {
  return pageNo;
}
void ADGroupCatMatchPage::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
}

qlonglong ADGroupCatMatchPage::getPageSize() const {
  return pageSize;
}
void ADGroupCatMatchPage::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}

qlonglong ADGroupCatMatchPage::getTotalItem() const {
  return totalItem;
}
void ADGroupCatMatchPage::setTotalItem (qlonglong totalItem) {
  this->totalItem = totalItem;
}


void ADGroupCatMatchPage::parseResponse() {
  if (responseParser->hasName("adgroup_catmatch_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("adgroup_catmatch_list");
  Parser *parser;
  foreach (parser, listParser) {
    ADGroupCatmatch tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    adgroupCatmatchList.append(tmp);
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

