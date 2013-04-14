#include <TaoApiCpp/domain/INCategoryChildTop.h>
QString INCategoryChildTop::getCategoryDesc() const {
  return categoryDesc;
}
void INCategoryChildTop::setCategoryDesc (QString categoryDesc) {
  this->categoryDesc = categoryDesc;
}

qlonglong INCategoryChildTop::getCategoryId() const {
  return categoryId;
}
void INCategoryChildTop::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
}

QString INCategoryChildTop::getCategoryName() const {
  return categoryName;
}
void INCategoryChildTop::setCategoryName (QString categoryName) {
  this->categoryName = categoryName;
}

QList<INCategoryProperties> INCategoryChildTop::getCategoryPropertiesList() const {
  return categoryPropertiesList;
}
void INCategoryChildTop::setCategoryPropertiesList (QList<INCategoryProperties> categoryPropertiesList) {
  this->categoryPropertiesList = categoryPropertiesList;
}


void INCategoryChildTop::parseResponse() {
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

