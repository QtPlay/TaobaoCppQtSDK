#include <TaoApiCpp/request/UmpMbbGetbyidRequest.h>

QString UmpMbbGetbyidRequest::getApiMethodName() const {
  return "taobao.ump.mbb.getbyid";
}

qlonglong UmpMbbGetbyidRequest::getId() const {
  return id;
}
void UmpMbbGetbyidRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}



UmpMbbGetbyidResponse *UmpMbbGetbyidRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  UmpMbbGetbyidResponse *tmpResponse = new UmpMbbGetbyidResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
