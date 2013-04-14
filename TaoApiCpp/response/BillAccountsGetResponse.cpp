#include <TaoApiCpp/response/BillAccountsGetResponse.h>

QList<Account> BillAccountsGetResponse::getAccounts() const {
  return accounts;
}
void BillAccountsGetResponse::setAccounts (QList<Account> accounts) {
  this->accounts = accounts;
}
qlonglong BillAccountsGetResponse::getTotalResults() const {
  return totalResults;
}
void BillAccountsGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void BillAccountsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("accounts")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("accounts");
  Parser *parser;
  foreach (parser, listParser) {
    Account tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    accounts.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

