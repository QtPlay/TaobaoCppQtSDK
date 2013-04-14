#include <TaoApiCpp/domain/TmallMinisite.h>
qlonglong TmallMinisite::getId() const {
  return id;
}
void TmallMinisite::setId (qlonglong id) {
  this->id = id;
}

QString TmallMinisite::getPromotions() const {
  return promotions;
}
void TmallMinisite::setPromotions (QString promotions) {
  this->promotions = promotions;
}

QString TmallMinisite::getTitle() const {
  return title;
}
void TmallMinisite::setTitle (QString title) {
  this->title = title;
}

qlonglong TmallMinisite::getType() const {
  return type;
}
void TmallMinisite::setType (qlonglong type) {
  this->type = type;
}


void TmallMinisite::parseResponse() {
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("promotions")) {
  promotions = responseParser->getStrByName("promotions");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getNumByName("type");
  }

}

