#include <TaoApiCpp/request/SubuserDutysGetRequest.h>

QString SubuserDutysGetRequest::getApiMethodName() const {
  return "taobao.subuser.dutys.get";
}

QString SubuserDutysGetRequest::getUserNick() const {
  return userNick;
}
void SubuserDutysGetRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubuserDutysGetResponse *SubuserDutysGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserDutysGetResponse *tmpResponse = new SubuserDutysGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
