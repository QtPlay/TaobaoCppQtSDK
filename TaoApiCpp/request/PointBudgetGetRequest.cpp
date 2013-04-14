#include <TaoApiCpp/request/PointBudgetGetRequest.h>

QString PointBudgetGetRequest::getApiMethodName() const {
  return "alipay.point.budget.get";
}

QString PointBudgetGetRequest::getAuthToken() const {
  return authToken;
}
void PointBudgetGetRequest::setAuthToken (QString authToken) {
  this->authToken = authToken;
  appParams.insert("auth_token", authToken);
}



PointBudgetGetResponse *PointBudgetGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PointBudgetGetResponse *tmpResponse = new PointBudgetGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
