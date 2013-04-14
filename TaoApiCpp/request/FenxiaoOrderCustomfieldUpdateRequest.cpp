#include <TaoApiCpp/request/FenxiaoOrderCustomfieldUpdateRequest.h>

QString FenxiaoOrderCustomfieldUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.order.customfield.update";
}

QString FenxiaoOrderCustomfieldUpdateRequest::getIsvCustomKey() const {
  return isvCustomKey;
}
void FenxiaoOrderCustomfieldUpdateRequest::setIsvCustomKey (QString isvCustomKey) {
  this->isvCustomKey = isvCustomKey;
  appParams.insert("isv_custom_key", isvCustomKey);
}

QString FenxiaoOrderCustomfieldUpdateRequest::getIsvCustomValue() const {
  return isvCustomValue;
}
void FenxiaoOrderCustomfieldUpdateRequest::setIsvCustomValue (QString isvCustomValue) {
  this->isvCustomValue = isvCustomValue;
  appParams.insert("isv_custom_value", isvCustomValue);
}

qlonglong FenxiaoOrderCustomfieldUpdateRequest::getPurchaseOrderId() const {
  return purchaseOrderId;
}
void FenxiaoOrderCustomfieldUpdateRequest::setPurchaseOrderId (qlonglong purchaseOrderId) {
  this->purchaseOrderId = purchaseOrderId;
  appParams.insert("purchase_order_id", QString::number(purchaseOrderId));
}



FenxiaoOrderCustomfieldUpdateResponse *FenxiaoOrderCustomfieldUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoOrderCustomfieldUpdateResponse *tmpResponse = new FenxiaoOrderCustomfieldUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
