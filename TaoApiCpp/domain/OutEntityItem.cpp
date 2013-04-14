#include <TaoApiCpp/domain/OutEntityItem.h>
QString OutEntityItem::getEntityId() const {
  return entityId;
}
void OutEntityItem::setEntityId (QString entityId) {
  this->entityId = entityId;
}

QString OutEntityItem::getEntityType() const {
  return entityType;
}
void OutEntityItem::setEntityType (QString entityType) {
  this->entityType = entityType;
}


void OutEntityItem::parseResponse() {
  if (responseParser->hasName("entity_id")) {
  entityId = responseParser->getStrByName("entity_id");
  }
  if (responseParser->hasName("entity_type")) {
  entityType = responseParser->getStrByName("entity_type");
  }

}

