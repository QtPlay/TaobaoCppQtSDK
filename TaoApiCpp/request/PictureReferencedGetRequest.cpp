#include <TaoApiCpp/request/PictureReferencedGetRequest.h>

QString PictureReferencedGetRequest::getApiMethodName() const {
  return "taobao.picture.referenced.get";
}

qlonglong PictureReferencedGetRequest::getPictureId() const {
  return pictureId;
}
void PictureReferencedGetRequest::setPictureId (qlonglong pictureId) {
  this->pictureId = pictureId;
  appParams.insert("picture_id", QString::number(pictureId));
}



PictureReferencedGetResponse *PictureReferencedGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureReferencedGetResponse *tmpResponse = new PictureReferencedGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
