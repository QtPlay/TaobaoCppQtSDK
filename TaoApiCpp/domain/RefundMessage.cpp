#include <TaoApiCpp/domain/RefundMessage.h>
QString RefundMessage::getContent() const {
  return content;
}
void RefundMessage::setContent (QString content) {
  this->content = content;
}

QDateTime RefundMessage::getCreated() const {
  return created;
}
void RefundMessage::setCreated (QDateTime created) {
  this->created = created;
}

qlonglong RefundMessage::getId() const {
  return id;
}
void RefundMessage::setId (qlonglong id) {
  this->id = id;
}

QString RefundMessage::getMessageType() const {
  return messageType;
}
void RefundMessage::setMessageType (QString messageType) {
  this->messageType = messageType;
}

qlonglong RefundMessage::getOwnerId() const {
  return ownerId;
}
void RefundMessage::setOwnerId (qlonglong ownerId) {
  this->ownerId = ownerId;
}

QString RefundMessage::getOwnerNick() const {
  return ownerNick;
}
void RefundMessage::setOwnerNick (QString ownerNick) {
  this->ownerNick = ownerNick;
}

QString RefundMessage::getOwnerRole() const {
  return ownerRole;
}
void RefundMessage::setOwnerRole (QString ownerRole) {
  this->ownerRole = ownerRole;
}

QList<PicUrl> RefundMessage::getPicUrls() const {
  return picUrls;
}
void RefundMessage::setPicUrls (QList<PicUrl> picUrls) {
  this->picUrls = picUrls;
}

qlonglong RefundMessage::getRefundId() const {
  return refundId;
}
void RefundMessage::setRefundId (qlonglong refundId) {
  this->refundId = refundId;
}


void RefundMessage::parseResponse() {
  if (responseParser->hasName("content")) {
  content = responseParser->getStrByName("content");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("id")) {
  id = responseParser->getNumByName("id");
  }
  if (responseParser->hasName("message_type")) {
  messageType = responseParser->getStrByName("message_type");
  }
  if (responseParser->hasName("owner_id")) {
  ownerId = responseParser->getNumByName("owner_id");
  }
  if (responseParser->hasName("owner_nick")) {
  ownerNick = responseParser->getStrByName("owner_nick");
  }
  if (responseParser->hasName("owner_role")) {
  ownerRole = responseParser->getStrByName("owner_role");
  }
  if (responseParser->hasName("pic_urls")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("pic_urls");
  Parser *parser;
  foreach (parser, listParser) {
    PicUrl tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    picUrls.append(tmp);
  }
  }
  if (responseParser->hasName("refund_id")) {
  refundId = responseParser->getNumByName("refund_id");
  }

}

