#include <TaoApiCpp/request/FenxiaoDiscountUpdateRequest.h>

QString FenxiaoDiscountUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.discount.update";
}

QString FenxiaoDiscountUpdateRequest::getDetailIds() const {
  return detailIds;
}
void FenxiaoDiscountUpdateRequest::setDetailIds (QString detailIds) {
  this->detailIds = detailIds;
  appParams.insert("detail_ids", detailIds);
}

QString FenxiaoDiscountUpdateRequest::getDetailStatuss() const {
  return detailStatuss;
}
void FenxiaoDiscountUpdateRequest::setDetailStatuss (QString detailStatuss) {
  this->detailStatuss = detailStatuss;
  appParams.insert("detail_statuss", detailStatuss);
}

qlonglong FenxiaoDiscountUpdateRequest::getDiscountId() const {
  return discountId;
}
void FenxiaoDiscountUpdateRequest::setDiscountId (qlonglong discountId) {
  this->discountId = discountId;
  appParams.insert("discount_id", QString::number(discountId));
}

QString FenxiaoDiscountUpdateRequest::getDiscountName() const {
  return discountName;
}
void FenxiaoDiscountUpdateRequest::setDiscountName (QString discountName) {
  this->discountName = discountName;
  appParams.insert("discount_name", discountName);
}

QString FenxiaoDiscountUpdateRequest::getDiscountStatus() const {
  return discountStatus;
}
void FenxiaoDiscountUpdateRequest::setDiscountStatus (QString discountStatus) {
  this->discountStatus = discountStatus;
  appParams.insert("discount_status", discountStatus);
}

QString FenxiaoDiscountUpdateRequest::getDiscountTypes() const {
  return discountTypes;
}
void FenxiaoDiscountUpdateRequest::setDiscountTypes (QString discountTypes) {
  this->discountTypes = discountTypes;
  appParams.insert("discount_types", discountTypes);
}

QString FenxiaoDiscountUpdateRequest::getDiscountValues() const {
  return discountValues;
}
void FenxiaoDiscountUpdateRequest::setDiscountValues (QString discountValues) {
  this->discountValues = discountValues;
  appParams.insert("discount_values", discountValues);
}

QString FenxiaoDiscountUpdateRequest::getTargetIds() const {
  return targetIds;
}
void FenxiaoDiscountUpdateRequest::setTargetIds (QString targetIds) {
  this->targetIds = targetIds;
  appParams.insert("target_ids", targetIds);
}

QString FenxiaoDiscountUpdateRequest::getTargetTypes() const {
  return targetTypes;
}
void FenxiaoDiscountUpdateRequest::setTargetTypes (QString targetTypes) {
  this->targetTypes = targetTypes;
  appParams.insert("target_types", targetTypes);
}



FenxiaoDiscountUpdateResponse *FenxiaoDiscountUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoDiscountUpdateResponse *tmpResponse = new FenxiaoDiscountUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
