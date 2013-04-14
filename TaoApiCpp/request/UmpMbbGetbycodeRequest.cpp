#include <TaoApiCpp/request/UmpMbbGetbycodeRequest.h>

QString UmpMbbGetbycodeRequest::getApiMethodName() const {
  return "taobao.ump.mbb.getbycode";
}

QString UmpMbbGetbycodeRequest::getCode() const {
  return code;
}
void UmpMbbGetbycodeRequest::setCode (QString code) {
  this->code = code;
  appParams.insert("code", code);
}



UmpMbbGetbycodeResponse *UmpMbbGetbycodeRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpMbbGetbycodeResponse *tmpResponse = new UmpMbbGetbycodeResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
