#include <TaoApiCpp/request/PictureCategoryUpdateRequest.h>

QString PictureCategoryUpdateRequest::getApiMethodName() const {
  return "taobao.picture.category.update";
}

qlonglong PictureCategoryUpdateRequest::getCategoryId() const {
  return categoryId;
}
void PictureCategoryUpdateRequest::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
  appParams.insert("category_id", QString::number(categoryId));
}

QString PictureCategoryUpdateRequest::getCategoryName() const {
  return categoryName;
}
void PictureCategoryUpdateRequest::setCategoryName (QString categoryName) {
  this->categoryName = categoryName;
  appParams.insert("category_name", categoryName);
}

qlonglong PictureCategoryUpdateRequest::getParentId() const {
  return parentId;
}
void PictureCategoryUpdateRequest::setParentId (qlonglong parentId) {
  this->parentId = parentId;
  appParams.insert("parent_id", QString::number(parentId));
}



PictureCategoryUpdateResponse *PictureCategoryUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureCategoryUpdateResponse *tmpResponse = new PictureCategoryUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
