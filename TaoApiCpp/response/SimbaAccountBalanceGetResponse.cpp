#include <TaoApiCpp/response/SimbaAccountBalanceGetResponse.h>

QString SimbaAccountBalanceGetResponse::getBalance() const {
  return balance;
}
void SimbaAccountBalanceGetResponse::setBalance (QString balance) {
  this->balance = balance;
}

void SimbaAccountBalanceGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("balance")) {
  balance = responseParser->getStrByName("balance");
  }

}

