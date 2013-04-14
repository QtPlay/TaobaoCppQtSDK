#include <TaoApiCpp/request/RoductSpecAddRequest.h>

QString RoductSpecAddRequest::getApiMethodName() const {
  return "tmall.product.spec.add";
}

QString RoductSpecAddRequest::getBarcode() const {
  return barcode;
}
void RoductSpecAddRequest::setBarcode (QString barcode) {
  this->barcode = barcode;
  appParams.insert("barcode", barcode);
}

QString RoductSpecAddRequest::getCertifiedPicStr() const {
  return certifiedPicStr;
}
void RoductSpecAddRequest::setCertifiedPicStr (QString certifiedPicStr) {
  this->certifiedPicStr = certifiedPicStr;
  appParams.insert("certified_pic_str", certifiedPicStr);
}

FileItem RoductSpecAddRequest::getImage() const {
  return image;
}
void RoductSpecAddRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

QDateTime RoductSpecAddRequest::getMarketTime() const {
  return marketTime;
}
void RoductSpecAddRequest::setMarketTime (QDateTime marketTime) {
  this->marketTime = marketTime;
  appParams.insert("market_time", marketTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString RoductSpecAddRequest::getProductCode() const {
  return productCode;
}
void RoductSpecAddRequest::setProductCode (QString productCode) {
  this->productCode = productCode;
  appParams.insert("product_code", productCode);
}

qlonglong RoductSpecAddRequest::getProductId() const {
  return productId;
}
void RoductSpecAddRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString RoductSpecAddRequest::getSpecProps() const {
  return specProps;
}
void RoductSpecAddRequest::setSpecProps (QString specProps) {
  this->specProps = specProps;
  appParams.insert("spec_props", specProps);
}

QString RoductSpecAddRequest::getSpecPropsAlias() const {
  return specPropsAlias;
}
void RoductSpecAddRequest::setSpecPropsAlias (QString specPropsAlias) {
  this->specPropsAlias = specPropsAlias;
  appParams.insert("spec_props_alias", specPropsAlias);
}



RoductSpecAddResponse *RoductSpecAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RoductSpecAddResponse *tmpResponse = new RoductSpecAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
