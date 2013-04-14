#include <TaoApiCpp/request/MicropayOrderFreezeRequest.h>

QString MicropayOrderFreezeRequest::getApiMethodName() const {
  return "alipay.micropay.order.freeze";
}

QString MicropayOrderFreezeRequest::getAmount() const {
  return amount;
}
void MicropayOrderFreezeRequest::setAmount (QString amount) {
  this->amount = amount;
  appParams.insert("amount", amount);
}

QString MicropayOrderFreezeRequest::getAuthToken() const {
  return authToken;
}
void MicropayOrderFreezeRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QDateTime MicropayOrderFreezeRequest::getExpireTime() const {
  return expireTime;
}
void MicropayOrderFreezeRequest::setExpireTime (QDateTime expireTime) {
  this->expireTime = expireTime;
  appParams.insert("expire_time", expireTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString MicropayOrderFreezeRequest::getMemo() const {
  return memo;
}
void MicropayOrderFreezeRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

QString MicropayOrderFreezeRequest::getMerchantOrderNo() const {
  return merchantOrderNo;
}
void MicropayOrderFreezeRequest::setMerchantOrderNo (QString merchantOrderNo) {
  this->merchantOrderNo = merchantOrderNo;
  appParams.insert("merchant_order_no", merchantOrderNo);
}

QString MicropayOrderFreezeRequest::getPayConfirm() const {
  return payConfirm;
}
void MicropayOrderFreezeRequest::setPayConfirm (QString payConfirm) {
  this->payConfirm = payConfirm;
  appParams.insert("pay_confirm", payConfirm);
}



MicropayOrderFreezeResponse *MicropayOrderFreezeRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MicropayOrderFreezeResponse *tmpResponse = new MicropayOrderFreezeResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
