#include <TaoApiCpp/response/UserContractGetResponse.h>

AlipayContract UserContractGetResponse::getAlipayContract() const {
  return alipayContract;
}
void UserContractGetResponse::setAlipayContract (AlipayContract alipayContract) {
  this->alipayContract = alipayContract;
}

void UserContractGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("alipay_contract")) {
  alipayContract.setParser(responseParser->getObjectParser("alipay_contract"));
  alipayContract.parseResponse();
  }

}

