#include <TaoApiCpp/request/UmpPromotionGetRequest.h>

QString UmpPromotionGetRequest::getApiMethodName() const {
  return "taobao.ump.promotion.get";
}

QString UmpPromotionGetRequest::getChannelKey() const {
  return channelKey;
}
void UmpPromotionGetRequest::setChannelKey (QString channelKey) {
  this->channelKey = channelKey;
  appParams.insert("channel_key", channelKey);
}

qlonglong UmpPromotionGetRequest::getItemId() const {
  return itemId;
}
void UmpPromotionGetRequest::setItemId (qlonglong itemId) {
  this->itemId = itemId;
  appParams.insert("item_id", QString::number(itemId));
}



UmpPromotionGetResponse *UmpPromotionGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpPromotionGetResponse *tmpResponse = new UmpPromotionGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
