#include <TaoApiCpp/domain/PictureCategory.h>
QDateTime PictureCategory::getCreated() const {
  return created;
}
void PictureCategory::setCreated (QDateTime created) {
  this->created = created;
}

QDateTime PictureCategory::getModified() const {
  return modified;
}
void PictureCategory::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong PictureCategory::getParentId() const {
  return parentId;
}
void PictureCategory::setParentId (qlonglong parentId) {
  this->parentId = parentId;
}

qlonglong PictureCategory::getPictureCategoryId() const {
  return pictureCategoryId;
}
void PictureCategory::setPictureCategoryId (qlonglong pictureCategoryId) {
  this->pictureCategoryId = pictureCategoryId;
}

QString PictureCategory::getPictureCategoryName() const {
  return pictureCategoryName;
}
void PictureCategory::setPictureCategoryName (QString pictureCategoryName) {
  this->pictureCategoryName = pictureCategoryName;
}

qlonglong PictureCategory::getPosition() const {
  return position;
}
void PictureCategory::setPosition (qlonglong position) {
  this->position = position;
}

QString PictureCategory::getType() const {
  return type;
}
void PictureCategory::setType (QString type) {
  this->type = type;
}


void PictureCategory::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("parent_id")) {
  parentId = responseParser->getNumByName("parent_id");
  }
  if (responseParser->hasName("picture_category_id")) {
  pictureCategoryId = responseParser->getNumByName("picture_category_id");
  }
  if (responseParser->hasName("picture_category_name")) {
  pictureCategoryName = responseParser->getStrByName("picture_category_name");
  }
  if (responseParser->hasName("position")) {
  position = responseParser->getNumByName("position");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }

}

