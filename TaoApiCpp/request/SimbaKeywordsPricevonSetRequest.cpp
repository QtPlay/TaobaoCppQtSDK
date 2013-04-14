#include <TaoApiCpp/request/SimbaKeywordsPricevonSetRequest.h>

QString SimbaKeywordsPricevonSetRequest::getApiMethodName() const {
  return "taobao.simba.keywords.pricevon.set";
}

QString SimbaKeywordsPricevonSetRequest::getKeywordidPrices() const {
  return keywordidPrices;
}
void SimbaKeywordsPricevonSetRequest::setKeywordidPrices (QString keywordidPrices) {
  this->keywordidPrices = keywordidPrices;
  appParams.insert("keywordid_prices", keywordidPrices);
}

QString SimbaKeywordsPricevonSetRequest::getNick() const {
  return nick;
}
void SimbaKeywordsPricevonSetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaKeywordsPricevonSetResponse *SimbaKeywordsPricevonSetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaKeywordsPricevonSetResponse *tmpResponse = new SimbaKeywordsPricevonSetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
