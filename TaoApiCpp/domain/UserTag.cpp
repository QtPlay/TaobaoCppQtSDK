#include <TaoApiCpp/domain/UserTag.h>
QDateTime UserTag::getCreateDate() const {
  return createDate;
}
void UserTag::setCreateDate (QDateTime createDate) {
  this->createDate = createDate;
}

QString UserTag::getDescription() const {
  return description;
}
void UserTag::setDescription (QString description) {
  this->description = description;
}

qlonglong UserTag::getTagId() const {
  return tagId;
}
void UserTag::setTagId (qlonglong tagId) {
  this->tagId = tagId;
}

QString UserTag::getTagName() const {
  return tagName;
}
void UserTag::setTagName (QString tagName) {
  this->tagName = tagName;
}


void UserTag::parseResponse() {
  if (responseParser->hasName("create_date")) {
  createDate = responseParser->getDateByName("create_date");
  }
  if (responseParser->hasName("description")) {
  description = responseParser->getStrByName("description");
  }
  if (responseParser->hasName("tag_id")) {
  tagId = responseParser->getNumByName("tag_id");
  }
  if (responseParser->hasName("tag_name")) {
  tagName = responseParser->getStrByName("tag_name");
  }

}

