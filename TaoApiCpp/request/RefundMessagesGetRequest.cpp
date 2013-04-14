#include <TaoApiCpp/request/RefundMessagesGetRequest.h>

QString RefundMessagesGetRequest::getApiMethodName() const {
  return "taobao.refund.messages.get";
}

QString RefundMessagesGetRequest::getFields() const {
  return fields;
}
void RefundMessagesGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong RefundMessagesGetRequest::getPageNo() const {
  return pageNo;
}
void RefundMessagesGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong RefundMessagesGetRequest::getPageSize() const {
  return pageSize;
}
void RefundMessagesGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong RefundMessagesGetRequest::getRefundId() const {
  return refundId;
}
void RefundMessagesGetRequest::setRefundId (qlonglong refundId) {
  this->refundId = refundId;
  appParams.insert("refund_id", QString::number(refundId));
}



RefundMessagesGetResponse *RefundMessagesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RefundMessagesGetResponse *tmpResponse = new RefundMessagesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
