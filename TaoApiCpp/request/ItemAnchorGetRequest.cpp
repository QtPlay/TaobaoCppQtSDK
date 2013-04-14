#include <TaoApiCpp/request/ItemAnchorGetRequest.h>

QString ItemAnchorGetRequest::getApiMethodName() const {
  return "taobao.item.anchor.get";
}

qlonglong ItemAnchorGetRequest::getCatId() const {
  return catId;
}
void ItemAnchorGetRequest::setCatId (qlonglong catId) {
  this->catId = catId;
  appParams.insert("cat_id", QString::number(catId));
}

qlonglong ItemAnchorGetRequest::getType() const {
  return type;
}
void ItemAnchorGetRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



ItemAnchorGetResponse *ItemAnchorGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemAnchorGetResponse *tmpResponse = new ItemAnchorGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
