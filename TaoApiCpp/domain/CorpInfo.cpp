#include <TaoApiCpp/domain/CorpInfo.h>
QString CorpInfo::getApplyName() const {
  return applyName;
}
void CorpInfo::setApplyName (QString applyName) {
  this->applyName = applyName;
}

QString CorpInfo::getApplyNo() const {
  return applyNo;
}
void CorpInfo::setApplyNo (QString applyNo) {
  this->applyNo = applyNo;
}

QDateTime CorpInfo::getApplyTime() const {
  return applyTime;
}
void CorpInfo::setApplyTime (QDateTime applyTime) {
  this->applyTime = applyTime;
}

QString CorpInfo::getCorprationId() const {
  return corprationId;
}
void CorpInfo::setCorprationId (QString corprationId) {
  this->corprationId = corprationId;
}

QString CorpInfo::getCostCenter() const {
  return costCenter;
}
void CorpInfo::setCostCenter (QString costCenter) {
  this->costCenter = costCenter;
}

QString CorpInfo::getCostCenterCode() const {
  return costCenterCode;
}
void CorpInfo::setCostCenterCode (QString costCenterCode) {
  this->costCenterCode = costCenterCode;
}

QString CorpInfo::getCostOu() const {
  return costOu;
}
void CorpInfo::setCostOu (QString costOu) {
  this->costOu = costOu;
}

QString CorpInfo::getExtra() const {
  return extra;
}
void CorpInfo::setExtra (QString extra) {
  this->extra = extra;
}

QString CorpInfo::getFormNo() const {
  return formNo;
}
void CorpInfo::setFormNo (QString formNo) {
  this->formNo = formNo;
}

QString CorpInfo::getFormStatus() const {
  return formStatus;
}
void CorpInfo::setFormStatus (QString formStatus) {
  this->formStatus = formStatus;
}

QString CorpInfo::getReceiptsStatus() const {
  return receiptsStatus;
}
void CorpInfo::setReceiptsStatus (QString receiptsStatus) {
  this->receiptsStatus = receiptsStatus;
}

QString CorpInfo::getTripPersonName() const {
  return tripPersonName;
}
void CorpInfo::setTripPersonName (QString tripPersonName) {
  this->tripPersonName = tripPersonName;
}

QString CorpInfo::getTripPersonNo() const {
  return tripPersonNo;
}
void CorpInfo::setTripPersonNo (QString tripPersonNo) {
  this->tripPersonNo = tripPersonNo;
}

QString CorpInfo::getWorkSpace() const {
  return workSpace;
}
void CorpInfo::setWorkSpace (QString workSpace) {
  this->workSpace = workSpace;
}


void CorpInfo::parseResponse() {
  if (responseParser->hasName("apply_name")) {
  applyName = responseParser->getStrByName("apply_name");
  }
  if (responseParser->hasName("apply_no")) {
  applyNo = responseParser->getStrByName("apply_no");
  }
  if (responseParser->hasName("apply_time")) {
  applyTime = responseParser->getDateByName("apply_time");
  }
  if (responseParser->hasName("corpration_id")) {
  corprationId = responseParser->getStrByName("corpration_id");
  }
  if (responseParser->hasName("cost_center")) {
  costCenter = responseParser->getStrByName("cost_center");
  }
  if (responseParser->hasName("cost_center_code")) {
  costCenterCode = responseParser->getStrByName("cost_center_code");
  }
  if (responseParser->hasName("cost_ou")) {
  costOu = responseParser->getStrByName("cost_ou");
  }
  if (responseParser->hasName("extra")) {
  extra = responseParser->getStrByName("extra");
  }
  if (responseParser->hasName("form_no")) {
  formNo = responseParser->getStrByName("form_no");
  }
  if (responseParser->hasName("form_status")) {
  formStatus = responseParser->getStrByName("form_status");
  }
  if (responseParser->hasName("receipts_status")) {
  receiptsStatus = responseParser->getStrByName("receipts_status");
  }
  if (responseParser->hasName("trip_person_name")) {
  tripPersonName = responseParser->getStrByName("trip_person_name");
  }
  if (responseParser->hasName("trip_person_no")) {
  tripPersonNo = responseParser->getStrByName("trip_person_no");
  }
  if (responseParser->hasName("work_space")) {
  workSpace = responseParser->getStrByName("work_space");
  }

}

