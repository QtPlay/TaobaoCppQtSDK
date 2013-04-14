#include <TaoApiCpp/request/ItemImgUploadRequest.h>

QString ItemImgUploadRequest::getApiMethodName() const {
  return "taobao.item.img.upload";
}

qlonglong ItemImgUploadRequest::getId() const {
  return id;
}
void ItemImgUploadRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

FileItem ItemImgUploadRequest::getImage() const {
  return image;
}
void ItemImgUploadRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

bool ItemImgUploadRequest::getIsMajor() const {
  return isMajor;
}
void ItemImgUploadRequest::setIsMajor (bool isMajor) {
  this->isMajor = isMajor;
  appParams.insert("is_major", isMajor? "true": "false");
}

qlonglong ItemImgUploadRequest::getNumIid() const {
  return numIid;
}
void ItemImgUploadRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

qlonglong ItemImgUploadRequest::getPosition() const {
  return position;
}
void ItemImgUploadRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}



ItemImgUploadResponse *ItemImgUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemImgUploadResponse *tmpResponse = new ItemImgUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
