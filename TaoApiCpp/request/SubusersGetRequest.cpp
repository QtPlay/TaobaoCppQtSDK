#include <TaoApiCpp/request/SubusersGetRequest.h>

QString SubusersGetRequest::getApiMethodName() const {
  return "taobao.subusers.get";
}

QString SubusersGetRequest::getUserNick() const {
  return userNick;
}
void SubusersGetRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



SubusersGetResponse *SubusersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubusersGetResponse *tmpResponse = new SubusersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
