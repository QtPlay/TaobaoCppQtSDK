#include <TaoApiCpp/domain/Picture.h>
QDateTime Picture::getCreated() const {
  return created;
}
void Picture::setCreated (QDateTime created) {
  this->created = created;
}

QString Picture::getDeleted() const {
  return deleted;
}
void Picture::setDeleted (QString deleted) {
  this->deleted = deleted;
}

QString Picture::getMd5() const {
  return md5;
}
void Picture::setMd5 (QString md5) {
  this->md5 = md5;
}

QDateTime Picture::getModified() const {
  return modified;
}
void Picture::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong Picture::getPictureCategoryId() const {
  return pictureCategoryId;
}
void Picture::setPictureCategoryId (qlonglong pictureCategoryId) {
  this->pictureCategoryId = pictureCategoryId;
}

qlonglong Picture::getPictureId() const {
  return pictureId;
}
void Picture::setPictureId (qlonglong pictureId) {
  this->pictureId = pictureId;
}

QString Picture::getPicturePath() const {
  return picturePath;
}
void Picture::setPicturePath (QString picturePath) {
  this->picturePath = picturePath;
}

QString Picture::getPixel() const {
  return pixel;
}
void Picture::setPixel (QString pixel) {
  this->pixel = pixel;
}

bool Picture::getReferenced() const {
  return referenced;
}
void Picture::setReferenced (bool referenced) {
  this->referenced = referenced;
}

qlonglong Picture::getSizes() const {
  return sizes;
}
void Picture::setSizes (qlonglong sizes) {
  this->sizes = sizes;
}

QString Picture::getStatus() const {
  return status;
}
void Picture::setStatus (QString status) {
  this->status = status;
}

QString Picture::getTitle() const {
  return title;
}
void Picture::setTitle (QString title) {
  this->title = title;
}

qlonglong Picture::getUid() const {
  return uid;
}
void Picture::setUid (qlonglong uid) {
  this->uid = uid;
}


void Picture::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("deleted")) {
  deleted = responseParser->getStrByName("deleted");
  }
  if (responseParser->hasName("md5")) {
  md5 = responseParser->getStrByName("md5");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("picture_category_id")) {
  pictureCategoryId = responseParser->getNumByName("picture_category_id");
  }
  if (responseParser->hasName("picture_id")) {
  pictureId = responseParser->getNumByName("picture_id");
  }
  if (responseParser->hasName("picture_path")) {
  picturePath = responseParser->getStrByName("picture_path");
  }
  if (responseParser->hasName("pixel")) {
  pixel = responseParser->getStrByName("pixel");
  }
  if (responseParser->hasName("referenced")) {
  referenced = responseParser->getBoolByName("referenced");
  }
  if (responseParser->hasName("sizes")) {
  sizes = responseParser->getNumByName("sizes");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("uid")) {
  uid = responseParser->getNumByName("uid");
  }

}

