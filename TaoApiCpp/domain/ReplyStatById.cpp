#include <TaoApiCpp/domain/ReplyStatById.h>
qlonglong ReplyStatById::getReplyNum() const {
  return replyNum;
}
void ReplyStatById::setReplyNum (qlonglong replyNum) {
  this->replyNum = replyNum;
}

QString ReplyStatById::getUserId() const {
  return userId;
}
void ReplyStatById::setUserId (QString userId) {
  this->userId = userId;
}


void ReplyStatById::parseResponse() {
  if (responseParser->hasName("reply_num")) {
  replyNum = responseParser->getNumByName("reply_num");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getStrByName("user_id");
  }

}

