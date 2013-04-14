#include <TaoApiCpp/domain/WlbMessage.h>
QDateTime WlbMessage::getGmtCreate() const {
  return gmtCreate;
}
void WlbMessage::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

qlonglong WlbMessage::getId() const {
  return id;
}
void WlbMessage::setId (qlonglong id) {
  this->id = id;
}

QString WlbMessage::getMsgCode() const {
  return msgCode;
}
void WlbMessage::setMsgCode (QString msgCode) {
  this->msgCode = msgCode;
}

QString WlbMessage::getMsgContent() const {
  return msgContent;
}
void WlbMessage::setMsgContent (QString msgContent) {
  this->msgContent = msgContent;
}

QString WlbMessage::getMsgDescription() const {
  return msgDescription;
}
void WlbMessage::setMsgDescription (QString msgDescription) {
  this->msgDescription = msgDescription;
}

QString WlbMessage::getStatus() const {
  return status;
}
void WlbMessage::setStatus (QString status) {
  this->status = status;
}

qlonglong WlbMessage::getUserId() const {
  return userId;
}
void WlbMessage::setUserId (qlonglong userId) {
  this->userId = userId;
}


void WlbMessage::parseResponse() {
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("msg_code")) {
  msgCode = responseParser->getStrByName("msg_code");
  }
  if (responseParser->hasName("msg_content")) {
  msgContent = responseParser->getStrByName("msg_content");
  }
  if (responseParser->hasName("msg_description")) {
  msgDescription = responseParser->getStrByName("msg_description");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }

}

