#include <TaoApiCpp/request/MarketingPromotionKfcRequest.h>

QString MarketingPromotionKfcRequest::getApiMethodName() const {
  return "taobao.marketing.promotion.kfc";
}

QString MarketingPromotionKfcRequest::getPromotionDesc() const {
  return promotionDesc;
}
void MarketingPromotionKfcRequest::setPromotionDesc (QString promotionDesc) {
  this->promotionDesc = promotionDesc;
  appParams.insert("promotion_desc", promotionDesc);
}

QString MarketingPromotionKfcRequest::getPromotionTitle() const {
  return promotionTitle;
}
void MarketingPromotionKfcRequest::setPromotionTitle (QString promotionTitle) {
  this->promotionTitle = promotionTitle;
  appParams.insert("promotion_title", promotionTitle);
}



MarketingPromotionKfcResponse *MarketingPromotionKfcRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  MarketingPromotionKfcResponse *tmpResponse = new MarketingPromotionKfcResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
