#include <TaoApiCpp/response/TemsDiscountSearchResponse.h>

QList<TmallBrand> TemsDiscountSearchResponse::getBrandList() const {
  return brandList;
}
void TemsDiscountSearchResponse::setBrandList (QList<TmallBrand> brandList) {
  this->brandList = brandList;
}
QList<TmallCat> TemsDiscountSearchResponse::getCatList() const {
  return catList;
}
void TemsDiscountSearchResponse::setCatList (QList<TmallCat> catList) {
  this->catList = catList;
}
QList<TmallSearchItem> TemsDiscountSearchResponse::getItemList() const {
  return itemList;
}
void TemsDiscountSearchResponse::setItemList (QList<TmallSearchItem> itemList) {
  this->itemList = itemList;
}
QList<TmallMinisite> TemsDiscountSearchResponse::getMinisiteList() const {
  return minisiteList;
}
void TemsDiscountSearchResponse::setMinisiteList (QList<TmallMinisite> minisiteList) {
  this->minisiteList = minisiteList;
}
qlonglong TemsDiscountSearchResponse::getPage() const {
  return page;
}
void TemsDiscountSearchResponse::setPage (qlonglong page) {
  this->page = page;
}
qlonglong TemsDiscountSearchResponse::getPageSize() const {
  return pageSize;
}
void TemsDiscountSearchResponse::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}
QString TemsDiscountSearchResponse::getParamValue() const {
  return paramValue;
}
void TemsDiscountSearchResponse::setParamValue (QString paramValue) {
  this->paramValue = paramValue;
}
QString TemsDiscountSearchResponse::getSearchUrl() const {
  return searchUrl;
}
void TemsDiscountSearchResponse::setSearchUrl (QString searchUrl) {
  this->searchUrl = searchUrl;
}
qlonglong TemsDiscountSearchResponse::getTotalPage() const {
  return totalPage;
}
void TemsDiscountSearchResponse::setTotalPage (qlonglong totalPage) {
  this->totalPage = totalPage;
}
QString TemsDiscountSearchResponse::getTotalResults() const {
  return totalResults;
}
void TemsDiscountSearchResponse::setTotalResults (QString totalResults) {
  this->totalResults = totalResults;
}

void TemsDiscountSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("brand_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("brand_list");
  Parser *parser;
  foreach (parser, listParser) {
    TmallBrand tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    brandList.append(tmp);
  }
  }
  if (responseParser->hasName("cat_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("cat_list");
  Parser *parser;
  foreach (parser, listParser) {
    TmallCat tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    catList.append(tmp);
  }
  }
  if (responseParser->hasName("item_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("item_list");
  Parser *parser;
  foreach (parser, listParser) {
    TmallSearchItem tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    itemList.append(tmp);
  }
  }
  if (responseParser->hasName("minisite_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("minisite_list");
  Parser *parser;
  foreach (parser, listParser) {
    TmallMinisite tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    minisiteList.append(tmp);
  }
  }
  if (responseParser->hasName("page")) {
  page = responseParser->getNumByName("page");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }
  if (responseParser->hasName("param_value")) {
  paramValue = responseParser->getStrByName("param_value");
  }
  if (responseParser->hasName("search_url")) {
  searchUrl = responseParser->getStrByName("search_url");
  }
  if (responseParser->hasName("total_page")) {
  totalPage = responseParser->getNumByName("total_page");
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getStrByName("total_results");
  }

}

