#include <TaoApiCpp/response/FenxiaoRequisitionsGetResponse.h>

bool FenxiaoRequisitionsGetResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoRequisitionsGetResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}
QList<Requisition> FenxiaoRequisitionsGetResponse::getRequisitions() const {
  return requisitions;
}
void FenxiaoRequisitionsGetResponse::setRequisitions (QList<Requisition> requisitions) {
  this->requisitions = requisitions;
}
qlonglong FenxiaoRequisitionsGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoRequisitionsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoRequisitionsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }
  if (responseParser->hasName("requisitions")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("requisitions");
  Parser *parser;
  foreach (parser, listParser) {
    Requisition tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    requisitions.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

