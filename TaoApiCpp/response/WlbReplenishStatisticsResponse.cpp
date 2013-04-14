#include <TaoApiCpp/response/WlbReplenishStatisticsResponse.h>

QList<WlbReplenish> WlbReplenishStatisticsResponse::getReplenishList() const {
  return replenishList;
}
void WlbReplenishStatisticsResponse::setReplenishList (QList<WlbReplenish> replenishList) {
  this->replenishList = replenishList;
}
qlonglong WlbReplenishStatisticsResponse::getTotalCount() const {
  return totalCount;
}
void WlbReplenishStatisticsResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}

void WlbReplenishStatisticsResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("replenish_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("replenish_list");
  Parser *parser;
  foreach (parser, listParser) {
    WlbReplenish tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    replenishList.append(tmp);
  }
  }
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }

}

