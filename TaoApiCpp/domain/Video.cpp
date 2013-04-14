#include <TaoApiCpp/domain/Video.h>
QDateTime Video::getCreated() const {
  return created;
}
void Video::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong Video::getId() const {
  return id;
}
void Video::setId (qlonglong id) {
  this->id = id;
}

QString Video::getIid() const {
  return iid;
}
void Video::setIid (QString iid) {
  this->iid = iid;
}

QDateTime Video::getModified() const {
  return modified;
}
void Video::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong Video::getNumIid() const {
  return numIid;
}
void Video::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

QString Video::getUrl() const {
  return url;
}
void Video::setUrl (QString url) {
  this->url = url;
}

qlonglong Video::getVideoId() const {
  return videoId;
}
void Video::setVideoId (qlonglong videoId) {
  this->videoId = videoId;
}


void Video::parseResponse() {
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("iid")) {
  iid = responseParser->getStrByName("iid");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("url")) {
  url = responseParser->getStrByName("url");
  }
  if (responseParser->hasName("video_id")) {
  videoId = responseParser->getNumByName("video_id");
  }

}

