#include <TaoApiCpp/request/InventoryAuthorizeGetallRequest.h>

QString InventoryAuthorizeGetallRequest::getApiMethodName() const {
  return "taobao.inventory.authorize.getall";
}

QString InventoryAuthorizeGetallRequest::getScItemIdList() const {
  return scItemIdList;
}
void InventoryAuthorizeGetallRequest::setScItemIdList (QString scItemIdList) {
  this->scItemIdList = scItemIdList;
  appParams.insert("sc_item_id_list", scItemIdList);
}

QString InventoryAuthorizeGetallRequest::getStoreCodeList() const {
  return storeCodeList;
}
void InventoryAuthorizeGetallRequest::setStoreCodeList (QString storeCodeList) {
  this->storeCodeList = storeCodeList;
  appParams.insert("store_code_list", storeCodeList);
}



InventoryAuthorizeGetallResponse *InventoryAuthorizeGetallRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  InventoryAuthorizeGetallResponse *tmpResponse = new InventoryAuthorizeGetallResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
