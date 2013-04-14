#include <TaoApiCpp/request/LogisticsOrderstorePushRequest.h>

QString LogisticsOrderstorePushRequest::getApiMethodName() const {
  return "taobao.logistics.orderstore.push";
}

QDateTime LogisticsOrderstorePushRequest::getOccureTime() const {
  return occureTime;
}
void LogisticsOrderstorePushRequest::setOccureTime (QDateTime occureTime) {
  this->occureTime = occureTime;
  appParams.insert("occure_time", occureTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString LogisticsOrderstorePushRequest::getOperateDetail() const {
  return operateDetail;
}
void LogisticsOrderstorePushRequest::setOperateDetail (QString operateDetail) {
  this->operateDetail = operateDetail;
  appParams.insert("operate_detail", operateDetail);
}

QString LogisticsOrderstorePushRequest::getOperatorContact() const {
  return operatorContact;
}
void LogisticsOrderstorePushRequest::setOperatorContact (QString operatorContact) {
  this->operatorContact = operatorContact;
  appParams.insert("operator_contact", operatorContact);
}

QString LogisticsOrderstorePushRequest::getOperatorName() const {
  return operatorName;
}
void LogisticsOrderstorePushRequest::setOperatorName (QString operatorName) {
  this->operatorName = operatorName;
  appParams.insert("operator_name", operatorName);
}

qlonglong LogisticsOrderstorePushRequest::getTradeId() const {
  return tradeId;
}
void LogisticsOrderstorePushRequest::setTradeId (qlonglong tradeId) {
  this->tradeId = tradeId;
  appParams.insert("trade_id", QString::number(tradeId));
}



LogisticsOrderstorePushResponse *LogisticsOrderstorePushRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsOrderstorePushResponse *tmpResponse = new LogisticsOrderstorePushResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
