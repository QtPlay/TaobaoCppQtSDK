#include <TaoApiCpp/request/UdpJuhuasuanGetRequest.h>

QString UdpJuhuasuanGetRequest::getApiMethodName() const {
  return "taobao.udp.juhuasuan.get";
}

QDateTime UdpJuhuasuanGetRequest::getBeginTime() const {
  return beginTime;
}
void UdpJuhuasuanGetRequest::setBeginTime (QDateTime beginTime) {
  this->beginTime = beginTime;
  appParams.insert("begin_time", beginTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong UdpJuhuasuanGetRequest::getCatid() const {
  return catid;
}
void UdpJuhuasuanGetRequest::setCatid (qlonglong catid) {
  this->catid = catid;
  appParams.insert("catid", QString::number(catid));
}

QDateTime UdpJuhuasuanGetRequest::getEndTime() const {
  return endTime;
}
void UdpJuhuasuanGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong UdpJuhuasuanGetRequest::getFields() const {
  return fields;
}
void UdpJuhuasuanGetRequest::setFields (qlonglong fields) {
  this->fields = fields;
  appParams.insert("fields", QString::number(fields));
}

qlonglong UdpJuhuasuanGetRequest::getItemid() const {
  return itemid;
}
void UdpJuhuasuanGetRequest::setItemid (qlonglong itemid) {
  this->itemid = itemid;
  appParams.insert("itemid", QString::number(itemid));
}

QString UdpJuhuasuanGetRequest::getParameters() const {
  return parameters;
}
void UdpJuhuasuanGetRequest::setParameters (QString parameters) {
  this->parameters = parameters;
  appParams.insert("parameters", parameters);
}



UdpJuhuasuanGetResponse *UdpJuhuasuanGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UdpJuhuasuanGetResponse *tmpResponse = new UdpJuhuasuanGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
