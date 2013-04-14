#include <TaoApiCpp/request/UserBuyerGetRequest.h>

QString UserBuyerGetRequest::getApiMethodName() const {
  return "taobao.user.buyer.get";
}

QString UserBuyerGetRequest::getFields() const {
  return fields;
}
void UserBuyerGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



UserBuyerGetResponse *UserBuyerGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UserBuyerGetResponse *tmpResponse = new UserBuyerGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
