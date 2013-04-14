#include <TaoApiCpp/domain/KeywordPage.h>
QList<Keyword> KeywordPage::getKeywordList() const {
  return keywordList;
}
void KeywordPage::setKeywordList (QList<Keyword> keywordList) {
  this->keywordList = keywordList;
}

qlonglong KeywordPage::getPageNo() const {
  return pageNo;
}
void KeywordPage::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
}

qlonglong KeywordPage::getPageSize() const {
  return pageSize;
}
void KeywordPage::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}

qlonglong KeywordPage::getTotalItem() const {
  return totalItem;
}
void KeywordPage::setTotalItem (qlonglong totalItem) {
  this->totalItem = totalItem;
}


void KeywordPage::parseResponse() {
  if (responseParser->hasName("keyword_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("keyword_list");
  Parser *parser;
  foreach (parser, listParser) {
    Keyword tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    keywordList.append(tmp);
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

