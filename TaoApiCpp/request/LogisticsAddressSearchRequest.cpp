#include <TaoApiCpp/request/LogisticsAddressSearchRequest.h>

QString LogisticsAddressSearchRequest::getApiMethodName() const {
  return "taobao.logistics.address.search";
}

QString LogisticsAddressSearchRequest::getRdef() const {
  return rdef;
}
void LogisticsAddressSearchRequest::setRdef (QString rdef) {
  this->rdef = rdef;
  appParams.insert("rdef", rdef);
}



LogisticsAddressSearchResponse *LogisticsAddressSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsAddressSearchResponse *tmpResponse = new LogisticsAddressSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
