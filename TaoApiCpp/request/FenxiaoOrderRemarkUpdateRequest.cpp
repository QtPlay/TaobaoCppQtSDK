#include <TaoApiCpp/request/FenxiaoOrderRemarkUpdateRequest.h>

QString FenxiaoOrderRemarkUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.order.remark.update";
}

qlonglong FenxiaoOrderRemarkUpdateRequest::getPurchaseOrderId() const {
  return purchaseOrderId;
}
void FenxiaoOrderRemarkUpdateRequest::setPurchaseOrderId (qlonglong purchaseOrderId) {
  this->purchaseOrderId = purchaseOrderId;
  appParams.insert("purchase_order_id", QString::number(purchaseOrderId));
}

QString FenxiaoOrderRemarkUpdateRequest::getSupplierMemo() const {
  return supplierMemo;
}
void FenxiaoOrderRemarkUpdateRequest::setSupplierMemo (QString supplierMemo) {
  this->supplierMemo = supplierMemo;
  appParams.insert("supplier_memo", supplierMemo);
}

qlonglong FenxiaoOrderRemarkUpdateRequest::getSupplierMemoFlag() const {
  return supplierMemoFlag;
}
void FenxiaoOrderRemarkUpdateRequest::setSupplierMemoFlag (qlonglong supplierMemoFlag) {
  this->supplierMemoFlag = supplierMemoFlag;
  appParams.insert("supplier_memo_flag", QString::number(supplierMemoFlag));
}



FenxiaoOrderRemarkUpdateResponse *FenxiaoOrderRemarkUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoOrderRemarkUpdateResponse *tmpResponse = new FenxiaoOrderRemarkUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
