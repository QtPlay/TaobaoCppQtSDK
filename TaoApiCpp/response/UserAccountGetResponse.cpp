#include <TaoApiCpp/response/UserAccountGetResponse.h>

AlipayAccount UserAccountGetResponse::getAlipayAccount() const {
  return alipayAccount;
}
void UserAccountGetResponse::setAlipayAccount (AlipayAccount alipayAccount) {
  this->alipayAccount = alipayAccount;
}

void UserAccountGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("alipay_account")) {
  alipayAccount.setParser(responseParser->getObjectParser("alipay_account"));
  alipayAccount.parseResponse();
  }

}

