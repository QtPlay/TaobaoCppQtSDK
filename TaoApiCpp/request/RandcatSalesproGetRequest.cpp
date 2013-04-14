#include <TaoApiCpp/request/RandcatSalesproGetRequest.h>

QString RandcatSalesproGetRequest::getApiMethodName() const {
  return "tmall.brandcat.salespro.get";
}

qlonglong RandcatSalesproGetRequest::getBrandId() const {
  return brandId;
}
void RandcatSalesproGetRequest::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
  appParams.insert("brand_id", QString::number(brandId));
}

qlonglong RandcatSalesproGetRequest::getCatId() const {
  return catId;
}
void RandcatSalesproGetRequest::setCatId (qlonglong catId) {
  this->catId = catId;
  appParams.insert("cat_id", QString::number(catId));
}



RandcatSalesproGetResponse *RandcatSalesproGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RandcatSalesproGetResponse *tmpResponse = new RandcatSalesproGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
