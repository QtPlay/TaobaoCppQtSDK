#include <TaoApiCpp/request/FenxiaoDiscountsGetRequest.h>

QString FenxiaoDiscountsGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.discounts.get";
}

qlonglong FenxiaoDiscountsGetRequest::getDiscountId() const {
  return discountId;
}
void FenxiaoDiscountsGetRequest::setDiscountId (qlonglong discountId) {
  this->discountId = discountId;
  appParams.insert("discount_id", QString::number(discountId));
}

QString FenxiaoDiscountsGetRequest::getExtFields() const {
  return extFields;
}
void FenxiaoDiscountsGetRequest::setExtFields (QString extFields) {
  this->extFields = extFields;
  appParams.insert("ext_fields", extFields);
}



FenxiaoDiscountsGetResponse *FenxiaoDiscountsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoDiscountsGetResponse *tmpResponse = new FenxiaoDiscountsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
