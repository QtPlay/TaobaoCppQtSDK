#include <TaoApiCpp/domain/SinglePayDetail.h>
QString SinglePayDetail::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void SinglePayDetail::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
}

QString SinglePayDetail::getAmount() const {
  return amount;
}
void SinglePayDetail::setAmount (QString amount) {
  this->amount = amount;
}

QDateTime SinglePayDetail::getCreateTime() const {
  return createTime;
}
void SinglePayDetail::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

QDateTime SinglePayDetail::getModifiedTime() const {
  return modifiedTime;
}
void SinglePayDetail::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString SinglePayDetail::getPayUrl() const {
  return payUrl;
}
void SinglePayDetail::setPayUrl (QString payUrl) {
  this->payUrl = payUrl;
}

QString SinglePayDetail::getReceiveUserId() const {
  return receiveUserId;
}
void SinglePayDetail::setReceiveUserId (QString receiveUserId) {
  this->receiveUserId = receiveUserId;
}

QString SinglePayDetail::getTransferOrderNo() const {
  return transferOrderNo;
}
void SinglePayDetail::setTransferOrderNo (QString transferOrderNo) {
  this->transferOrderNo = transferOrderNo;
}

QString SinglePayDetail::getTransferOutOrderNo() const {
  return transferOutOrderNo;
}
void SinglePayDetail::setTransferOutOrderNo (QString transferOutOrderNo) {
  this->transferOutOrderNo = transferOutOrderNo;
}


void SinglePayDetail::parseResponse() {
  if (responseParser->hasName("alipay_order_no")) {
  alipayOrderNo = responseParser->getStrByName("alipay_order_no");
  }
  if (responseParser->hasName("amount")) {
  amount = responseParser->getStrByName("amount");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("pay_url")) {
  payUrl = responseParser->getStrByName("pay_url");
  }
  if (responseParser->hasName("receive_user_id")) {
  receiveUserId = responseParser->getStrByName("receive_user_id");
  }
  if (responseParser->hasName("transfer_order_no")) {
  transferOrderNo = responseParser->getStrByName("transfer_order_no");
  }
  if (responseParser->hasName("transfer_out_order_no")) {
  transferOutOrderNo = responseParser->getStrByName("transfer_out_order_no");
  }

}

