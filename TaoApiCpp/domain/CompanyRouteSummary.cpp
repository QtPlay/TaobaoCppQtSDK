#include <TaoApiCpp/domain/CompanyRouteSummary.h>
QString CompanyRouteSummary::getCompanyCode() const {
  return companyCode;
}
void CompanyRouteSummary::setCompanyCode (QString companyCode) {
  this->companyCode = companyCode;
}

QString CompanyRouteSummary::getCompanyId() const {
  return companyId;
}
void CompanyRouteSummary::setCompanyId (QString companyId) {
  this->companyId = companyId;
}

QString CompanyRouteSummary::getCompanyName() const {
  return companyName;
}
void CompanyRouteSummary::setCompanyName (QString companyName) {
  this->companyName = companyName;
}

qlonglong CompanyRouteSummary::getRouteCounts() const {
  return routeCounts;
}
void CompanyRouteSummary::setRouteCounts (qlonglong routeCounts) {
  this->routeCounts = routeCounts;
}


void CompanyRouteSummary::parseResponse() {
  if (responseParser->hasName("company_code")) {
  companyCode = responseParser->getStrByName("company_code");
  }
  if (responseParser->hasName("company_id")) {
  companyId = responseParser->getStrByName("company_id");
  }
  if (responseParser->hasName("company_name")) {
  companyName = responseParser->getStrByName("company_name");
  }
  if (responseParser->hasName("route_counts")) {
  routeCounts = responseParser->getNumByName("route_counts");
  }

}

