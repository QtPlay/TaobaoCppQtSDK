#include <TaoApiCpp/request/TradeOrderskuUpdateRequest.h>

QString TradeOrderskuUpdateRequest::getApiMethodName() const {
  return "taobao.trade.ordersku.update";
}

qlonglong TradeOrderskuUpdateRequest::getOid() const {
  return oid;
}
void TradeOrderskuUpdateRequest::setOid (qlonglong oid) {
  this->oid = oid;
  appParams.insert("oid", QString::number(oid));
}

qlonglong TradeOrderskuUpdateRequest::getSkuId() const {
  return skuId;
}
void TradeOrderskuUpdateRequest::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
  appParams.insert("sku_id", QString::number(skuId));
}

QString TradeOrderskuUpdateRequest::getSkuProps() const {
  return skuProps;
}
void TradeOrderskuUpdateRequest::setSkuProps (QString skuProps) {
  this->skuProps = skuProps;
  appParams.insert("sku_props", skuProps);
}



TradeOrderskuUpdateResponse *TradeOrderskuUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradeOrderskuUpdateResponse *tmpResponse = new TradeOrderskuUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
