#include <TaoApiCpp/request/SimbaNonsearchAlldemographicsGetRequest.h>

QString SimbaNonsearchAlldemographicsGetRequest::getApiMethodName() const {
  return "taobao.simba.nonsearch.alldemographics.get";
}



SimbaNonsearchAlldemographicsGetResponse *SimbaNonsearchAlldemographicsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaNonsearchAlldemographicsGetResponse *tmpResponse = new SimbaNonsearchAlldemographicsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
