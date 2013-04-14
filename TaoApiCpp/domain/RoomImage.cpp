#include <TaoApiCpp/domain/RoomImage.h>
QString RoomImage::getAllImages() const {
  return allImages;
}
void RoomImage::setAllImages (QString allImages) {
  this->allImages = allImages;
}

qlonglong RoomImage::getGid() const {
  return gid;
}
void RoomImage::setGid (qlonglong gid) {
  this->gid = gid;
}

QString RoomImage::getImage() const {
  return image;
}
void RoomImage::setImage (QString image) {
  this->image = image;
}

qlonglong RoomImage::getPosition() const {
  return position;
}
void RoomImage::setPosition (qlonglong position) {
  this->position = position;
}


void RoomImage::parseResponse() {
  if (responseParser->hasName("all_images")) {
  allImages = responseParser->getStrByName("all_images");
  }
  if (responseParser->hasName("gid")) {
  gid = responseParser->getNumByName("gid");
  }
  if (responseParser->hasName("image")) {
  image = responseParser->getStrByName("image");
  }
  if (responseParser->hasName("position")) {
  position = responseParser->getNumByName("position");
  }

}

