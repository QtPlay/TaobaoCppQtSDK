#include <TaoApiCpp/request/PictureUploadRequest.h>

QString PictureUploadRequest::getApiMethodName() const {
  return "taobao.picture.upload";
}

QString PictureUploadRequest::getImageInputTitle() const {
  return imageInputTitle;
}
void PictureUploadRequest::setImageInputTitle (QString imageInputTitle) {
  this->imageInputTitle = imageInputTitle;
  appParams.insert("image_input_title", imageInputTitle);
}

FileItem PictureUploadRequest::getImg() const {
  return img;
}
void PictureUploadRequest::setImg (FileItem img) {
  this->img = img;
  fileParams.insert("img", img);
}

qlonglong PictureUploadRequest::getPictureCategoryId() const {
  return pictureCategoryId;
}
void PictureUploadRequest::setPictureCategoryId (qlonglong pictureCategoryId) {
  this->pictureCategoryId = pictureCategoryId;
  appParams.insert("picture_category_id", QString::number(pictureCategoryId));
}

QString PictureUploadRequest::getTitle() const {
  return title;
}
void PictureUploadRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



PictureUploadResponse *PictureUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureUploadResponse *tmpResponse = new PictureUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
