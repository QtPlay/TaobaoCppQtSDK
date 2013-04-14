#include <TaoApiCpp/response/ScitemQueryResponse.h>

qlonglong ScitemQueryResponse::getPageIndex() const {
  return pageIndex;
}
void ScitemQueryResponse::setPageIndex (qlonglong pageIndex) {
  this->pageIndex = pageIndex;
}
qlonglong ScitemQueryResponse::getPageSize() const {
  return pageSize;
}
void ScitemQueryResponse::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}
QueryPagination ScitemQueryResponse::getQueryPagination() const {
  return queryPagination;
}
void ScitemQueryResponse::setQueryPagination (QueryPagination queryPagination) {
  this->queryPagination = queryPagination;
}
QList<ScItem> ScitemQueryResponse::getScItemList() const {
  return scItemList;
}
void ScitemQueryResponse::setScItemList (QList<ScItem> scItemList) {
  this->scItemList = scItemList;
}
qlonglong ScitemQueryResponse::getTotalPage() const {
  return totalPage;
}
void ScitemQueryResponse::setTotalPage (qlonglong totalPage) {
  this->totalPage = totalPage;
}

void ScitemQueryResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("page_index")) {
  pageIndex = responseParser->getNumByName("page_index");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }
  if (responseParser->hasName("query_pagination")) {
  queryPagination.setParser(responseParser->getObjectParser("query_pagination"));
  queryPagination.parseResponse();
  }
  if (responseParser->hasName("sc_item_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("sc_item_list");
  Parser *parser;
  foreach (parser, listParser) {
    ScItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    scItemList.append(tmp);
  }
  }
  if (responseParser->hasName("total_page")) {
  totalPage = responseParser->getNumByName("total_page");
  }

}

