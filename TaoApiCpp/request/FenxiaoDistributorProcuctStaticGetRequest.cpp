#include <TaoApiCpp/request/FenxiaoDistributorProcuctStaticGetRequest.h>

QString FenxiaoDistributorProcuctStaticGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.distributor.procuct.static.get";
}

QString FenxiaoDistributorProcuctStaticGetRequest::getDistributorUserNick() const {
  return distributorUserNick;
}
void FenxiaoDistributorProcuctStaticGetRequest::setDistributorUserNick (QString distributorUserNick) {
  this->distributorUserNick = distributorUserNick;
  appParams.insert("distributor_user_nick", distributorUserNick);
}

QString FenxiaoDistributorProcuctStaticGetRequest::getProductIdArray() const {
  return productIdArray;
}
void FenxiaoDistributorProcuctStaticGetRequest::setProductIdArray (QString productIdArray) {
  this->productIdArray = productIdArray;
  appParams.insert("product_id_array", productIdArray);
}



FenxiaoDistributorProcuctStaticGetResponse *FenxiaoDistributorProcuctStaticGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoDistributorProcuctStaticGetResponse *tmpResponse = new FenxiaoDistributorProcuctStaticGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
