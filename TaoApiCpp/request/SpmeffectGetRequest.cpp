#include <TaoApiCpp/request/SpmeffectGetRequest.h>

QString SpmeffectGetRequest::getApiMethodName() const {
  return "taobao.spmeffect.get";
}

QString SpmeffectGetRequest::getDate() const {
  return date;
}
void SpmeffectGetRequest::setDate (QString date) {
  this->date = date;
  appParams.insert("date", date);
}

bool SpmeffectGetRequest::getModuleDetail() const {
  return moduleDetail;
}
void SpmeffectGetRequest::setModuleDetail (bool moduleDetail) {
  this->moduleDetail = moduleDetail;
  appParams.insert("module_detail", moduleDetail? "true": "false");
}

bool SpmeffectGetRequest::getPageDetail() const {
  return pageDetail;
}
void SpmeffectGetRequest::setPageDetail (bool pageDetail) {
  this->pageDetail = pageDetail;
  appParams.insert("page_detail", pageDetail? "true": "false");
}



SpmeffectGetResponse *SpmeffectGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SpmeffectGetResponse *tmpResponse = new SpmeffectGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
