#include <TaoApiCpp/request/ProductImgUploadRequest.h>

QString ProductImgUploadRequest::getApiMethodName() const {
  return "taobao.product.img.upload";
}

qlonglong ProductImgUploadRequest::getId() const {
  return id;
}
void ProductImgUploadRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

FileItem ProductImgUploadRequest::getImage() const {
  return image;
}
void ProductImgUploadRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

bool ProductImgUploadRequest::getIsMajor() const {
  return isMajor;
}
void ProductImgUploadRequest::setIsMajor (bool isMajor) {
  this->isMajor = isMajor;
  appParams.insert("is_major", isMajor? "true": "false");
}

qlonglong ProductImgUploadRequest::getPosition() const {
  return position;
}
void ProductImgUploadRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}

qlonglong ProductImgUploadRequest::getProductId() const {
  return productId;
}
void ProductImgUploadRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}



ProductImgUploadResponse *ProductImgUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductImgUploadResponse *tmpResponse = new ProductImgUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
