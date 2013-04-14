#include <TaoApiCpp/request/FenxiaoProductcatDeleteRequest.h>

QString FenxiaoProductcatDeleteRequest::getApiMethodName() const {
  return "taobao.fenxiao.productcat.delete";
}

qlonglong FenxiaoProductcatDeleteRequest::getProductLineId() const {
  return productLineId;
}
void FenxiaoProductcatDeleteRequest::setProductLineId (qlonglong productLineId) {
  this->productLineId = productLineId;
  appParams.insert("product_line_id", QString::number(productLineId));
}



FenxiaoProductcatDeleteResponse *FenxiaoProductcatDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductcatDeleteResponse *tmpResponse = new FenxiaoProductcatDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
