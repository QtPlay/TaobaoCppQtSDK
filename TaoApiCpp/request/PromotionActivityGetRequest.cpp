#include <TaoApiCpp/request/PromotionActivityGetRequest.h>

QString PromotionActivityGetRequest::getApiMethodName() const {
  return "taobao.promotion.activity.get";
}

qlonglong PromotionActivityGetRequest::getActivityId() const {
  return activityId;
}
void PromotionActivityGetRequest::setActivityId (qlonglong activityId) {
  this->activityId = activityId;
  appParams.insert("activity_id", QString::number(activityId));
}



PromotionActivityGetResponse *PromotionActivityGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionActivityGetResponse *tmpResponse = new PromotionActivityGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
