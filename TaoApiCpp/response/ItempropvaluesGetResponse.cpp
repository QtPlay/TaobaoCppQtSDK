#include <TaoApiCpp/response/ItempropvaluesGetResponse.h>

QDateTime ItempropvaluesGetResponse::getLastModified() const {
  return lastModified;
}
void ItempropvaluesGetResponse::setLastModified (QDateTime lastModified) {
  this->lastModified = lastModified;
}
QList<PropValue> ItempropvaluesGetResponse::getPropValues() const {
  return propValues;
}
void ItempropvaluesGetResponse::setPropValues (QList<PropValue> propValues) {
  this->propValues = propValues;
}

void ItempropvaluesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("last_modified")) {
  lastModified = responseParser->getDateByName("last_modified");
  }
  if (responseParser->hasName("prop_values")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("prop_values");
  Parser *parser;
  foreach (parser, listParser) {
    PropValue tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    propValues.append(tmp);
  }
  }

}

