#include <TaoApiCpp/request/LogisticsPartnersGetRequest.h>

QString LogisticsPartnersGetRequest::getApiMethodName() const {
  return "taobao.logistics.partners.get";
}

QString LogisticsPartnersGetRequest::getGoodsValue() const {
  return goodsValue;
}
void LogisticsPartnersGetRequest::setGoodsValue (QString goodsValue) {
  this->goodsValue = goodsValue;
  appParams.insert("goods_value", goodsValue);
}

bool LogisticsPartnersGetRequest::getIsNeedCarriage() const {
  return isNeedCarriage;
}
void LogisticsPartnersGetRequest::setIsNeedCarriage (bool isNeedCarriage) {
  this->isNeedCarriage = isNeedCarriage;
  appParams.insert("is_need_carriage", isNeedCarriage? "true": "false");
}

QString LogisticsPartnersGetRequest::getServiceType() const {
  return serviceType;
}
void LogisticsPartnersGetRequest::setServiceType (QString serviceType) {
  this->serviceType = serviceType;
  appParams.insert("service_type", serviceType);
}

QString LogisticsPartnersGetRequest::getSourceId() const {
  return sourceId;
}
void LogisticsPartnersGetRequest::setSourceId (QString sourceId) {
  this->sourceId = sourceId;
  appParams.insert("source_id", sourceId);
}

QString LogisticsPartnersGetRequest::getTargetId() const {
  return targetId;
}
void LogisticsPartnersGetRequest::setTargetId (QString targetId) {
  this->targetId = targetId;
  appParams.insert("target_id", targetId);
}



LogisticsPartnersGetResponse *LogisticsPartnersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsPartnersGetResponse *tmpResponse = new LogisticsPartnersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
