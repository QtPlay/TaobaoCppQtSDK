#include <TaoApiCpp/request/TradesSoldGetRequest.h>

QString TradesSoldGetRequest::getApiMethodName() const {
  return "taobao.trades.sold.get";
}

QString TradesSoldGetRequest::getBuyerNick() const {
  return buyerNick;
}
void TradesSoldGetRequest::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
  appParams.insert("buyer_nick", buyerNick);
}

QDateTime TradesSoldGetRequest::getEndCreated() const {
  return endCreated;
}
void TradesSoldGetRequest::setEndCreated (QDateTime endCreated) {
  this->endCreated = endCreated;
  appParams.insert("end_created", endCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TradesSoldGetRequest::getExtType() const {
  return extType;
}
void TradesSoldGetRequest::setExtType (QString extType) {
  this->extType = extType;
  appParams.insert("ext_type", extType);
}

QString TradesSoldGetRequest::getFields() const {
  return fields;
}
void TradesSoldGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TradesSoldGetRequest::getIsAcookie() const {
  return isAcookie;
}
void TradesSoldGetRequest::setIsAcookie (bool isAcookie) {
  this->isAcookie = isAcookie;
  appParams.insert("is_acookie", isAcookie? "true": "false");
}

qlonglong TradesSoldGetRequest::getPageNo() const {
  return pageNo;
}
void TradesSoldGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong TradesSoldGetRequest::getPageSize() const {
  return pageSize;
}
void TradesSoldGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString TradesSoldGetRequest::getRateStatus() const {
  return rateStatus;
}
void TradesSoldGetRequest::setRateStatus (QString rateStatus) {
  this->rateStatus = rateStatus;
  appParams.insert("rate_status", rateStatus);
}

QDateTime TradesSoldGetRequest::getStartCreated() const {
  return startCreated;
}
void TradesSoldGetRequest::setStartCreated (QDateTime startCreated) {
  this->startCreated = startCreated;
  appParams.insert("start_created", startCreated.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TradesSoldGetRequest::getStatus() const {
  return status;
}
void TradesSoldGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString TradesSoldGetRequest::getTag() const {
  return tag;
}
void TradesSoldGetRequest::setTag (QString tag) {
  this->tag = tag;
  appParams.insert("tag", tag);
}

QString TradesSoldGetRequest::getType() const {
  return type;
}
void TradesSoldGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}

bool TradesSoldGetRequest::getUseHasNext() const {
  return useHasNext;
}
void TradesSoldGetRequest::setUseHasNext (bool useHasNext) {
  this->useHasNext = useHasNext;
  appParams.insert("use_has_next", useHasNext? "true": "false");
}



TradesSoldGetResponse *TradesSoldGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TradesSoldGetResponse *tmpResponse = new TradesSoldGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
