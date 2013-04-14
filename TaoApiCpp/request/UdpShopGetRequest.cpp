#include <TaoApiCpp/request/UdpShopGetRequest.h>

QString UdpShopGetRequest::getApiMethodName() const {
  return "taobao.udp.shop.get";
}

qlonglong UdpShopGetRequest::getArea() const {
  return area;
}
void UdpShopGetRequest::setArea (qlonglong area) {
  this->area = area;
  appParams.insert("area", QString::number(area));
}

QDateTime UdpShopGetRequest::getBeginTime() const {
  return beginTime;
}
void UdpShopGetRequest::setBeginTime (QDateTime beginTime) {
  this->beginTime = beginTime;
  appParams.insert("begin_time", beginTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime UdpShopGetRequest::getEndTime() const {
  return endTime;
}
void UdpShopGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong UdpShopGetRequest::getFields() const {
  return fields;
}
void UdpShopGetRequest::setFields (qlonglong fields) {
  this->fields = fields;
  appParams.insert("fields", QString::number(fields));
}

QString UdpShopGetRequest::getParameters() const {
  return parameters;
}
void UdpShopGetRequest::setParameters (QString parameters) {
  this->parameters = parameters;
  appParams.insert("parameters", parameters);
}



UdpShopGetResponse *UdpShopGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UdpShopGetResponse *tmpResponse = new UdpShopGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
