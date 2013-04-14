#include <TaoApiCpp/domain/ArticleBizOrder.h>
QString ArticleBizOrder::getArticleCode() const {
  return articleCode;
}
void ArticleBizOrder::setArticleCode (QString articleCode) {
  this->articleCode = articleCode;
}

QString ArticleBizOrder::getArticleItemName() const {
  return articleItemName;
}
void ArticleBizOrder::setArticleItemName (QString articleItemName) {
  this->articleItemName = articleItemName;
}

QString ArticleBizOrder::getArticleName() const {
  return articleName;
}
void ArticleBizOrder::setArticleName (QString articleName) {
  this->articleName = articleName;
}

qlonglong ArticleBizOrder::getBizOrderId() const {
  return bizOrderId;
}
void ArticleBizOrder::setBizOrderId (qlonglong bizOrderId) {
  this->bizOrderId = bizOrderId;
}

qlonglong ArticleBizOrder::getBizType() const {
  return bizType;
}
void ArticleBizOrder::setBizType (qlonglong bizType) {
  this->bizType = bizType;
}

QDateTime ArticleBizOrder::getCreate() const {
  return create;
}
void ArticleBizOrder::setCreate (QDateTime create) {
  this->create = create;
}

QString ArticleBizOrder::getFee() const {
  return fee;
}
void ArticleBizOrder::setFee (QString fee) {
  this->fee = fee;
}

QString ArticleBizOrder::getItemCode() const {
  return itemCode;
}
void ArticleBizOrder::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
}

QString ArticleBizOrder::getItemName() const {
  return itemName;
}
void ArticleBizOrder::setItemName (QString itemName) {
  this->itemName = itemName;
}

QString ArticleBizOrder::getNick() const {
  return nick;
}
void ArticleBizOrder::setNick (QString nick) {
  this->nick = nick;
}

QString ArticleBizOrder::getOrderCycle() const {
  return orderCycle;
}
void ArticleBizOrder::setOrderCycle (QString orderCycle) {
  this->orderCycle = orderCycle;
}

QDateTime ArticleBizOrder::getOrderCycleEnd() const {
  return orderCycleEnd;
}
void ArticleBizOrder::setOrderCycleEnd (QDateTime orderCycleEnd) {
  this->orderCycleEnd = orderCycleEnd;
}

QDateTime ArticleBizOrder::getOrderCycleStart() const {
  return orderCycleStart;
}
void ArticleBizOrder::setOrderCycleStart (QDateTime orderCycleStart) {
  this->orderCycleStart = orderCycleStart;
}

qlonglong ArticleBizOrder::getOrderId() const {
  return orderId;
}
void ArticleBizOrder::setOrderId (qlonglong orderId) {
  this->orderId = orderId;
}

QString ArticleBizOrder::getPromFee() const {
  return promFee;
}
void ArticleBizOrder::setPromFee (QString promFee) {
  this->promFee = promFee;
}

QString ArticleBizOrder::getRefundFee() const {
  return refundFee;
}
void ArticleBizOrder::setRefundFee (QString refundFee) {
  this->refundFee = refundFee;
}

QString ArticleBizOrder::getTotalPayFee() const {
  return totalPayFee;
}
void ArticleBizOrder::setTotalPayFee (QString totalPayFee) {
  this->totalPayFee = totalPayFee;
}


void ArticleBizOrder::parseResponse() {
  if (responseParser->hasName("article_code")) {
  articleCode = responseParser->getStrByName("article_code");
  }
  if (responseParser->hasName("article_item_name")) {
  articleItemName = responseParser->getStrByName("article_item_name");
  }
  if (responseParser->hasName("article_name")) {
  articleName = responseParser->getStrByName("article_name");
  }
  if (responseParser->hasName("biz_order_id")) {
  bizOrderId = responseParser->getNumByName("biz_order_id");
  }
  if (responseParser->hasName("biz_type")) {
  bizType = responseParser->getNumByName("biz_type");
  }
  if (responseParser->hasName("create")) {
  create = responseParser->getDateByName("create");
  }
  if (responseParser->hasName("fee")) {
  fee = responseParser->getStrByName("fee");
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
  if (responseParser->hasName("order_cycle")) {
  orderCycle = responseParser->getStrByName("order_cycle");
  }
  if (responseParser->hasName("order_cycle_end")) {
  orderCycleEnd = responseParser->getDateByName("order_cycle_end");
  }
  if (responseParser->hasName("order_cycle_start")) {
  orderCycleStart = responseParser->getDateByName("order_cycle_start");
  }
  if (responseParser->hasName("order_id")) {
  orderId = responseParser->getNumByName("order_id");
  }
  if (responseParser->hasName("prom_fee")) {
  promFee = responseParser->getStrByName("prom_fee");
  }
  if (responseParser->hasName("refund_fee")) {
  refundFee = responseParser->getStrByName("refund_fee");
  }
  if (responseParser->hasName("total_pay_fee")) {
  totalPayFee = responseParser->getStrByName("total_pay_fee");
  }

}

