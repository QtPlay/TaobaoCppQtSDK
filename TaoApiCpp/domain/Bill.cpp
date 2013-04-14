#include <TaoApiCpp/domain/Bill.h>
qlonglong Bill::getAccountId() const {
  return accountId;
}
void Bill::setAccountId (qlonglong accountId) {
  this->accountId = accountId;
}

QString Bill::getAlipayId() const {
  return alipayId;
}
void Bill::setAlipayId (QString alipayId) {
  this->alipayId = alipayId;
}

QString Bill::getAlipayMail() const {
  return alipayMail;
}
void Bill::setAlipayMail (QString alipayMail) {
  this->alipayMail = alipayMail;
}

QString Bill::getAlipayNo() const {
  return alipayNo;
}
void Bill::setAlipayNo (QString alipayNo) {
  this->alipayNo = alipayNo;
}

QString Bill::getAlipayNotice() const {
  return alipayNotice;
}
void Bill::setAlipayNotice (QString alipayNotice) {
  this->alipayNotice = alipayNotice;
}

QString Bill::getAlipayOutno() const {
  return alipayOutno;
}
void Bill::setAlipayOutno (QString alipayOutno) {
  this->alipayOutno = alipayOutno;
}

qlonglong Bill::getAmount() const {
  return amount;
}
void Bill::setAmount (qlonglong amount) {
  this->amount = amount;
}

qlonglong Bill::getBid() const {
  return bid;
}
void Bill::setBid (qlonglong bid) {
  this->bid = bid;
}

QDateTime Bill::getBizTime() const {
  return bizTime;
}
void Bill::setBizTime (QDateTime bizTime) {
  this->bizTime = bizTime;
}

QDateTime Bill::getBookTime() const {
  return bookTime;
}
void Bill::setBookTime (QDateTime bookTime) {
  this->bookTime = bookTime;
}

QDateTime Bill::getGmtCreate() const {
  return gmtCreate;
}
void Bill::setGmtCreate (QDateTime gmtCreate) {
  this->gmtCreate = gmtCreate;
}

QString Bill::getGmtModified() const {
  return gmtModified;
}
void Bill::setGmtModified (QString gmtModified) {
  this->gmtModified = gmtModified;
}

QString Bill::getNumIid() const {
  return numIid;
}
void Bill::setNumIid (QString numIid) {
  this->numIid = numIid;
}

QString Bill::getObjAlipayId() const {
  return objAlipayId;
}
void Bill::setObjAlipayId (QString objAlipayId) {
  this->objAlipayId = objAlipayId;
}

QString Bill::getObjAlipayMail() const {
  return objAlipayMail;
}
void Bill::setObjAlipayMail (QString objAlipayMail) {
  this->objAlipayMail = objAlipayMail;
}

QString Bill::getOrderId() const {
  return orderId;
}
void Bill::setOrderId (QString orderId) {
  this->orderId = orderId;
}

QDateTime Bill::getPayTime() const {
  return payTime;
}
void Bill::setPayTime (QDateTime payTime) {
  this->payTime = payTime;
}

qlonglong Bill::getStatus() const {
  return status;
}
void Bill::setStatus (qlonglong status) {
  this->status = status;
}

qlonglong Bill::getTotalAmount() const {
  return totalAmount;
}
void Bill::setTotalAmount (qlonglong totalAmount) {
  this->totalAmount = totalAmount;
}

QString Bill::getTradeId() const {
  return tradeId;
}
void Bill::setTradeId (QString tradeId) {
  this->tradeId = tradeId;
}


void Bill::parseResponse() {
  if (responseParser->hasName("account_id")) {
  accountId = responseParser->getNumByName("account_id");
  }
  if (responseParser->hasName("alipay_id")) {
  alipayId = responseParser->getStrByName("alipay_id");
  }
  if (responseParser->hasName("alipay_mail")) {
  alipayMail = responseParser->getStrByName("alipay_mail");
  }
  if (responseParser->hasName("alipay_no")) {
  alipayNo = responseParser->getStrByName("alipay_no");
  }
  if (responseParser->hasName("alipay_notice")) {
  alipayNotice = responseParser->getStrByName("alipay_notice");
  }
  if (responseParser->hasName("alipay_outno")) {
  alipayOutno = responseParser->getStrByName("alipay_outno");
  }
  if (responseParser->hasName("amount")) {
  amount = responseParser->getNumByName("amount");
  }
  if (responseParser->hasName("bid")) {
  bid = responseParser->getNumByName("bid");
  }
  if (responseParser->hasName("biz_time")) {
  bizTime = responseParser->getDateByName("biz_time");
  }
  if (responseParser->hasName("book_time")) {
  bookTime = responseParser->getDateByName("book_time");
  }
  if (responseParser->hasName("gmt_create")) {
  gmtCreate = responseParser->getDateByName("gmt_create");
  }
  if (responseParser->hasName("gmt_modified")) {
  gmtModified = responseParser->getStrByName("gmt_modified");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getStrByName("num_iid");
  }
  if (responseParser->hasName("obj_alipay_id")) {
  objAlipayId = responseParser->getStrByName("obj_alipay_id");
  }
  if (responseParser->hasName("obj_alipay_mail")) {
  objAlipayMail = responseParser->getStrByName("obj_alipay_mail");
  }
  if (responseParser->hasName("order_id")) {
  orderId = responseParser->getStrByName("order_id");
  }
  if (responseParser->hasName("pay_time")) {
  payTime = responseParser->getDateByName("pay_time");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }
  if (responseParser->hasName("total_amount")) {
  totalAmount = responseParser->getNumByName("total_amount");
  }
  if (responseParser->hasName("trade_id")) {
  tradeId = responseParser->getStrByName("trade_id");
  }

}

