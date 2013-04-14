#include <TaoApiCpp/domain/StreamWeight.h>
QString StreamWeight::getUser() const {
  return user;
}
void StreamWeight::setUser (QString user) {
  this->user = user;
}

qlonglong StreamWeight::getWeight() const {
  return weight;
}
void StreamWeight::setWeight (qlonglong weight) {
  this->weight = weight;
}


void StreamWeight::parseResponse() {
  if (responseParser->hasName("user")) {
  user = responseParser->getStrByName("user");
  }
  if (responseParser->hasName("weight")) {
  weight = responseParser->getNumByName("weight");
  }

}

