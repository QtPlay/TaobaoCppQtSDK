#include <TaoApiCpp/domain/INCategoryBase.h>
qlonglong INCategoryBase::getCategoryId() const {
  return categoryId;
}
void INCategoryBase::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
}

QString INCategoryBase::getCategoryName() const {
  return categoryName;
}
void INCategoryBase::setCategoryName (QString categoryName) {
  this->categoryName = categoryName;
}

qlonglong INCategoryBase::getCategoryPv() const {
  return categoryPv;
}
void INCategoryBase::setCategoryPv (qlonglong categoryPv) {
  this->categoryPv = categoryPv;
}

QList<INRecordBase> INCategoryBase::getInRecordBaseList() const {
  return inRecordBaseList;
}
void INCategoryBase::setInRecordBaseList (QList<INRecordBase> inRecordBaseList) {
  this->inRecordBaseList = inRecordBaseList;
}


void INCategoryBase::parseResponse() {
  if (responseParser->hasName("category_id")) {
  categoryId = responseParser->getNumByName("category_id");
  }
  if (responseParser->hasName("category_name")) {
  categoryName = responseParser->getStrByName("category_name");
  }
  if (responseParser->hasName("category_pv")) {
  categoryPv = responseParser->getNumByName("category_pv");
  }
  if (responseParser->hasName("in_record_base_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("in_record_base_list");
  Parser *parser;
  foreach (parser, listParser) {
    INRecordBase tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    inRecordBaseList.append(tmp);
  }
  }

}

