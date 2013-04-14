#include <TaoApiCpp/request/TraderatesGetRequest.h>

QString TraderatesGetRequest::getApiMethodName() const {
  return "taobao.traderates.get";
}

QDateTime TraderatesGetRequest::getEndDate() const {
  return endDate;
}
void TraderatesGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString TraderatesGetRequest::getFields() const {
  return fields;
}
void TraderatesGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

qlonglong TraderatesGetRequest::getNumIid() const {
  return numIid;
}
void TraderatesGetRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

qlonglong TraderatesGetRequest::getPageNo() const {
  return pageNo;
}
void TraderatesGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong TraderatesGetRequest::getPageSize() const {
  return pageSize;
}
void TraderatesGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QString TraderatesGetRequest::getRateType() const {
  return rateType;
}
void TraderatesGetRequest::setRateType (QString rateType) {
  this->rateType = rateType;
  appParams.insert("rate_type", rateType);
}

QString TraderatesGetRequest::getResult() const {
  return result;
}
void TraderatesGetRequest::setResult (QString result) {
  this->result = result;
  appParams.insert("result", result);
}

QString TraderatesGetRequest::getRole() const {
  return role;
}
void TraderatesGetRequest::setRole (QString role) {
  this->role = role;
  appParams.insert("role", role);
}

QDateTime TraderatesGetRequest::getStartDate() const {
  return startDate;
}
void TraderatesGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong TraderatesGetRequest::getTid() const {
  return tid;
}
void TraderatesGetRequest::setTid (qlonglong tid) {
  this->tid = tid;
  appParams.insert("tid", QString::number(tid));
}

bool TraderatesGetRequest::getUseHasNext() const {
  return useHasNext;
}
void TraderatesGetRequest::setUseHasNext (bool useHasNext) {
  this->useHasNext = useHasNext;
  appParams.insert("use_has_next", useHasNext? "true": "false");
}



TraderatesGetResponse *TraderatesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TraderatesGetResponse *tmpResponse = new TraderatesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
