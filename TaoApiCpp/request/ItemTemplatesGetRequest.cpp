#include <TaoApiCpp/request/ItemTemplatesGetRequest.h>

QString ItemTemplatesGetRequest::getApiMethodName() const {
  return "taobao.item.templates.get";
}



ItemTemplatesGetResponse *ItemTemplatesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemTemplatesGetResponse *tmpResponse = new ItemTemplatesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
