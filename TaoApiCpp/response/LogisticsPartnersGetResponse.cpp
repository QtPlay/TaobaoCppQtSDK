#include <TaoApiCpp/response/LogisticsPartnersGetResponse.h>

QList<LogisticsPartner> LogisticsPartnersGetResponse::getLogisticsPartners() const {
  return logisticsPartners;
}
void LogisticsPartnersGetResponse::setLogisticsPartners (QList<LogisticsPartner> logisticsPartners) {
  this->logisticsPartners = logisticsPartners;
}

void LogisticsPartnersGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("logistics_partners")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("logistics_partners");
  Parser *parser;
  foreach (parser, listParser) {
    LogisticsPartner tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    logisticsPartners.append(tmp);
  }
  }

}

