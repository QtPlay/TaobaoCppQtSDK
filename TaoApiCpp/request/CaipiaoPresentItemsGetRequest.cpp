#include <TaoApiCpp/request/CaipiaoPresentItemsGetRequest.h>

QString CaipiaoPresentItemsGetRequest::getApiMethodName() const {
  return "taobao.caipiao.present.items.get";
}

QString CaipiaoPresentItemsGetRequest::getEndDate() const {
  return endDate;
}
void CaipiaoPresentItemsGetRequest::setEndDate (QString endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate);
}

qlonglong CaipiaoPresentItemsGetRequest::getPageNo() const {
  return pageNo;
}
void CaipiaoPresentItemsGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong CaipiaoPresentItemsGetRequest::getPageSize() const {
  return pageSize;
}
void CaipiaoPresentItemsGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString CaipiaoPresentItemsGetRequest::getStartDate() const {
  return startDate;
}
void CaipiaoPresentItemsGetRequest::setStartDate (QString startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate);
}



CaipiaoPresentItemsGetResponse *CaipiaoPresentItemsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoPresentItemsGetResponse *tmpResponse = new CaipiaoPresentItemsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
