#include <TaoApiCpp/request/FenxiaoOrderMessageAddRequest.h>

QString FenxiaoOrderMessageAddRequest::getApiMethodName() const {
  return "taobao.fenxiao.order.message.add";
}

QString FenxiaoOrderMessageAddRequest::getMessage() const {
  return message;
}
void FenxiaoOrderMessageAddRequest::setMessage (QString message) {
  this->message = message;
  appParams.insert("message", message);
}

qlonglong FenxiaoOrderMessageAddRequest::getPurchaseOrderId() const {
  return purchaseOrderId;
}
void FenxiaoOrderMessageAddRequest::setPurchaseOrderId (qlonglong purchaseOrderId) {
  this->purchaseOrderId = purchaseOrderId;
  appParams.insert("purchase_order_id", QString::number(purchaseOrderId));
}



FenxiaoOrderMessageAddResponse *FenxiaoOrderMessageAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoOrderMessageAddResponse *tmpResponse = new FenxiaoOrderMessageAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
