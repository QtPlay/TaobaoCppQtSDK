#include <TaoApiCpp/response/LogisticsTraceSearchResponse.h>

QString LogisticsTraceSearchResponse::getCompanyName() const {
  return companyName;
}
void LogisticsTraceSearchResponse::setCompanyName (QString companyName) {
  this->companyName = companyName;
}
QString LogisticsTraceSearchResponse::getOutSid() const {
  return outSid;
}
void LogisticsTraceSearchResponse::setOutSid (QString outSid) {
  this->outSid = outSid;
}
QString LogisticsTraceSearchResponse::getStatus() const {
  return status;
}
void LogisticsTraceSearchResponse::setStatus (QString status) {
  this->status = status;
}
qlonglong LogisticsTraceSearchResponse::getTid() const {
  return tid;
}
void LogisticsTraceSearchResponse::setTid (qlonglong tid) {
  this->tid = tid;
}
QList<TransitStepInfo> LogisticsTraceSearchResponse::getTraceList() const {
  return traceList;
}
void LogisticsTraceSearchResponse::setTraceList (QList<TransitStepInfo> traceList) {
  this->traceList = traceList;
}

void LogisticsTraceSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("company_name")) {
  companyName = responseParser->getStrByName("company_name");
  }
  if (responseParser->hasName("out_sid")) {
  outSid = responseParser->getStrByName("out_sid");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("tid")) {
  tid = responseParser->getNumByName("tid");
  }
  if (responseParser->hasName("trace_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("trace_list");
  Parser *parser;
  foreach (parser, listParser) {
    TransitStepInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    traceList.append(tmp);
  }
  }

}

