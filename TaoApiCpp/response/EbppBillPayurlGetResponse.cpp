#include <TaoApiCpp/response/EbppBillPayurlGetResponse.h>

QString EbppBillPayurlGetResponse::getPayUrl() const {
  return payUrl;
}
void EbppBillPayurlGetResponse::setPayUrl (QString payUrl) {
  this->payUrl = payUrl;
}

void EbppBillPayurlGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("pay_url")) {
  payUrl = responseParser->getStrByName("pay_url");
  }

}

