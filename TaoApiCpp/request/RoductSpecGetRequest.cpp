#include <TaoApiCpp/request/RoductSpecGetRequest.h>

QString RoductSpecGetRequest::getApiMethodName() const {
  return "tmall.product.spec.get";
}

qlonglong RoductSpecGetRequest::getSpecId() const {
  return specId;
}
void RoductSpecGetRequest::setSpecId (qlonglong specId) {
  this->specId = specId;
  appParams.insert("spec_id", QString::number(specId));
}



RoductSpecGetResponse *RoductSpecGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RoductSpecGetResponse *tmpResponse = new RoductSpecGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
