#include <TaoApiCpp/request/SimbaAdgroupCatmatchforecastGetRequest.h>

QString SimbaAdgroupCatmatchforecastGetRequest::getApiMethodName() const {
  return "taobao.simba.adgroup.catmatchforecast.get";
}

qlonglong SimbaAdgroupCatmatchforecastGetRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaAdgroupCatmatchforecastGetRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

qlonglong SimbaAdgroupCatmatchforecastGetRequest::getCatmatchPrice() const {
  return catmatchPrice;
}
void SimbaAdgroupCatmatchforecastGetRequest::setCatmatchPrice (qlonglong catmatchPrice) {
  this->catmatchPrice = catmatchPrice;
  appParams.insert("catmatch_price", QString::number(catmatchPrice));
}

QString SimbaAdgroupCatmatchforecastGetRequest::getNick() const {
  return nick;
}
void SimbaAdgroupCatmatchforecastGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaAdgroupCatmatchforecastGetResponse *SimbaAdgroupCatmatchforecastGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaAdgroupCatmatchforecastGetResponse *tmpResponse = new SimbaAdgroupCatmatchforecastGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
