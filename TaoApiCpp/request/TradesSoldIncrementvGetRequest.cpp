#include <TaoApiCpp/request/TradesSoldIncrementvGetRequest.h>

QString TradesSoldIncrementvGetRequest::getApiMethodName() const {
  return "taobao.trades.sold.incrementv.get";
}

QDateTime TradesSoldIncrementvGetRequest::getEndCreate() const {
  return endCreate;
}
void TradesSoldIncrementvGetRequest::setEndCreate (QDateTime endCreate) {
  this->endCreate = endCreate;
  appParams.insert("end_create", endCreate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TradesSoldIncrementvGetRequest::getExtType() const {
  return extType;
}
void TradesSoldIncrementvGetRequest::setExtType (QString extType) {
  this->extType = extType;
  appParams.insert("ext_type", extType);
}

QString TradesSoldIncrementvGetRequest::getFields() const {
  return fields;
}
void TradesSoldIncrementvGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong TradesSoldIncrementvGetRequest::getPageNo() const {
  return pageNo;
}
void TradesSoldIncrementvGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong TradesSoldIncrementvGetRequest::getPageSize() const {
  return pageSize;
}
void TradesSoldIncrementvGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime TradesSoldIncrementvGetRequest::getStartCreate() const {
  return startCreate;
}
void TradesSoldIncrementvGetRequest::setStartCreate (QDateTime startCreate) {
  this->startCreate = startCreate;
  appParams.insert("start_create", startCreate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TradesSoldIncrementvGetRequest::getStatus() const {
  return status;
}
void TradesSoldIncrementvGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString TradesSoldIncrementvGetRequest::getTag() const {
  return tag;
}
void TradesSoldIncrementvGetRequest::setTag (QString tag) {
  this->tag = tag;
  appParams.insert("tag", tag);
}

QString TradesSoldIncrementvGetRequest::getType() const {
  return type;
}
void TradesSoldIncrementvGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}

bool TradesSoldIncrementvGetRequest::getUseHasNext() const {
  return useHasNext;
}
void TradesSoldIncrementvGetRequest::setUseHasNext (bool useHasNext) {
  this->useHasNext = useHasNext;
  appParams.insert("use_has_next", useHasNext? "true": "false");
}



TradesSoldIncrementvGetResponse *TradesSoldIncrementvGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradesSoldIncrementvGetResponse *tmpResponse = new TradesSoldIncrementvGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
