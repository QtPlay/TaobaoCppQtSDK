#include <TaoApiCpp/domain/Discount.h>
QDateTime Discount::getCreated() const {
  return created;
}
void Discount::setCreated (QDateTime created) {
  this->created = created;
}

QList<DiscountDetail> Discount::getDetails() const {
  return details;
}
void Discount::setDetails (QList<DiscountDetail> details) {
  this->details = details;
}

qlonglong Discount::getDiscountId() const {
  return discountId;
}
void Discount::setDiscountId (qlonglong discountId) {
  this->discountId = discountId;
}

QDateTime Discount::getModified() const {
  return modified;
}
void Discount::setModified (QDateTime modified) {
  this->modified = modified;
}

QString Discount::getName() const {
  return name;
}
void Discount::setName (QString name) {
  this->name = name;
}


void Discount::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("details")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("details");
  Parser *parser;
  foreach (parser, listParser) {
    DiscountDetail tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    details.append(tmp);
  }
  }
  if (responseParser->hasName("discount_id")) {
  discountId = responseParser->getNumByName("discount_id");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }

}

