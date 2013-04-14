#include <TaoApiCpp/request/PictureGetRequest.h>

QString PictureGetRequest::getApiMethodName() const {
  return "taobao.picture.get";
}

QString PictureGetRequest::getDeleted() const {
  return deleted;
}
void PictureGetRequest::setDeleted (QString deleted) {
  this->deleted = deleted;
  appParams.insert("deleted", deleted);
}

QDateTime PictureGetRequest::getEndDate() const {
  return endDate;
}
void PictureGetRequest::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QDateTime PictureGetRequest::getModifiedTime() const {
  return modifiedTime;
}
void PictureGetRequest::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
  appParams.insert("modified_time", modifiedTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString PictureGetRequest::getOrderBy() const {
  return orderBy;
}
void PictureGetRequest::setOrderBy (QString orderBy) {
  this->orderBy = orderBy;
  appParams.insert("order_by", orderBy);
}

qlonglong PictureGetRequest::getPageNo() const {
  return pageNo;
}
void PictureGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong PictureGetRequest::getPageSize() const {
  return pageSize;
}
void PictureGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

qlonglong PictureGetRequest::getPictureCategoryId() const {
  return pictureCategoryId;
}
void PictureGetRequest::setPictureCategoryId (qlonglong pictureCategoryId) {
  this->pictureCategoryId = pictureCategoryId;
  appParams.insert("picture_category_id", QString::number(pictureCategoryId));
}

qlonglong PictureGetRequest::getPictureId() const {
  return pictureId;
}
void PictureGetRequest::setPictureId (qlonglong pictureId) {
  this->pictureId = pictureId;
  appParams.insert("picture_id", QString::number(pictureId));
}

QDateTime PictureGetRequest::getStartDate() const {
  return startDate;
}
void PictureGetRequest::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString PictureGetRequest::getTitle() const {
  return title;
}
void PictureGetRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



PictureGetResponse *PictureGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  PictureGetResponse *tmpResponse = new PictureGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
