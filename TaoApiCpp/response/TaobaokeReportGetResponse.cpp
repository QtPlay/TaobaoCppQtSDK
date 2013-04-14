#include <TaoApiCpp/response/TaobaokeReportGetResponse.h>

TaobaokeReport TaobaokeReportGetResponse::getTaobaokeReport() const {
  return taobaokeReport;
}
void TaobaokeReportGetResponse::setTaobaokeReport (TaobaokeReport taobaokeReport) {
  this->taobaokeReport = taobaokeReport;
}

void TaobaokeReportGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_report")) {
  taobaokeReport.setParser(responseParser->getObjectParser("taobaoke_report"));
  taobaokeReport.parseResponse();
  }

}

