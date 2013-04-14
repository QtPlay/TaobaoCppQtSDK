#include <TaoApiCpp/request/WlbReplenishStatisticsRequest.h>

QString WlbReplenishStatisticsRequest::getApiMethodName() const {
  return "taobao.wlb.replenish.statistics";
}

QString WlbReplenishStatisticsRequest::getItemCode() const {
  return itemCode;
}
void WlbReplenishStatisticsRequest::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
  appParams.insert("item_code", itemCode);
}

QString WlbReplenishStatisticsRequest::getName() const {
  return name;
}
void WlbReplenishStatisticsRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong WlbReplenishStatisticsRequest::getPageNo() const {
  return pageNo;
}
void WlbReplenishStatisticsRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbReplenishStatisticsRequest::getPageSize() const {
  return pageSize;
}
void WlbReplenishStatisticsRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString WlbReplenishStatisticsRequest::getStoreCode() const {
  return storeCode;
}
void WlbReplenishStatisticsRequest::setStoreCode (QString storeCode) {
  this->storeCode = storeCode;
  appParams.insert("store_code", storeCode);
}



WlbReplenishStatisticsResponse *WlbReplenishStatisticsRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbReplenishStatisticsResponse *tmpResponse = new WlbReplenishStatisticsResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
