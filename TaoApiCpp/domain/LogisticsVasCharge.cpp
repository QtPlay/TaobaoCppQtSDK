#include <TaoApiCpp/domain/LogisticsVasCharge.h>
QString LogisticsVasCharge::getOriginalTotalVasCost() const {
  return originalTotalVasCost;
}
void LogisticsVasCharge::setOriginalTotalVasCost (QString originalTotalVasCost) {
  this->originalTotalVasCost = originalTotalVasCost;
}

QString LogisticsVasCharge::getTotalVasCost() const {
  return totalVasCost;
}
void LogisticsVasCharge::setTotalVasCost (QString totalVasCost) {
  this->totalVasCost = totalVasCost;
}

QString LogisticsVasCharge::getTotalVasSaveCost() const {
  return totalVasSaveCost;
}
void LogisticsVasCharge::setTotalVasSaveCost (QString totalVasSaveCost) {
  this->totalVasSaveCost = totalVasSaveCost;
}

QList<LogisticsVasItemCharge> LogisticsVasCharge::getVasCostList() const {
  return vasCostList;
}
void LogisticsVasCharge::setVasCostList (QList<LogisticsVasItemCharge> vasCostList) {
  this->vasCostList = vasCostList;
}


void LogisticsVasCharge::parseResponse() {
  if (responseParser->hasName("original_total_vas_cost")) {
  originalTotalVasCost = responseParser->getStrByName("original_total_vas_cost");
  }
  if (responseParser->hasName("total_vas_cost")) {
  totalVasCost = responseParser->getStrByName("total_vas_cost");
  }
  if (responseParser->hasName("total_vas_save_cost")) {
  totalVasSaveCost = responseParser->getStrByName("total_vas_save_cost");
  }
  if (responseParser->hasName("vas_cost_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("vas_cost_list");
  Parser *parser;
  foreach (parser, listParser) {
    LogisticsVasItemCharge tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    vasCostList.append(tmp);
  }
  }

}

