#include <TaoApiCpp/request/ScitemQueryRequest.h>

QString ScitemQueryRequest::getApiMethodName() const {
  return "taobao.scitem.query";
}

QString ScitemQueryRequest::getBarCode() const {
  return barCode;
}
void ScitemQueryRequest::setBarCode (QString barCode) {
  this->barCode = barCode;
  appParams.insert("bar_code", barCode);
}

QString ScitemQueryRequest::getItemName() const {
  return itemName;
}
void ScitemQueryRequest::setItemName (QString itemName) {
  this->itemName = itemName;
  appParams.insert("item_name", itemName);
}

qlonglong ScitemQueryRequest::getItemType() const {
  return itemType;
}
void ScitemQueryRequest::setItemType (qlonglong itemType) {
  this->itemType = itemType;
  appParams.insert("item_type", QString::number(itemType));
}

QString ScitemQueryRequest::getOuterCode() const {
  return outerCode;
}
void ScitemQueryRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong ScitemQueryRequest::getPageIndex() const {
  return pageIndex;
}
void ScitemQueryRequest::setPageIndex (qlonglong pageIndex) {
  this->pageIndex = pageIndex;
  appParams.insert("page_index", QString::number(pageIndex));
}

qlonglong ScitemQueryRequest::getPageSize() const {
  return pageSize;
}
void ScitemQueryRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString ScitemQueryRequest::getWmsCode() const {
  return wmsCode;
}
void ScitemQueryRequest::setWmsCode (QString wmsCode) {
  this->wmsCode = wmsCode;
  appParams.insert("wms_code", wmsCode);
}



ScitemQueryResponse *ScitemQueryRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ScitemQueryResponse *tmpResponse = new ScitemQueryResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
