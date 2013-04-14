#include <TaoApiCpp/request/PictureIsreferencedGetRequest.h>

QString PictureIsreferencedGetRequest::getApiMethodName() const {
  return "taobao.picture.isreferenced.get";
}

qlonglong PictureIsreferencedGetRequest::getPictureId() const {
  return pictureId;
}
void PictureIsreferencedGetRequest::setPictureId (qlonglong pictureId) {
  this->pictureId = pictureId;
  appParams.insert("picture_id", QString::number(pictureId));
}



PictureIsreferencedGetResponse *PictureIsreferencedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureIsreferencedGetResponse *tmpResponse = new PictureIsreferencedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
