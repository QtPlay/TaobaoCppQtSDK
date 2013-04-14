#include <TaoApiCpp/request/PromotionMealGetRequest.h>

QString PromotionMealGetRequest::getApiMethodName() const {
  return "taobao.promotion.meal.get";
}

qlonglong PromotionMealGetRequest::getMealId() const {
  return mealId;
}
void PromotionMealGetRequest::setMealId (qlonglong mealId) {
  this->mealId = mealId;
  appParams.insert("meal_id", QString::number(mealId));
}

QString PromotionMealGetRequest::getStatus() const {
  return status;
}
void PromotionMealGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



PromotionMealGetResponse *PromotionMealGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionMealGetResponse *tmpResponse = new PromotionMealGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
