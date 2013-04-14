#include <TaoApiCpp/response/EmaiItemsSearchResponse.h>

QList<TmallSearchTmItem> EmaiItemsSearchResponse::getItemList() const {
  return itemList;
}
void EmaiItemsSearchResponse::setItemList (QList<TmallSearchTmItem> itemList) {
  this->itemList = itemList;
}
qlonglong EmaiItemsSearchResponse::getPage() const {
  return page;
}
void EmaiItemsSearchResponse::setPage (qlonglong page) {
  this->page = page;
}
qlonglong EmaiItemsSearchResponse::getPageSize() const {
  return pageSize;
}
void EmaiItemsSearchResponse::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}
qlonglong EmaiItemsSearchResponse::getTotalPage() const {
  return totalPage;
}
void EmaiItemsSearchResponse::setTotalPage (qlonglong totalPage) {
  this->totalPage = totalPage;
}
qlonglong EmaiItemsSearchResponse::getTotalResults() const {
  return totalResults;
}
void EmaiItemsSearchResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void EmaiItemsSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_list");
  Parser *parser;
  foreach (parser, listParser) {
    TmallSearchTmItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemList.append(tmp);
  }
  }
  if (responseParser->hasName("page")) {
  page = responseParser->getNumByName("page");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }
  if (responseParser->hasName("total_page")) {
  totalPage = responseParser->getNumByName("total_page");
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

