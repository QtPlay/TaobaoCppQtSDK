#include <TaoApiCpp/response/LogisticsCompaniesGetResponse.h>

QList<LogisticsCompany> LogisticsCompaniesGetResponse::getLogisticsCompanies() const {
  return logisticsCompanies;
}
void LogisticsCompaniesGetResponse::setLogisticsCompanies (QList<LogisticsCompany> logisticsCompanies) {
  this->logisticsCompanies = logisticsCompanies;
}

void LogisticsCompaniesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("logistics_companies")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("logistics_companies");
  Parser *parser;
  foreach (parser, listParser) {
    LogisticsCompany tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    logisticsCompanies.append(tmp);
  }
  }

}

