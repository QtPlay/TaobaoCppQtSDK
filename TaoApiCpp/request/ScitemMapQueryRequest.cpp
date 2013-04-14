#include <TaoApiCpp/request/ScitemMapQueryRequest.h>

QString ScitemMapQueryRequest::getApiMethodName() const {
  return "taobao.scitem.map.query";
}

qlonglong ScitemMapQueryRequest::getItemId() const {
  return itemId;
}
void ScitemMapQueryRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

qlonglong ScitemMapQueryRequest::getSkuId() const {
  return skuId;
}
void ScitemMapQueryRequest::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
  appParams.insert("sku_id", QString::number(skuId));
}



ScitemMapQueryResponse *ScitemMapQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ScitemMapQueryResponse *tmpResponse = new ScitemMapQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
