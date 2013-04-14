#include <TaoApiCpp/request/SimbaAdgroupOnlineitemsvonGetRequest.h>

QString SimbaAdgroupOnlineitemsvonGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.onlineitemsvon.get";
}

QString SimbaAdgroupOnlineitemsvonGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupOnlineitemsvonGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

bool SimbaAdgroupOnlineitemsvonGetRequest::getOrderBy() const {
  return orderBy;
}
void SimbaAdgroupOnlineitemsvonGetRequest::setOrderBy (bool orderBy) {
  this->orderBy = orderBy;
  appParams.insert("order_by", orderBy? "true": "false");
}

QString SimbaAdgroupOnlineitemsvonGetRequest::getOrderField() const {
  return orderField;
}
void SimbaAdgroupOnlineitemsvonGetRequest::setOrderField (QString orderField) {
  this->orderField = orderField;
  appParams.insert("order_field", orderField);
}

qlonglong SimbaAdgroupOnlineitemsvonGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupOnlineitemsvonGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupOnlineitemsvonGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupOnlineitemsvonGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



SimbaAdgroupOnlineitemsvonGetResponse *SimbaAdgroupOnlineitemsvonGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupOnlineitemsvonGetResponse *tmpResponse = new SimbaAdgroupOnlineitemsvonGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
