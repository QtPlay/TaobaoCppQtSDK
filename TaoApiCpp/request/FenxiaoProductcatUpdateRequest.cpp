#include <TaoApiCpp/request/FenxiaoProductcatUpdateRequest.h>

QString FenxiaoProductcatUpdateRequest::getApiMethodName() const {
  return "taobao.fenxiao.productcat.update";
}

qlonglong FenxiaoProductcatUpdateRequest::getAgentCostPercent() const {
  return agentCostPercent;
}
void FenxiaoProductcatUpdateRequest::setAgentCostPercent (qlonglong agentCostPercent) {
  this->agentCostPercent = agentCostPercent;
  appParams.insert("agent_cost_percent", QString::number(agentCostPercent));
}

qlonglong FenxiaoProductcatUpdateRequest::getDealerCostPercent() const {
  return dealerCostPercent;
}
void FenxiaoProductcatUpdateRequest::setDealerCostPercent (qlonglong dealerCostPercent) {
  this->dealerCostPercent = dealerCostPercent;
  appParams.insert("dealer_cost_percent", QString::number(dealerCostPercent));
}

QString FenxiaoProductcatUpdateRequest::getName() const {
  return name;
}
void FenxiaoProductcatUpdateRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

qlonglong FenxiaoProductcatUpdateRequest::getProductLineId() const {
  return productLineId;
}
void FenxiaoProductcatUpdateRequest::setProductLineId (qlonglong productLineId) {
  this->productLineId = productLineId;
  appParams.insert("product_line_id", QString::number(productLineId));
}

qlonglong FenxiaoProductcatUpdateRequest::getRetailHighPercent() const {
  return retailHighPercent;
}
void FenxiaoProductcatUpdateRequest::setRetailHighPercent (qlonglong retailHighPercent) {
  this->retailHighPercent = retailHighPercent;
  appParams.insert("retail_high_percent", QString::number(retailHighPercent));
}

qlonglong FenxiaoProductcatUpdateRequest::getRetailLowPercent() const {
  return retailLowPercent;
}
void FenxiaoProductcatUpdateRequest::setRetailLowPercent (qlonglong retailLowPercent) {
  this->retailLowPercent = retailLowPercent;
  appParams.insert("retail_low_percent", QString::number(retailLowPercent));
}



FenxiaoProductcatUpdateResponse *FenxiaoProductcatUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductcatUpdateResponse *tmpResponse = new FenxiaoProductcatUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
