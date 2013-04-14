#include <TaoApiCpp/request/ItemPropimgUploadRequest.h>

QString ItemPropimgUploadRequest::getApiMethodName() const {
  return "taobao.item.propimg.upload";
}

qlonglong ItemPropimgUploadRequest::getId() const {
  return id;
}
void ItemPropimgUploadRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

FileItem ItemPropimgUploadRequest::getImage() const {
  return image;
}
void ItemPropimgUploadRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

qlonglong ItemPropimgUploadRequest::getNumIid() const {
  return numIid;
}
void ItemPropimgUploadRequest::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
  appParams.insert("num_iid", QString::number(numIid));
}

qlonglong ItemPropimgUploadRequest::getPosition() const {
  return position;
}
void ItemPropimgUploadRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}

QString ItemPropimgUploadRequest::getProperties() const {
  return properties;
}
void ItemPropimgUploadRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}



ItemPropimgUploadResponse *ItemPropimgUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItemPropimgUploadResponse *tmpResponse = new ItemPropimgUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
