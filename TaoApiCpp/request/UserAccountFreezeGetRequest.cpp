#include <TaoApiCpp/request/UserAccountFreezeGetRequest.h>

QString UserAccountFreezeGetRequest::getApiMethodName() const {
  return "alipay.user.account.freeze.get";
}

QString UserAccountFreezeGetRequest::getFreezeType() const {
  return freezeType;
}
void UserAccountFreezeGetRequest::setFreezeType (QString freezeType) {
  this->freezeType = freezeType;
  appParams.insert("freeze_type", freezeType);
}



UserAccountFreezeGetResponse *UserAccountFreezeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UserAccountFreezeGetResponse *tmpResponse = new UserAccountFreezeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
