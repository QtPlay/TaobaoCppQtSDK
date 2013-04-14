#include <TaoApiCpp/request/PromotionActivityCancelRequest.h>

QString PromotionActivityCancelRequest::getApiMethodName() const {
  return "taobao.promotion.activity.cancel";
}

qlonglong PromotionActivityCancelRequest::getActivityId() const {
  return activityId;
}
void PromotionActivityCancelRequest::setActivityId (qlonglong activityId) {
  this->activityId = activityId;
  appParams.insert("activity_id", QString::number(activityId));
}



PromotionActivityCancelResponse *PromotionActivityCancelRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionActivityCancelResponse *tmpResponse = new PromotionActivityCancelResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
