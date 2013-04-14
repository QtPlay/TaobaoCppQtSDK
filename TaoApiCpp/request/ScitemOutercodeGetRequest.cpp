#include <TaoApiCpp/request/ScitemOutercodeGetRequest.h>

QString ScitemOutercodeGetRequest::getApiMethodName() const {
  return "taobao.scitem.outercode.get";
}

QString ScitemOutercodeGetRequest::getOuterCode() const {
  return outerCode;
}
void ScitemOutercodeGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}



ScitemOutercodeGetResponse *ScitemOutercodeGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ScitemOutercodeGetResponse *tmpResponse = new ScitemOutercodeGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
