#include <TaoApiCpp/request/PictureDeleteRequest.h>

QString PictureDeleteRequest::getApiMethodName() const {
  return "taobao.picture.delete";
}

QString PictureDeleteRequest::getPictureIds() const {
  return pictureIds;
}
void PictureDeleteRequest::setPictureIds (QString pictureIds) {
  this->pictureIds = pictureIds;
  appParams.insert("picture_ids", pictureIds);
}



PictureDeleteResponse *PictureDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureDeleteResponse *tmpResponse = new PictureDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
