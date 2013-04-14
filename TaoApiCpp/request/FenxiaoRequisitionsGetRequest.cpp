#include <TaoApiCpp/request/FenxiaoRequisitionsGetRequest.h>

QString FenxiaoRequisitionsGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.requisitions.get";
}

QDateTime FenxiaoRequisitionsGetRequest::getApplyEnd() const {
  return applyEnd;
}
void FenxiaoRequisitionsGetRequest::setApplyEnd (QDateTime applyEnd) {
  this->applyEnd = applyEnd;
  appParams.insert("apply_end", applyEnd.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime FenxiaoRequisitionsGetRequest::getApplyStart() const {
  return applyStart;
}
void FenxiaoRequisitionsGetRequest::setApplyStart (QDateTime applyStart) {
  this->applyStart = applyStart;
  appParams.insert("apply_start", applyStart.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong FenxiaoRequisitionsGetRequest::getPageNo() const {
  return pageNo;
}
void FenxiaoRequisitionsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong FenxiaoRequisitionsGetRequest::getPageSize() const {
  return pageSize;
}
void FenxiaoRequisitionsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong FenxiaoRequisitionsGetRequest::getStatus() const {
  return status;
}
void FenxiaoRequisitionsGetRequest::setStatus (qlonglong status) {
  this->status = status;
  appParams.insert("status", QString::number(status));
}



FenxiaoRequisitionsGetResponse *FenxiaoRequisitionsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoRequisitionsGetResponse *tmpResponse = new FenxiaoRequisitionsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
