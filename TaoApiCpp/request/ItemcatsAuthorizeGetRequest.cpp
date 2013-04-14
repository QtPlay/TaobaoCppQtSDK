#include <TaoApiCpp/request/ItemcatsAuthorizeGetRequest.h>

QString ItemcatsAuthorizeGetRequest::getApiMethodName() const {
  return "taobao.itemcats.authorize.get";
}

QString ItemcatsAuthorizeGetRequest::getFields() const {
  return fields;
}
void ItemcatsAuthorizeGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



ItemcatsAuthorizeGetResponse *ItemcatsAuthorizeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemcatsAuthorizeGetResponse *tmpResponse = new ItemcatsAuthorizeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
