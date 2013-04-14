#include <TaoApiCpp/request/ScitemGetRequest.h>

QString ScitemGetRequest::getApiMethodName() const {
  return "taobao.scitem.get";
}

qlonglong ScitemGetRequest::getItemId() const {
  return itemId;
}
void ScitemGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}



ScitemGetResponse *ScitemGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ScitemGetResponse *tmpResponse = new ScitemGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
