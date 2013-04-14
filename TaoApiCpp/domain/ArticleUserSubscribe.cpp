#include <TaoApiCpp/domain/ArticleUserSubscribe.h>
QDateTime ArticleUserSubscribe::getDeadline() const {
  return deadline;
}
void ArticleUserSubscribe::setDeadline (QDateTime deadline) {
  this->deadline = deadline;
}

QString ArticleUserSubscribe::getItemCode() const {
  return itemCode;
}
void ArticleUserSubscribe::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
}


void ArticleUserSubscribe::parseResponse() {
  if (responseParser->hasName("deadline")) {
  deadline = responseParser->getDateByName("deadline");
  }
  if (responseParser->hasName("item_code")) {
  itemCode = responseParser->getStrByName("item_code");
  }

}

