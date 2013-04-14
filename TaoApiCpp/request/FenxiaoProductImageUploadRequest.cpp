#include <TaoApiCpp/request/FenxiaoProductImageUploadRequest.h>

QString FenxiaoProductImageUploadRequest::getApiMethodName() const {
  return "taobao.fenxiao.product.image.upload";
}

FileItem FenxiaoProductImageUploadRequest::getImage() const {
  return image;
}
void FenxiaoProductImageUploadRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

QString FenxiaoProductImageUploadRequest::getPicPath() const {
  return picPath;
}
void FenxiaoProductImageUploadRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

qlonglong FenxiaoProductImageUploadRequest::getPosition() const {
  return position;
}
void FenxiaoProductImageUploadRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}

qlonglong FenxiaoProductImageUploadRequest::getProductId() const {
  return productId;
}
void FenxiaoProductImageUploadRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString FenxiaoProductImageUploadRequest::getProperties() const {
  return properties;
}
void FenxiaoProductImageUploadRequest::setProperties (QString properties) {
  this->properties = properties;
  appParams.insert("properties", properties);
}



FenxiaoProductImageUploadResponse *FenxiaoProductImageUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  FenxiaoProductImageUploadResponse *tmpResponse = new FenxiaoProductImageUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
