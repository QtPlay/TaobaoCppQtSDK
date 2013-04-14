#include <TaoApiCpp/response/MicropayOrderFreezepayurlGetResponse.h>

QString MicropayOrderFreezepayurlGetResponse::getPayFreezeUrl() const {
  return payFreezeUrl;
}
void MicropayOrderFreezepayurlGetResponse::setPayFreezeUrl (QString payFreezeUrl) {
  this->payFreezeUrl = payFreezeUrl;
}

void MicropayOrderFreezepayurlGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("pay_freeze_url")) {
  payFreezeUrl = responseParser->getStrByName("pay_freeze_url");
  }

}

