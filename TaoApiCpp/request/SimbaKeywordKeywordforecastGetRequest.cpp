#include <TaoApiCpp/request/SimbaKeywordKeywordforecastGetRequest.h>

QString SimbaKeywordKeywordforecastGetRequest::getApiMethodName() const {
  return "taobao.simba.keyword.keywordforecast.get";
}

qlonglong SimbaKeywordKeywordforecastGetRequest::getBidwordPrice() const {
  return bidwordPrice;
}
void SimbaKeywordKeywordforecastGetRequest::setBidwordPrice (qlonglong bidwordPrice) {
  this->bidwordPrice = bidwordPrice;
  appParams.insert("bidword_price", QString::number(bidwordPrice));
}

qlonglong SimbaKeywordKeywordforecastGetRequest::getKeywordId() const {
  return keywordId;
}
void SimbaKeywordKeywordforecastGetRequest::setKeywordId (qlonglong keywordId) {
  this->keywordId = keywordId;
  appParams.insert("keyword_id", QString::number(keywordId));
}

QString SimbaKeywordKeywordforecastGetRequest::getNick() const {
  return nick;
}
void SimbaKeywordKeywordforecastGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaKeywordKeywordforecastGetResponse *SimbaKeywordKeywordforecastGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordKeywordforecastGetResponse *tmpResponse = new SimbaKeywordKeywordforecastGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
