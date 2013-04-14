#include <TaoApiCpp/domain/Activity.h>
qlonglong Activity::getActivityId() const {
  return activityId;
}
void Activity::setActivityId (qlonglong activityId) {
  this->activityId = activityId;
}

QString Activity::getActivityUrl() const {
  return activityUrl;
}
void Activity::setActivityUrl (QString activityUrl) {
  this->activityUrl = activityUrl;
}

qlonglong Activity::getAppliedCount() const {
  return appliedCount;
}
void Activity::setAppliedCount (qlonglong appliedCount) {
  this->appliedCount = appliedCount;
}

qlonglong Activity::getCouponId() const {
  return couponId;
}
void Activity::setCouponId (qlonglong couponId) {
  this->couponId = couponId;
}

QString Activity::getCreateUser() const {
  return createUser;
}
void Activity::setCreateUser (QString createUser) {
  this->createUser = createUser;
}

qlonglong Activity::getPersonLimitCount() const {
  return personLimitCount;
}
void Activity::setPersonLimitCount (qlonglong personLimitCount) {
  this->personLimitCount = personLimitCount;
}

QString Activity::getStatus() const {
  return status;
}
void Activity::setStatus (QString status) {
  this->status = status;
}

qlonglong Activity::getTotalCount() const {
  return totalCount;
}
void Activity::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}


void Activity::parseResponse() {
  if (responseParser->hasName("activity_id")) {
  activityId = responseParser->getNumByName("activity_id");
  }
  if (responseParser->hasName("activity_url")) {
  activityUrl = responseParser->getStrByName("activity_url");
  }
  if (responseParser->hasName("applied_count")) {
  appliedCount = responseParser->getNumByName("applied_count");
  }
  if (responseParser->hasName("coupon_id")) {
  couponId = responseParser->getNumByName("coupon_id");
  }
  if (responseParser->hasName("create_user")) {
  createUser = responseParser->getStrByName("create_user");
  }
  if (responseParser->hasName("person_limit_count")) {
  personLimitCount = responseParser->getNumByName("person_limit_count");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

