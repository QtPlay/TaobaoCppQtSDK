#include <TaoApiCpp/request/MarketingTagsGetRequest.h>

QString MarketingTagsGetRequest::getApiMethodName() const {
  return "taobao.marketing.tags.get";
}

QString MarketingTagsGetRequest::getFields() const {
  return fields;
}
void MarketingTagsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}



MarketingTagsGetResponse *MarketingTagsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MarketingTagsGetResponse *tmpResponse = new MarketingTagsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
