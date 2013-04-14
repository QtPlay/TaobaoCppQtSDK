#include <TaoApiCpp/response/LogisticsAddressSearchResponse.h>

QList<AddressResult> LogisticsAddressSearchResponse::getAddresses() const {
  return addresses;
}
void LogisticsAddressSearchResponse::setAddresses (QList<AddressResult> addresses) {
  this->addresses = addresses;
}

void LogisticsAddressSearchResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("addresses")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("addresses");
  Parser *parser;
  foreach (parser, listParser) {
    AddressResult tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    addresses.append(tmp);
  }
  }

}

