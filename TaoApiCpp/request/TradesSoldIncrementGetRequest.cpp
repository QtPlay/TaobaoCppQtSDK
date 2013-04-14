#include <TaoApiCpp/request/TradesSoldIncrementGetRequest.h>

QString TradesSoldIncrementGetRequest::getApiMethodName() const {
  return "taobao.trades.sold.increment.get";
}

QDateTime TradesSoldIncrementGetRequest::getEndModified() const {
  return endModified;
}
void TradesSoldIncrementGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TradesSoldIncrementGetRequest::getExtType() const {
  return extType;
}
void TradesSoldIncrementGetRequest::setExtType (QString extType) {
  this->extType = extType;
  appParams.insert("ext_type", extType);
}

QString TradesSoldIncrementGetRequest::getFields() const {
  return fields;
}
void TradesSoldIncrementGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TradesSoldIncrementGetRequest::getIsAcookie() const {
  return isAcookie;
}
void TradesSoldIncrementGetRequest::setIsAcookie (bool isAcookie) {
  this->isAcookie = isAcookie;
  appParams.insert("is_acookie", isAcookie? "true": "false");
}

qlonglong TradesSoldIncrementGetRequest::getPageNo() const {
  return pageNo;
}
void TradesSoldIncrementGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong TradesSoldIncrementGetRequest::getPageSize() const {
  return pageSize;
}
void TradesSoldIncrementGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime TradesSoldIncrementGetRequest::getStartModified() const {
  return startModified;
}
void TradesSoldIncrementGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TradesSoldIncrementGetRequest::getStatus() const {
  return status;
}
void TradesSoldIncrementGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString TradesSoldIncrementGetRequest::getTag() const {
  return tag;
}
void TradesSoldIncrementGetRequest::setTag (QString tag) {
  this->tag = tag;
  appParams.insert("tag", tag);
}

QString TradesSoldIncrementGetRequest::getType() const {
  return type;
}
void TradesSoldIncrementGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}

bool TradesSoldIncrementGetRequest::getUseHasNext() const {
  return useHasNext;
}
void TradesSoldIncrementGetRequest::setUseHasNext (bool useHasNext) {
  this->useHasNext = useHasNext;
  appParams.insert("use_has_next", useHasNext? "true": "false");
}



TradesSoldIncrementGetResponse *TradesSoldIncrementGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradesSoldIncrementGetResponse *tmpResponse = new TradesSoldIncrementGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
