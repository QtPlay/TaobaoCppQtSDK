#include <TaoApiCpp/request/PictureCategoryGetRequest.h>

QString PictureCategoryGetRequest::getApiMethodName() const {
  return "taobao.picture.category.get";
}

QDateTime PictureCategoryGetRequest::getModifiedTime() const {
  return modifiedTime;
}
void PictureCategoryGetRequest::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
  appParams.insert("modified_time", modifiedTime.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong PictureCategoryGetRequest::getParentId() const {
  return parentId;
}
void PictureCategoryGetRequest::setParentId (qlonglong parentId) {
  this->parentId = parentId;
  appParams.insert("parent_id", QString::number(parentId));
}

qlonglong PictureCategoryGetRequest::getPictureCategoryId() const {
  return pictureCategoryId;
}
void PictureCategoryGetRequest::setPictureCategoryId (qlonglong pictureCategoryId) {
  this->pictureCategoryId = pictureCategoryId;
  appParams.insert("picture_category_id", QString::number(pictureCategoryId));
}

QString PictureCategoryGetRequest::getPictureCategoryName() const {
  return pictureCategoryName;
}
void PictureCategoryGetRequest::setPictureCategoryName (QString pictureCategoryName) {
  this->pictureCategoryName = pictureCategoryName;
  appParams.insert("picture_category_name", pictureCategoryName);
}

QString PictureCategoryGetRequest::getType() const {
  return type;
}
void PictureCategoryGetRequest::setType (QString type) {
  this->type = type;
  appParams.insert("type", type);
}



PictureCategoryGetResponse *PictureCategoryGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureCategoryGetResponse *tmpResponse = new PictureCategoryGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
