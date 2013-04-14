#include <TaoApiCpp/domain/INWordBase.h>
QList<INRecordBase> INWordBase::getInRecordBaseList() const {
  return inRecordBaseList;
}
void INWordBase::setInRecordBaseList (QList<INRecordBase> inRecordBaseList) {
  this->inRecordBaseList = inRecordBaseList;
}

QString INWordBase::getWord() const {
  return word;
}
void INWordBase::setWord (QString word) {
  this->word = word;
}


void INWordBase::parseResponse() {
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
  if (responseParser->hasName("word")) {
  word = responseParser->getStrByName("word");
  }

}

