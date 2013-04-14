#include <TaoApiCpp/request/WlbOutInventoryChangeNotifyRequest.h>

QString WlbOutInventoryChangeNotifyRequest::getApiMethodName() const {
  return "taobao.wlb.out.inventory.change.notify";
}

qlonglong WlbOutInventoryChangeNotifyRequest::getChangeCount() const {
  return changeCount;
}
void WlbOutInventoryChangeNotifyRequest::setChangeCount (qlonglong changeCount) {
  this->changeCount = changeCount;
  appParams.insert("change_count", QString::number(changeCount));
}

qlonglong WlbOutInventoryChangeNotifyRequest::getItemId() const {
  return itemId;
}
void WlbOutInventoryChangeNotifyRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

QString WlbOutInventoryChangeNotifyRequest::getOpType() const {
  return opType;
}
void WlbOutInventoryChangeNotifyRequest::setOpType (QString opType) {
  this->opType = opType;
  appParams.insert("op_type", opType);
}

QString WlbOutInventoryChangeNotifyRequest::getOrderSourceCode() const {
  return orderSourceCode;
}
void WlbOutInventoryChangeNotifyRequest::setOrderSourceCode (QString orderSourceCode) {
  this->orderSourceCode = orderSourceCode;
  appParams.insert("order_source_code", orderSourceCode);
}

QString WlbOutInventoryChangeNotifyRequest::getOutBizCode() const {
  return outBizCode;
}
void WlbOutInventoryChangeNotifyRequest::setOutBizCode (QString outBizCode) {
  this->outBizCode = outBizCode;
  appParams.insert("out_biz_code", outBizCode);
}

qlonglong WlbOutInventoryChangeNotifyRequest::getResultCount() const {
  return resultCount;
}
void WlbOutInventoryChangeNotifyRequest::setResultCount (qlonglong resultCount) {
  this->resultCount = resultCount;
  appParams.insert("result_count", QString::number(resultCount));
}

QString WlbOutInventoryChangeNotifyRequest::getSource() const {
  return source;
}
void WlbOutInventoryChangeNotifyRequest::setSource (QString source) {
  this->source = source;
  appParams.insert("source", source);
}

QString WlbOutInventoryChangeNotifyRequest::getStoreCode() const {
  return storeCode;
}
void WlbOutInventoryChangeNotifyRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}

QString WlbOutInventoryChangeNotifyRequest::getType() const {
  return type;
}
void WlbOutInventoryChangeNotifyRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



WlbOutInventoryChangeNotifyResponse *WlbOutInventoryChangeNotifyRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbOutInventoryChangeNotifyResponse *tmpResponse = new WlbOutInventoryChangeNotifyResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
