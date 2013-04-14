#include <TaoApiCpp/request/TaobaokeReportGetRequest.h>

QString TaobaokeReportGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.report.get";
}

QString TaobaokeReportGetRequest::getDate() const {
  return date;
}
void TaobaokeReportGetRequest::setDate (QString date) {
  this->date = date;
  appParams.insert("date", date);
}

QString TaobaokeReportGetRequest::getFields() const {
  return fields;
}
void TaobaokeReportGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong TaobaokeReportGetRequest::getPageNo() const {
  return pageNo;
}
void TaobaokeReportGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong TaobaokeReportGetRequest::getPageSize() const {
  return pageSize;
}
void TaobaokeReportGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}



TaobaokeReportGetResponse *TaobaokeReportGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeReportGetResponse *tmpResponse = new TaobaokeReportGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
