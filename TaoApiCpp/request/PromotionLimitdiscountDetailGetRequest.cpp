#include <TaoApiCpp/request/PromotionLimitdiscountDetailGetRequest.h>

QString PromotionLimitdiscountDetailGetRequest::getApiMethodName() const {
  return "taobao.promotion.limitdiscount.detail.get";
}

qlonglong PromotionLimitdiscountDetailGetRequest::getLimitDiscountId() const {
  return limitDiscountId;
}
void PromotionLimitdiscountDetailGetRequest::setLimitDiscountId (qlonglong limitDiscountId) {
  this->limitDiscountId = limitDiscountId;
  appParams.insert("limit_discount_id", QString::number(limitDiscountId));
}



PromotionLimitdiscountDetailGetResponse *PromotionLimitdiscountDetailGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionLimitdiscountDetailGetResponse *tmpResponse = new PromotionLimitdiscountDetailGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
