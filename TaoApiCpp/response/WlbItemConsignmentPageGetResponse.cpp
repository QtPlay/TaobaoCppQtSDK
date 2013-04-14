#include <TaoApiCpp/response/WlbItemConsignmentPageGetResponse.h>

qlonglong WlbItemConsignmentPageGetResponse::getTotalCount() const {
  return totalCount;
}
void WlbItemConsignmentPageGetResponse::setTotalCount (qlonglong totalCount) {
  this->totalCount = totalCount;
}
QList<WlbConsignMent> WlbItemConsignmentPageGetResponse::getWlbConsignMents() const {
  return wlbConsignMents;
}
void WlbItemConsignmentPageGetResponse::setWlbConsignMents (QList<WlbConsignMent> wlbConsignMents) {
  this->wlbConsignMents = wlbConsignMents;
}

void WlbItemConsignmentPageGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("total_count")) {
  totalCount = responseParser->getNumByName("total_count");
  }
  if (responseParser->hasName("wlb_consign_ments")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("wlb_consign_ments");
  Parser *parser;
  foreach (parser, listParser) {
    WlbConsignMent tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    wlbConsignMents.append(tmp);
  }
  }

}

