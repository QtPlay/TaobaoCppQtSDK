#include <TaoApiCpp/request/UserSellerGetRequest.h>

QString UserSellerGetRequest::getApiMethodName() const {
  return "taobao.user.seller.get";
}

QString UserSellerGetRequest::getFields() const {
  return fields;
}
void UserSellerGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



UserSellerGetResponse *UserSellerGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UserSellerGetResponse *tmpResponse = new UserSellerGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
