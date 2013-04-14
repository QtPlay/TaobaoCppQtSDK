#include <TaoApiCpp/request/MicropayOrderDirectPayRequest.h>

QString MicropayOrderDirectPayRequest::getApiMethodName() const {
  return "alipay.micropay.order.direct.pay";
}

QString MicropayOrderDirectPayRequest::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void MicropayOrderDirectPayRequest::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
  appParams.insert("alipay_order_no", alipayOrderNo);
}

QString MicropayOrderDirectPayRequest::getAmount() const {
  return amount;
}
void MicropayOrderDirectPayRequest::setAmount (QString amount) {
  this->amount = amount;
  appParams.insert("amount", amount);
}

QString MicropayOrderDirectPayRequest::getAuthToken() const {
  return authToken;
}
void MicropayOrderDirectPayRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString MicropayOrderDirectPayRequest::getMemo() const {
  return memo;
}
void MicropayOrderDirectPayRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

QString MicropayOrderDirectPayRequest::getReceiveUserId() const {
  return receiveUserId;
}
void MicropayOrderDirectPayRequest::setReceiveUserId (QString receiveUserId) {
  this->receiveUserId = receiveUserId;
  appParams.insert("receive_user_id", receiveUserId);
}

QString MicropayOrderDirectPayRequest::getTransferOutOrderNo() const {
  return transferOutOrderNo;
}
void MicropayOrderDirectPayRequest::setTransferOutOrderNo (QString transferOutOrderNo) {
  this->transferOutOrderNo = transferOutOrderNo;
  appParams.insert("transfer_out_order_no", transferOutOrderNo);
}



MicropayOrderDirectPayResponse *MicropayOrderDirectPayRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MicropayOrderDirectPayResponse *tmpResponse = new MicropayOrderDirectPayResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
