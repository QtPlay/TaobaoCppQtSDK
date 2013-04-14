#include <TaoApiCpp/request/PromotionActivityDeleteRequest.h>

QString PromotionActivityDeleteRequest::getApiMethodName() const {
  return "taobao.promotion.activity.delete";
}

qlonglong PromotionActivityDeleteRequest::getActivityId() const {
  return activityId;
}
void PromotionActivityDeleteRequest::setActivityId (qlonglong activityId) {
  this->activityId = activityId;
  appParams.insert("activity_id", QString::number(activityId));
}



PromotionActivityDeleteResponse *PromotionActivityDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionActivityDeleteResponse *tmpResponse = new PromotionActivityDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
