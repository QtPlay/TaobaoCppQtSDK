#include <TaoApiCpp/request/FenxiaoGradesGetRequest.h>

QString FenxiaoGradesGetRequest::getApiMethodName() const {
  return "taobao.fenxiao.grades.get";
}



FenxiaoGradesGetResponse *FenxiaoGradesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoGradesGetResponse *tmpResponse = new FenxiaoGradesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
