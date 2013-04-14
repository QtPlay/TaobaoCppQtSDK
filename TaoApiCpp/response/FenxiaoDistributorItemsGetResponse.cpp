#include <TaoApiCpp/response/FenxiaoDistributorItemsGetResponse.h>

QList<FenxiaoItemRecord> FenxiaoDistributorItemsGetResponse::getRecords() const {
  return records;
}
void FenxiaoDistributorItemsGetResponse::setRecords (QList<FenxiaoItemRecord> records) {
  this->records = records;
}
qlonglong FenxiaoDistributorItemsGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoDistributorItemsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoDistributorItemsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("records")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("records");
  Parser *parser;
  foreach (parser, listParser) {
    FenxiaoItemRecord tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    records.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

