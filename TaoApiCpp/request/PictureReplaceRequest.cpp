#include <TaoApiCpp/request/PictureReplaceRequest.h>

QString PictureReplaceRequest::getApiMethodName() const {
  return "taobao.picture.replace";
}

FileItem PictureReplaceRequest::getImageData() const {
  return imageData;
}
void PictureReplaceRequest::setImageData (FileItem imageData) {
  this->imageData = imageData;
  fileParams.insert("image_data", imageData);
}

qlonglong PictureReplaceRequest::getPictureId() const {
  return pictureId;
}
void PictureReplaceRequest::setPictureId (qlonglong pictureId) {
  this->pictureId = pictureId;
  appParams.insert("picture_id", QString::number(pictureId));
}



PictureReplaceResponse *PictureReplaceRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureReplaceResponse *tmpResponse = new PictureReplaceResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
