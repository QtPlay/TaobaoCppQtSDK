#include <TaoApiCpp/request/FenxiaoOrderConfirmPaidRequest.h>

QString FenxiaoOrderConfirmPaidRequest::getApiMethodName() const {
  return "taobao.fenxiao.order.confirm.paid";
}

QString FenxiaoOrderConfirmPaidRequest::getConfirmRemark() const {
  return confirmRemark;
}
void FenxiaoOrderConfirmPaidRequest::setConfirmRemark (QString confirmRemark) {
  this->confirmRemark = confirmRemark;
  appParams.insert("confirm_remark", confirmRemark);
}

qlonglong FenxiaoOrderConfirmPaidRequest::getPurchaseOrderId() const {
  return purchaseOrderId;
}
void FenxiaoOrderConfirmPaidRequest::setPurchaseOrderId (qlonglong purchaseOrderId) {
  this->purchaseOrderId = purchaseOrderId;
  appParams.insert("purchase_order_id", QString::number(purchaseOrderId));
}



FenxiaoOrderConfirmPaidResponse *FenxiaoOrderConfirmPaidRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoOrderConfirmPaidResponse *tmpResponse = new FenxiaoOrderConfirmPaidResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
