#include <TaoApiCpp/request/PictureUpdateRequest.h>

QString PictureUpdateRequest::getApiMethodName() const {
  return "taobao.picture.update";
}

QString PictureUpdateRequest::getNewName() const {
  return newName;
}
void PictureUpdateRequest::setNewName (QString newName) {
  this->newName = newName;
  appParams.insert("new_name", newName);
}

qlonglong PictureUpdateRequest::getPictureId() const {
  return pictureId;
}
void PictureUpdateRequest::setPictureId (qlonglong pictureId) {
  this->pictureId = pictureId;
  appParams.insert("picture_id", QString::number(pictureId));
}



PictureUpdateResponse *PictureUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureUpdateResponse *tmpResponse = new PictureUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
