#include <TaoApiCpp/request/FenxiaoOrderPayRequest.h>

QString FenxiaoOrderPayRequest::getApiMethodName() const {
  return "taobao.fenxiao.order.pay";
}

QString FenxiaoOrderPayRequest::getMessage() const {
  return message;
}
void FenxiaoOrderPayRequest::setMessage (QString message) {
  this->message = message;
  appParams.insert("message", message);
}

qlonglong FenxiaoOrderPayRequest::getPurchaseOrderId() const {
  return purchaseOrderId;
}
void FenxiaoOrderPayRequest::setPurchaseOrderId (qlonglong purchaseOrderId) {
  this->purchaseOrderId = purchaseOrderId;
  appParams.insert("purchase_order_id", QString::number(purchaseOrderId));
}



FenxiaoOrderPayResponse *FenxiaoOrderPayRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoOrderPayResponse *tmpResponse = new FenxiaoOrderPayResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
