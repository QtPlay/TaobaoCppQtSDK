#include <TaoApiCpp/domain/RecommendWordPage.h>
qlonglong RecommendWordPage::getPageNo() const {
  return pageNo;
}
void RecommendWordPage::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
}

qlonglong RecommendWordPage::getPageSize() const {
  return pageSize;
}
void RecommendWordPage::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}

QList<RecommendWord> RecommendWordPage::getRecommendWordList() const {
  return recommendWordList;
}
void RecommendWordPage::setRecommendWordList (QList<RecommendWord> recommendWordList) {
  this->recommendWordList = recommendWordList;
}

qlonglong RecommendWordPage::getTotalItem() const {
  return totalItem;
}
void RecommendWordPage::setTotalItem (qlonglong totalItem) {
  this->totalItem = totalItem;
}


void RecommendWordPage::parseResponse() {
  if (responseParser->hasName("page_no")) {
  pageNo = responseParser->getNumByName("page_no");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }
  if (responseParser->hasName("recommend_word_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("recommend_word_list");
  Parser *parser;
  foreach (parser, listParser) {
    RecommendWord tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    recommendWordList.append(tmp);
  }
  }
  if (responseParser->hasName("total_item")) {
  totalItem = responseParser->getNumByName("total_item");
  }

}

