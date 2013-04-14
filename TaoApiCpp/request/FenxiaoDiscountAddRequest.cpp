#include <TaoApiCpp/request/FenxiaoDiscountAddRequest.h>

QString FenxiaoDiscountAddRequest::getApiMethodName() const {
  return "taobao.fenxiao.discount.add";
}

QString FenxiaoDiscountAddRequest::getDiscountName() const {
  return discountName;
}
void FenxiaoDiscountAddRequest::setDiscountName (QString discountName) {
  this->discountName = discountName;
  appParams.insert("discount_name", discountName);
}

QString FenxiaoDiscountAddRequest::getDiscountTypes() const {
  return discountTypes;
}
void FenxiaoDiscountAddRequest::setDiscountTypes (QString discountTypes) {
  this->discountTypes = discountTypes;
  appParams.insert("discount_types", discountTypes);
}

QString FenxiaoDiscountAddRequest::getDiscountValues() const {
  return discountValues;
}
void FenxiaoDiscountAddRequest::setDiscountValues (QString discountValues) {
  this->discountValues = discountValues;
  appParams.insert("discount_values", discountValues);
}

QString FenxiaoDiscountAddRequest::getTargetIds() const {
  return targetIds;
}
void FenxiaoDiscountAddRequest::setTargetIds (QString targetIds) {
  this->targetIds = targetIds;
  appParams.insert("target_ids", targetIds);
}

QString FenxiaoDiscountAddRequest::getTargetTypes() const {
  return targetTypes;
}
void FenxiaoDiscountAddRequest::setTargetTypes (QString targetTypes) {
  this->targetTypes = targetTypes;
  appParams.insert("target_types", targetTypes);
}



FenxiaoDiscountAddResponse *FenxiaoDiscountAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoDiscountAddResponse *tmpResponse = new FenxiaoDiscountAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
