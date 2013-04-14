#include <TaoApiCpp/request/ItemQuantityUpdateRequest.h>

QString ItemQuantityUpdateRequest::getApiMethodName() const {
  return "taobao.item.quantity.update";
}

qlonglong ItemQuantityUpdateRequest::getNumIid() const {
  return numIid;
}
void ItemQuantityUpdateRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

QString ItemQuantityUpdateRequest::getOuterId() const {
  return outerId;
}
void ItemQuantityUpdateRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

qlonglong ItemQuantityUpdateRequest::getQuantity() const {
  return quantity;
}
void ItemQuantityUpdateRequest::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
  appParams.insert("quantity", QString::number(quantity));
}

qlonglong ItemQuantityUpdateRequest::getSkuId() const {
  return skuId;
}
void ItemQuantityUpdateRequest::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
  appParams.insert("sku_id", QString::number(skuId));
}

qlonglong ItemQuantityUpdateRequest::getType() const {
  return type;
}
void ItemQuantityUpdateRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



ItemQuantityUpdateResponse *ItemQuantityUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemQuantityUpdateResponse *tmpResponse = new ItemQuantityUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
