#include <TaoApiCpp/request/FenxiaoOrderCloseRequest.h>

QString FenxiaoOrderCloseRequest::getApiMethodName() const {
  return "taobao.fenxiao.order.close";
}

QString FenxiaoOrderCloseRequest::getMessage() const {
  return message;
}
void FenxiaoOrderCloseRequest::setMessage (QString message) {
  this->message = message;
  appParams.insert("message", message);
}

qlonglong FenxiaoOrderCloseRequest::getPurchaseOrderId() const {
  return purchaseOrderId;
}
void FenxiaoOrderCloseRequest::setPurchaseOrderId (qlonglong purchaseOrderId) {
  this->purchaseOrderId = purchaseOrderId;
  appParams.insert("purchase_order_id", QString::number(purchaseOrderId));
}

QString FenxiaoOrderCloseRequest::getSubOrderIds() const {
  return subOrderIds;
}
void FenxiaoOrderCloseRequest::setSubOrderIds (QString subOrderIds) {
  this->subOrderIds = subOrderIds;
  appParams.insert("sub_order_ids", subOrderIds);
}



FenxiaoOrderCloseResponse *FenxiaoOrderCloseRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoOrderCloseResponse *tmpResponse = new FenxiaoOrderCloseResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
