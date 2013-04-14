#include <TaoApiCpp/request/FenxiaoProductSkusGetRequest.h>

QString FenxiaoProductSkusGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.skus.get";
}

qlonglong FenxiaoProductSkusGetRequest::getProductId() const {
  return productId;
}
void FenxiaoProductSkusGetRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}



FenxiaoProductSkusGetResponse *FenxiaoProductSkusGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductSkusGetResponse *tmpResponse = new FenxiaoProductSkusGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
