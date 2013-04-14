#include <TaoApiCpp/domain/ArticleSub.h>
QString ArticleSub::getArticleCode() const {
  return articleCode;
}
void ArticleSub::setArticleCode (QString articleCode) {
  this->articleCode = articleCode;
}

QString ArticleSub::getArticleName() const {
  return articleName;
}
void ArticleSub::setArticleName (QString articleName) {
  this->articleName = articleName;
}

bool ArticleSub::getAutosub() const {
  return autosub;
}
void ArticleSub::setAutosub (bool autosub) {
  this->autosub = autosub;
}

QDateTime ArticleSub::getDeadline() const {
  return deadline;
}
void ArticleSub::setDeadline (QDateTime deadline) {
  this->deadline = deadline;
}

bool ArticleSub::getExpireNotice() const {
  return expireNotice;
}
void ArticleSub::setExpireNotice (bool expireNotice) {
  this->expireNotice = expireNotice;
}

QString ArticleSub::getItemCode() const {
  return itemCode;
}
void ArticleSub::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
}

QString ArticleSub::getItemName() const {
  return itemName;
}
void ArticleSub::setItemName (QString itemName) {
  this->itemName = itemName;
}

QString ArticleSub::getNick() const {
  return nick;
}
void ArticleSub::setNick (QString nick) {
  this->nick = nick;
}

qlonglong ArticleSub::getStatus() const {
  return status;
}
void ArticleSub::setStatus (qlonglong status) {
  this->status = status;
}


void ArticleSub::parseResponse() {
  if (responseParser->hasName("article_code")) {
  articleCode = responseParser->getStrByName("article_code");
  }
  if (responseParser->hasName("article_name")) {
  articleName = responseParser->getStrByName("article_name");
  }
  if (responseParser->hasName("autosub")) {
  autosub = responseParser->getBoolByName("autosub");
  }
  if (responseParser->hasName("deadline")) {
  deadline = responseParser->getDateByName("deadline");
  }
  if (responseParser->hasName("expire_notice")) {
  expireNotice = responseParser->getBoolByName("expire_notice");
  }
  if (responseParser->hasName("item_code")) {
  itemCode = responseParser->getStrByName("item_code");
  }
  if (responseParser->hasName("item_name")) {
  itemName = responseParser->getStrByName("item_name");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }

}

