#include <TaoApiCpp/request/ScitemMapAddRequest.h>

QString ScitemMapAddRequest::getApiMethodName() const {
  return "taobao.scitem.map.add";
}

qlonglong ScitemMapAddRequest::getItemId() const {
  return itemId;
}
void ScitemMapAddRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}

bool ScitemMapAddRequest::getNeedCheck() const {
  return needCheck;
}
void ScitemMapAddRequest::setNeedCheck (bool needCheck) {
  this->needCheck = needCheck;
  appParams.insert("need_check", needCheck? "true": "false");
}

QString ScitemMapAddRequest::getOuterCode() const {
  return outerCode;
}
void ScitemMapAddRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong ScitemMapAddRequest::getScItemId() const {
  return scItemId;
}
void ScitemMapAddRequest::setScItemId (qlonglong scItemId) {
  this->scItemId = scItemId;
  appParams.insert("sc_item_id", QString::number(scItemId));
}

qlonglong ScitemMapAddRequest::getSkuId() const {
  return skuId;
}
void ScitemMapAddRequest::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
  appParams.insert("sku_id", QString::number(skuId));
}



ScitemMapAddResponse *ScitemMapAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ScitemMapAddResponse *tmpResponse = new ScitemMapAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
