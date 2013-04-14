#include <TaoApiCpp/response/WangwangEserviceEvalsGetResponse.h>

qlonglong WangwangEserviceEvalsGetResponse::getResultCode() const {
  return resultCode;
}
void WangwangEserviceEvalsGetResponse::setResultCode (qlonglong resultCode) {
  this->resultCode = resultCode;
}
qlonglong WangwangEserviceEvalsGetResponse::getResultCount() const {
  return resultCount;
}
void WangwangEserviceEvalsGetResponse::setResultCount (qlonglong resultCount) {
  this->resultCount = resultCount;
}
QList<EvalDetail> WangwangEserviceEvalsGetResponse::getStaffEvalDetails() const {
  return staffEvalDetails;
}
void WangwangEserviceEvalsGetResponse::setStaffEvalDetails (QList<EvalDetail> staffEvalDetails) {
  this->staffEvalDetails = staffEvalDetails;
}

void WangwangEserviceEvalsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("result_code")) {
  resultCode = responseParser->getNumByName("result_code");
  }
  if (responseParser->hasName("result_count")) {
  resultCount = responseParser->getNumByName("result_count");
  }
  if (responseParser->hasName("staff_eval_details")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("staff_eval_details");
  Parser *parser;
  foreach (parser, listParser) {
    EvalDetail tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    staffEvalDetails.append(tmp);
  }
  }

}

