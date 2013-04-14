#include <TaoApiCpp/request/PictureUserinfoGetRequest.h>

QString PictureUserinfoGetRequest::getApiMethodName() const {
  return "taobao.picture.userinfo.get";
}



PictureUserinfoGetResponse *PictureUserinfoGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureUserinfoGetResponse *tmpResponse = new PictureUserinfoGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
