#include <TaoApiCpp/response/WangwangEserviceStreamweigthsGetResponse.h>

qlonglong WangwangEserviceStreamweigthsGetResponse::getResultCode() const {
  return resultCode;
}
void WangwangEserviceStreamweigthsGetResponse::setResultCode (qlonglong resultCode) {
  this->resultCode = resultCode;
}
qlonglong WangwangEserviceStreamweigthsGetResponse::getResultCount() const {
  return resultCount;
}
void WangwangEserviceStreamweigthsGetResponse::setResultCount (qlonglong resultCount) {
  this->resultCount = resultCount;
}
QList<StreamWeight> WangwangEserviceStreamweigthsGetResponse::getStaffStreamWeights() const {
  return staffStreamWeights;
}
void WangwangEserviceStreamweigthsGetResponse::setStaffStreamWeights (QList<StreamWeight> staffStreamWeights) {
  this->staffStreamWeights = staffStreamWeights;
}
qlonglong WangwangEserviceStreamweigthsGetResponse::getTotalWeight() const {
  return totalWeight;
}
void WangwangEserviceStreamweigthsGetResponse::setTotalWeight (qlonglong totalWeight) {
  this->totalWeight = totalWeight;
}

void WangwangEserviceStreamweigthsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("result_code")) {
  resultCode = responseParser->getNumByName("result_code");
  }
  if (responseParser->hasName("result_count")) {
  resultCount = responseParser->getNumByName("result_count");
  }
  if (responseParser->hasName("staff_stream_weights")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("staff_stream_weights");
  Parser *parser;
  foreach (parser, listParser) {
    StreamWeight tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    staffStreamWeights.append(tmp);
  }
  }
  if (responseParser->hasName("total_weight")) {
  totalWeight = responseParser->getNumByName("total_weight");
  }

}

