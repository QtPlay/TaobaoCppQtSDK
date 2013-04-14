#include <TaoApiCpp/request/SimbaNonsearchAllplacesGetRequest.h>

QString SimbaNonsearchAllplacesGetRequest::getApiMethodName() const {
  return "taobao.simba.nonsearch.allplaces.get";
}



SimbaNonsearchAllplacesGetResponse *SimbaNonsearchAllplacesGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaNonsearchAllplacesGetResponse *tmpResponse = new SimbaNonsearchAllplacesGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
