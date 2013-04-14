#include <TaoApiCpp/domain/NonreplyStatById.h>
QString NonreplyStatById::getNonReplyCustomId() const {
  return nonReplyCustomId;
}
void NonreplyStatById::setNonReplyCustomId (QString nonReplyCustomId) {
  this->nonReplyCustomId = nonReplyCustomId;
}

qlonglong NonreplyStatById::getNonReplyNum() const {
  return nonReplyNum;
}
void NonreplyStatById::setNonReplyNum (qlonglong nonReplyNum) {
  this->nonReplyNum = nonReplyNum;
}

QString NonreplyStatById::getServiceStaffId() const {
  return serviceStaffId;
}
void NonreplyStatById::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
}


void NonreplyStatById::parseResponse() {
  if (responseParser->hasName("non_reply_customId")) {
  nonReplyCustomId = responseParser->getStrByName("non_reply_customId");
  }
  if (responseParser->hasName("non_reply_num")) {
  nonReplyNum = responseParser->getNumByName("non_reply_num");
  }
  if (responseParser->hasName("service_staff_id")) {
  serviceStaffId = responseParser->getStrByName("service_staff_id");
  }

}

