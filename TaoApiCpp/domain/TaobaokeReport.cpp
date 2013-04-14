#include <TaoApiCpp/domain/TaobaokeReport.h>
QList<TaobaokeReportMember> TaobaokeReport::getTaobaokeReportMembers() const {
  return taobaokeReportMembers;
}
void TaobaokeReport::setTaobaokeReportMembers (QList<TaobaokeReportMember> taobaokeReportMembers) {
  this->taobaokeReportMembers = taobaokeReportMembers;
}

qlonglong TaobaokeReport::getTotalResults() const {
  return totalResults;
}
void TaobaokeReport::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}


void TaobaokeReport::parseResponse() {
  if (responseParser->hasName("taobaoke_report_members")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("taobaoke_report_members");
  Parser *parser;
  foreach (parser, listParser) {
    TaobaokeReportMember tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    taobaokeReportMembers.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

