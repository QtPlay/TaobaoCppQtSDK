#include <TaoApiCpp/response/IncrementCustomersGetResponse.h>

QList<AppCustomer> IncrementCustomersGetResponse::getAppCustomers() const {
  return appCustomers;
}
void IncrementCustomersGetResponse::setAppCustomers (QList<AppCustomer> appCustomers) {
  this->appCustomers = appCustomers;
}
qlonglong IncrementCustomersGetResponse::getTotalResults() const {
  return totalResults;
}
void IncrementCustomersGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void IncrementCustomersGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("app_customers")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("app_customers");
  Parser *parser;
  foreach (parser, listParser) {
    AppCustomer tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    appCustomers.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

