#include <TaoApiCpp/request/WlbNotifyMessagePageGetRequest.h>

QString WlbNotifyMessagePageGetRequest::getApiMethodName() const {
  return "taobao.wlb.notify.message.page.get";
}

QDateTime WlbNotifyMessagePageGetRequest::getEndDate() const {
  return endDate;
}
void WlbNotifyMessagePageGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WlbNotifyMessagePageGetRequest::getMsgCode() const {
  return msgCode;
}
void WlbNotifyMessagePageGetRequest::setMsgCode (QString msgCode) {
  this->msgCode = msgCode;
  appParams.insert("msg_code", msgCode);
}

qlonglong WlbNotifyMessagePageGetRequest::getPageNo() const {
  return pageNo;
}
void WlbNotifyMessagePageGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong WlbNotifyMessagePageGetRequest::getPageSize() const {
  return pageSize;
}
void WlbNotifyMessagePageGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime WlbNotifyMessagePageGetRequest::getStartDate() const {
  return startDate;
}
void WlbNotifyMessagePageGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString WlbNotifyMessagePageGetRequest::getStatus() const {
  return status;
}
void WlbNotifyMessagePageGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}



WlbNotifyMessagePageGetResponse *WlbNotifyMessagePageGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbNotifyMessagePageGetResponse *tmpResponse = new WlbNotifyMessagePageGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
