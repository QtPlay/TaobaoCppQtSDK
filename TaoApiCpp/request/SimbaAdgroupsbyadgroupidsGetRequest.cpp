#include <TaoApiCpp/request/SimbaAdgroupsbyadgroupidsGetRequest.h>

QString SimbaAdgroupsbyadgroupidsGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroupsbyadgroupids.get";
}

qlonglong SimbaAdgroupsbyadgroupidsGetRequest::getAdgroupIds() const {
  return adgroupIds;
}
void SimbaAdgroupsbyadgroupidsGetRequest::setAdgroupIds (qlonglong adgroupIds) {
  this->adgroupIds = adgroupIds;
  appParams.insert("adgroup_ids", QString::number(adgroupIds));
}

QString SimbaAdgroupsbyadgroupidsGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupsbyadgroupidsGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong SimbaAdgroupsbyadgroupidsGetRequest::getPageNo() const {
  return pageNo;
}
void SimbaAdgroupsbyadgroupidsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong SimbaAdgroupsbyadgroupidsGetRequest::getPageSize() const {
  return pageSize;
}
void SimbaAdgroupsbyadgroupidsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



SimbaAdgroupsbyadgroupidsGetResponse *SimbaAdgroupsbyadgroupidsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupsbyadgroupidsGetResponse *tmpResponse = new SimbaAdgroupsbyadgroupidsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
