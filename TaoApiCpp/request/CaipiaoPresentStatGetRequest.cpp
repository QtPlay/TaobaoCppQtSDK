#include <TaoApiCpp/request/CaipiaoPresentStatGetRequest.h>

QString CaipiaoPresentStatGetRequest::getApiMethodName() const {
  return "taobao.caipiao.present.stat.get";
}

qlonglong CaipiaoPresentStatGetRequest::getDays() const {
  return days;
}
void CaipiaoPresentStatGetRequest::setDays (qlonglong days) {
  this->days = days;
  appParams.insert("days", QString::number(days));
}



CaipiaoPresentStatGetResponse *CaipiaoPresentStatGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  CaipiaoPresentStatGetResponse *tmpResponse = new CaipiaoPresentStatGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
