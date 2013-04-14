#include <TaoApiCpp/request/RefundsReceiveGetRequest.h>

QString RefundsReceiveGetRequest::getApiMethodName() const {
  return "taobao.refunds.receive.get";
}

QString RefundsReceiveGetRequest::getBuyerNick() const {
  return buyerNick;
}
void RefundsReceiveGetRequest::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
  appParams.insert("buyer_nick", buyerNick);
}

QDateTime RefundsReceiveGetRequest::getEndModified() const {
  return endModified;
}
void RefundsReceiveGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString RefundsReceiveGetRequest::getFields() const {
  return fields;
}
void RefundsReceiveGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong RefundsReceiveGetRequest::getPageNo() const {
  return pageNo;
}
void RefundsReceiveGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong RefundsReceiveGetRequest::getPageSize() const {
  return pageSize;
}
void RefundsReceiveGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime RefundsReceiveGetRequest::getStartModified() const {
  return startModified;
}
void RefundsReceiveGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString RefundsReceiveGetRequest::getStatus() const {
  return status;
}
void RefundsReceiveGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString RefundsReceiveGetRequest::getType() const {
  return type;
}
void RefundsReceiveGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}

bool RefundsReceiveGetRequest::getUseHasNext() const {
  return useHasNext;
}
void RefundsReceiveGetRequest::setUseHasNext (bool useHasNext) {
  this->useHasNext = useHasNext;
  appParams.insert("use_has_next", useHasNext? "true": "false");
}



RefundsReceiveGetResponse *RefundsReceiveGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RefundsReceiveGetResponse *tmpResponse = new RefundsReceiveGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
