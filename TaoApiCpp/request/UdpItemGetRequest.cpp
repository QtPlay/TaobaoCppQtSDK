#include <TaoApiCpp/request/UdpItemGetRequest.h>

QString UdpItemGetRequest::getApiMethodName() const {
  return "taobao.udp.item.get";
}

qlonglong UdpItemGetRequest::getArea() const {
  return area;
}
void UdpItemGetRequest::setArea (qlonglong area) {
  this->area = area;
  appParams.insert("area", QString::number(area));
}

QDateTime UdpItemGetRequest::getBeginTime() const {
  return beginTime;
}
void UdpItemGetRequest::setBeginTime (QDateTime beginTime) {
  this->beginTime = beginTime;
  appParams.insert("begin_time", beginTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime UdpItemGetRequest::getEndTime() const {
  return endTime;
}
void UdpItemGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong UdpItemGetRequest::getFields() const {
  return fields;
}
void UdpItemGetRequest::setFields (qlonglong fields) {
  this->fields = fields;
  appParams.insert("fields", QString::number(fields));
}

qlonglong UdpItemGetRequest::getItemid() const {
  return itemid;
}
void UdpItemGetRequest::setItemid (qlonglong itemid) {
  this->itemid = itemid;
  appParams.insert("itemid", QString::number(itemid));
}

qlonglong UdpItemGetRequest::getItems() const {
  return items;
}
void UdpItemGetRequest::setItems (qlonglong items) {
  this->items = items;
  appParams.insert("items", QString::number(items));
}

QString UdpItemGetRequest::getOrderBy() const {
  return orderBy;
}
void UdpItemGetRequest::setOrderBy (QString orderBy) {
  this->orderBy = orderBy;
  appParams.insert("order_by", orderBy);
}

QString UdpItemGetRequest::getOrderRule() const {
  return orderRule;
}
void UdpItemGetRequest::setOrderRule (QString orderRule) {
  this->orderRule = orderRule;
  appParams.insert("order_rule", orderRule);
}

qlonglong UdpItemGetRequest::getPageNo() const {
  return pageNo;
}
void UdpItemGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong UdpItemGetRequest::getPageSize() const {
  return pageSize;
}
void UdpItemGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString UdpItemGetRequest::getParameters() const {
  return parameters;
}
void UdpItemGetRequest::setParameters (QString parameters) {
  this->parameters = parameters;
  appParams.insert("parameters", parameters);
}

qlonglong UdpItemGetRequest::getSource() const {
  return source;
}
void UdpItemGetRequest::setSource (qlonglong source) {
  this->source = source;
  appParams.insert("source", QString::number(source));
}



UdpItemGetResponse *UdpItemGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UdpItemGetResponse *tmpResponse = new UdpItemGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
