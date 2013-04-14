#include <TaoApiCpp/request/FenxiaoProductcatAddRequest.h>

QString FenxiaoProductcatAddRequest::getApiMethodName() const {
  return "taobao.fenxiao.productcat.add";
}

qlonglong FenxiaoProductcatAddRequest::getAgentCostPercent() const {
  return agentCostPercent;
}
void FenxiaoProductcatAddRequest::setAgentCostPercent (qlonglong agentCostPercent) {
  this->agentCostPercent = agentCostPercent;
  appParams.insert("agent_cost_percent", QString::number(agentCostPercent));
}

qlonglong FenxiaoProductcatAddRequest::getDealerCostPercent() const {
  return dealerCostPercent;
}
void FenxiaoProductcatAddRequest::setDealerCostPercent (qlonglong dealerCostPercent) {
  this->dealerCostPercent = dealerCostPercent;
  appParams.insert("dealer_cost_percent", QString::number(dealerCostPercent));
}

QString FenxiaoProductcatAddRequest::getName() const {
  return name;
}
void FenxiaoProductcatAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong FenxiaoProductcatAddRequest::getRetailHighPercent() const {
  return retailHighPercent;
}
void FenxiaoProductcatAddRequest::setRetailHighPercent (qlonglong retailHighPercent) {
  this->retailHighPercent = retailHighPercent;
  appParams.insert("retail_high_percent", QString::number(retailHighPercent));
}

qlonglong FenxiaoProductcatAddRequest::getRetailLowPercent() const {
  return retailLowPercent;
}
void FenxiaoProductcatAddRequest::setRetailLowPercent (qlonglong retailLowPercent) {
  this->retailLowPercent = retailLowPercent;
  appParams.insert("retail_low_percent", QString::number(retailLowPercent));
}



FenxiaoProductcatAddResponse *FenxiaoProductcatAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductcatAddResponse *tmpResponse = new FenxiaoProductcatAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
