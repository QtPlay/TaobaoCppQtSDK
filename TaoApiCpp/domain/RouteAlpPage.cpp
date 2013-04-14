#include <TaoApiCpp/domain/RouteAlpPage.h>
QList<ComplexLogisticsRoute> RouteAlpPage::getDatas() const {
  return datas;
}
void RouteAlpPage::setDatas (QList<ComplexLogisticsRoute> datas) {
  this->datas = datas;
}

qlonglong RouteAlpPage::getEnd() const {
  return end;
}
void RouteAlpPage::setEnd (qlonglong end) {
  this->end = end;
}

qlonglong RouteAlpPage::getPageCount() const {
  return pageCount;
}
void RouteAlpPage::setPageCount (qlonglong pageCount) {
  this->pageCount = pageCount;
}

qlonglong RouteAlpPage::getPageIndex() const {
  return pageIndex;
}
void RouteAlpPage::setPageIndex (qlonglong pageIndex) {
  this->pageIndex = pageIndex;
}

qlonglong RouteAlpPage::getPageSize() const {
  return pageSize;
}
void RouteAlpPage::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
}

qlonglong RouteAlpPage::getRecordCount() const {
  return recordCount;
}
void RouteAlpPage::setRecordCount (qlonglong recordCount) {
  this->recordCount = recordCount;
}

qlonglong RouteAlpPage::getStart() const {
  return start;
}
void RouteAlpPage::setStart (qlonglong start) {
  this->start = start;
}


void RouteAlpPage::parseResponse() {
  if (responseParser->hasName("datas")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("datas");
  Parser *parser;
  foreach (parser, listParser) {
    ComplexLogisticsRoute tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    datas.append(tmp);
  }
  }
  if (responseParser->hasName("end")) {
  end = responseParser->getNumByName("end");
  }
  if (responseParser->hasName("page_count")) {
  pageCount = responseParser->getNumByName("page_count");
  }
  if (responseParser->hasName("page_index")) {
  pageIndex = responseParser->getNumByName("page_index");
  }
  if (responseParser->hasName("page_size")) {
  pageSize = responseParser->getNumByName("page_size");
  }
  if (responseParser->hasName("record_count")) {
  recordCount = responseParser->getNumByName("record_count");
  }
  if (responseParser->hasName("start")) {
  start = responseParser->getNumByName("start");
  }

}

