#include <TaoApiCpp/domain/INCategoryTop.h>
QList<INCategoryChildTop> INCategoryTop::getCategoryChildTopList() const {
  return categoryChildTopList;
}
void INCategoryTop::setCategoryChildTopList (QList<INCategoryChildTop> categoryChildTopList) {
  this->categoryChildTopList = categoryChildTopList;
}

QString INCategoryTop::getCategoryDesc() const {
  return categoryDesc;
}
void INCategoryTop::setCategoryDesc (QString categoryDesc) {
  this->categoryDesc = categoryDesc;
}

qlonglong INCategoryTop::getCategoryId() const {
  return categoryId;
}
void INCategoryTop::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
}

QString INCategoryTop::getCategoryName() const {
  return categoryName;
}
void INCategoryTop::setCategoryName (QString categoryName) {
  this->categoryName = categoryName;
}

QList<INCategoryProperties> INCategoryTop::getCategoryPropertiesList() const {
  return categoryPropertiesList;
}
void INCategoryTop::setCategoryPropertiesList (QList<INCategoryProperties> categoryPropertiesList) {
  this->categoryPropertiesList = categoryPropertiesList;
}


void INCategoryTop::parseResponse() {
  if (responseParser->hasName("category_child_top_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("category_child_top_list");
  Parser *parser;
  foreach (parser, listParser) {
    INCategoryChildTop tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    categoryChildTopList.append(tmp);
  }
  }
  if (responseParser->hasName("category_desc")) {
  categoryDesc = responseParser->getStrByName("category_desc");
  }
  if (responseParser->hasName("category_id")) {
  categoryId = responseParser->getNumByName("category_id");
  }
  if (responseParser->hasName("category_name")) {
  categoryName = responseParser->getStrByName("category_name");
  }
  if (responseParser->hasName("category_properties_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("category_properties_list");
  Parser *parser;
  foreach (parser, listParser) {
    INCategoryProperties tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    categoryPropertiesList.append(tmp);
  }
  }

}

