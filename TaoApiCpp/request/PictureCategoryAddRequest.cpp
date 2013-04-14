#include <TaoApiCpp/request/PictureCategoryAddRequest.h>

QString PictureCategoryAddRequest::getApiMethodName() const {
  return "taobao.picture.category.add";
}

qlonglong PictureCategoryAddRequest::getParentId() const {
  return parentId;
}
void PictureCategoryAddRequest::setParentId (qlonglong parentId) {
  this->parentId = parentId;
  appParams.insert("parent_id", QString::number(parentId));
}

QString PictureCategoryAddRequest::getPictureCategoryName() const {
  return pictureCategoryName;
}
void PictureCategoryAddRequest::setPictureCategoryName (QString pictureCategoryName) {
  this->pictureCategoryName = pictureCategoryName;
  appParams.insert("picture_category_name", pictureCategoryName);
}



PictureCategoryAddResponse *PictureCategoryAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureCategoryAddResponse *tmpResponse = new PictureCategoryAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
