#include <TaoApiCpp/request/ProductPropimgUploadRequest.h>

QString ProductPropimgUploadRequest::getApiMethodName() const {
  return "taobao.product.propimg.upload";
}

qlonglong ProductPropimgUploadRequest::getId() const {
  return id;
}
void ProductPropimgUploadRequest::setId (qlonglong id) {
  this->id = id;
  appParams.insert("id", QString::number(id));
}

FileItem ProductPropimgUploadRequest::getImage() const {
  return image;
}
void ProductPropimgUploadRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

qlonglong ProductPropimgUploadRequest::getPosition() const {
  return position;
}
void ProductPropimgUploadRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}

qlonglong ProductPropimgUploadRequest::getProductId() const {
  return productId;
}
void ProductPropimgUploadRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString ProductPropimgUploadRequest::getProps() const {
  return props;
}
void ProductPropimgUploadRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}



ProductPropimgUploadResponse *ProductPropimgUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductPropimgUploadResponse *tmpResponse = new ProductPropimgUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
