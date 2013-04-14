#include <TaoApiCpp/request/SimbaKeywordsvonAddRequest.h>

QString SimbaKeywordsvonAddRequest::getApiMethodName() const {
  return "taobao.simba.keywordsvon.add";
}

qlonglong SimbaKeywordsvonAddRequest::getAdgroupId() const {
  return adgroupId;
}
void SimbaKeywordsvonAddRequest::setAdgroupId (qlonglong adgroupId) {
  this->adgroupId = adgroupId;
  appParams.insert("adgroup_id", QString::number(adgroupId));
}

QString SimbaKeywordsvonAddRequest::getKeywordPrices() const {
  return keywordPrices;
}
void SimbaKeywordsvonAddRequest::setKeywordPrices (QString keywordPrices) {
  this->keywordPrices = keywordPrices;
  appParams.insert("keyword_prices", keywordPrices);
}

QString SimbaKeywordsvonAddRequest::getNick() const {
  return nick;
}
void SimbaKeywordsvonAddRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaKeywordsvonAddResponse *SimbaKeywordsvonAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordsvonAddResponse *tmpResponse = new SimbaKeywordsvonAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
