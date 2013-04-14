#include <TaoApiCpp/request/PromotionLimitdiscountGetRequest.h>

QString PromotionLimitdiscountGetRequest::getApiMethodName() const {
  return "taobao.promotion.limitdiscount.get";
}

QDateTime PromotionLimitdiscountGetRequest::getEndTime() const {
  return endTime;
}
void PromotionLimitdiscountGetRequest::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
  appParams.insert("end_time", endTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong PromotionLimitdiscountGetRequest::getLimitDiscountId() const {
  return limitDiscountId;
}
void PromotionLimitdiscountGetRequest::setLimitDiscountId (qlonglong limitDiscountId) {
  this->limitDiscountId = limitDiscountId;
  appParams.insert("limit_discount_id", QString::number(limitDiscountId));
}

qlonglong PromotionLimitdiscountGetRequest::getPageNumber() const {
  return pageNumber;
}
void PromotionLimitdiscountGetRequest::setPageNumber (qlonglong pageNumber) {
  this->pageNumber = pageNumber;
  appParams.insert("page_number", QString::number(pageNumber));
}

QDateTime PromotionLimitdiscountGetRequest::getStartTime() const {
  return startTime;
}
void PromotionLimitdiscountGetRequest::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
  appParams.insert("start_time", startTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString PromotionLimitdiscountGetRequest::getStatus() const {
  return status;
}
void PromotionLimitdiscountGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



PromotionLimitdiscountGetResponse *PromotionLimitdiscountGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PromotionLimitdiscountGetResponse *tmpResponse = new PromotionLimitdiscountGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
