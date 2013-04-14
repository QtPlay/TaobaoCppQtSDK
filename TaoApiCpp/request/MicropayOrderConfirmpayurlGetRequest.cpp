#include <TaoApiCpp/request/MicropayOrderConfirmpayurlGetRequest.h>

QString MicropayOrderConfirmpayurlGetRequest::getApiMethodName() const {
  return "alipay.micropay.order.confirmpayurl.get";
}

QString MicropayOrderConfirmpayurlGetRequest::getAlipayOrderNo() const {
  return alipayOrderNo;
}
void MicropayOrderConfirmpayurlGetRequest::setAlipayOrderNo (QString alipayOrderNo) {
  this->alipayOrderNo = alipayOrderNo;
  appParams.insert("alipay_order_no", alipayOrderNo);
}

QString MicropayOrderConfirmpayurlGetRequest::getAmount() const {
  return amount;
}
void MicropayOrderConfirmpayurlGetRequest::setAmount (QString amount) {
  this->amount = amount;
  appParams.insert("amount", amount);
}

QString MicropayOrderConfirmpayurlGetRequest::getAuthToken() const {
  return authToken;
}
void MicropayOrderConfirmpayurlGetRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}

QString MicropayOrderConfirmpayurlGetRequest::getMemo() const {
  return memo;
}
void MicropayOrderConfirmpayurlGetRequest::setMemo (QString memo) {
  this->memo = memo;
  appParams.insert("memo", memo);
}

QString MicropayOrderConfirmpayurlGetRequest::getReceiveUserId() const {
  return receiveUserId;
}
void MicropayOrderConfirmpayurlGetRequest::setReceiveUserId (QString receiveUserId) {
  this->receiveUserId = receiveUserId;
  appParams.insert("receive_user_id", receiveUserId);
}

QString MicropayOrderConfirmpayurlGetRequest::getTransferOutOrderNo() const {
  return transferOutOrderNo;
}
void MicropayOrderConfirmpayurlGetRequest::setTransferOutOrderNo (QString transferOutOrderNo) {
  this->transferOutOrderNo = transferOutOrderNo;
  appParams.insert("transfer_out_order_no", transferOutOrderNo);
}



MicropayOrderConfirmpayurlGetResponse *MicropayOrderConfirmpayurlGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MicropayOrderConfirmpayurlGetResponse *tmpResponse = new MicropayOrderConfirmpayurlGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
