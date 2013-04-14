#include <TaoApiCpp/response/FenxiaoDistributorProcuctStaticGetResponse.h>

QList<DistributorItemFlow> FenxiaoDistributorProcuctStaticGetResponse::getDistributorItemFlows() const {
  return distributorItemFlows;
}
void FenxiaoDistributorProcuctStaticGetResponse::setDistributorItemFlows (QList<DistributorItemFlow> distributorItemFlows) {
  this->distributorItemFlows = distributorItemFlows;
}
bool FenxiaoDistributorProcuctStaticGetResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoDistributorProcuctStaticGetResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoDistributorProcuctStaticGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("distributor_item_flows")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("distributor_item_flows");
  Parser *parser;
  foreach (parser, listParser) {
    DistributorItemFlow tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    distributorItemFlows.append(tmp);
  }
  }
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

