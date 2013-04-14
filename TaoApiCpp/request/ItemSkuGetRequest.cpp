#include <TaoApiCpp/request/ItemSkuGetRequest.h>

QString ItemSkuGetRequest::getApiMethodName() const {
  return "taobao.item.sku.get";
}

QString ItemSkuGetRequest::getFields() const {
  return fields;
}
void ItemSkuGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

QString ItemSkuGetRequest::getNick() const {
  return nick;
}
void ItemSkuGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong ItemSkuGetRequest::getNumIid() const {
  return numIid;
}
void ItemSkuGetRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

qlonglong ItemSkuGetRequest::getSkuId() const {
  return skuId;
}
void ItemSkuGetRequest::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
  appParams.insert("sku_id", QString::number(skuId));
}



ItemSkuGetResponse *ItemSkuGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemSkuGetResponse *tmpResponse = new ItemSkuGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
