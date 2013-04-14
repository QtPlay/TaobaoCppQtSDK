#include <TaoApiCpp/request/UserContractGetRequest.h>

QString UserContractGetRequest::getApiMethodName() const {
  return "alipay.user.contract.get";
}

QString UserContractGetRequest::getSubscriberUserId() const {
  return subscriberUserId;
}
void UserContractGetRequest::setSubscriberUserId (QString subscriberUserId) {
  this->subscriberUserId = subscriberUserId;
  appParams.insert("subscriber_user_id", subscriberUserId);
}



UserContractGetResponse *UserContractGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UserContractGetResponse *tmpResponse = new UserContractGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
