#include <TaoApiCpp/request/FenxiaoCooperationGetRequest.h>

QString FenxiaoCooperationGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.cooperation.get";
}

QDateTime FenxiaoCooperationGetRequest::getEndDate() const {
  return endDate;
}
void FenxiaoCooperationGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong FenxiaoCooperationGetRequest::getPageNo() const {
  return pageNo;
}
void FenxiaoCooperationGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong FenxiaoCooperationGetRequest::getPageSize() const {
  return pageSize;
}
void FenxiaoCooperationGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime FenxiaoCooperationGetRequest::getStartDate() const {
  return startDate;
}
void FenxiaoCooperationGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString FenxiaoCooperationGetRequest::getStatus() const {
  return status;
}
void FenxiaoCooperationGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

QString FenxiaoCooperationGetRequest::getTradeType() const {
  return tradeType;
}
void FenxiaoCooperationGetRequest::setTradeType (QString tradeType) {
  this->tradeType = tradeType;
  appParams.insert("trade_type", tradeType);
}



FenxiaoCooperationGetResponse *FenxiaoCooperationGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoCooperationGetResponse *tmpResponse = new FenxiaoCooperationGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
