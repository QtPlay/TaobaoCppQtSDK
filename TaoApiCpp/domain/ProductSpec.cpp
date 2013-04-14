#include <TaoApiCpp/domain/ProductSpec.h>
QString ProductSpec::getBarcode() const {
  return barcode;
}
void ProductSpec::setBarcode (QString barcode) {
  this->barcode = barcode;
}

qlonglong ProductSpec::getBrandId() const {
  return brandId;
}
void ProductSpec::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
}

QList<CertPicInfo> ProductSpec::getCertifiedPics() const {
  return certifiedPics;
}
void ProductSpec::setCertifiedPics (QList<CertPicInfo> certifiedPics) {
  this->certifiedPics = certifiedPics;
}

QString ProductSpec::getCustomePropsName() const {
  return customePropsName;
}
void ProductSpec::setCustomePropsName (QString customePropsName) {
  this->customePropsName = customePropsName;
}

QDateTime ProductSpec::getMarketTime() const {
  return marketTime;
}
void ProductSpec::setMarketTime (QDateTime marketTime) {
  this->marketTime = marketTime;
}

QString ProductSpec::getPicUrl() const {
  return picUrl;
}
void ProductSpec::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

QString ProductSpec::getProductCode() const {
  return productCode;
}
void ProductSpec::setProductCode (QString productCode) {
  this->productCode = productCode;
}

qlonglong ProductSpec::getProductId() const {
  return productId;
}
void ProductSpec::setProductId (qlonglong productId) {
  this->productId = productId;
}

qlonglong ProductSpec::getSpecId() const {
  return specId;
}
void ProductSpec::setSpecId (qlonglong specId) {
  this->specId = specId;
}

QString ProductSpec::getSpecProps() const {
  return specProps;
}
void ProductSpec::setSpecProps (QString specProps) {
  this->specProps = specProps;
}

QString ProductSpec::getSpecPropsAlias() const {
  return specPropsAlias;
}
void ProductSpec::setSpecPropsAlias (QString specPropsAlias) {
  this->specPropsAlias = specPropsAlias;
}

qlonglong ProductSpec::getStatus() const {
  return status;
}
void ProductSpec::setStatus (qlonglong status) {
  this->status = status;
}


void ProductSpec::parseResponse() {
  if (responseParser->hasName("barcode")) {
  barcode = responseParser->getStrByName("barcode");
  }
  if (responseParser->hasName("brand_id")) {
  brandId = responseParser->getNumByName("brand_id");
  }
  if (responseParser->hasName("certified_pics")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("certified_pics");
  Parser *parser;
  foreach (parser, listParser) {
    CertPicInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    certifiedPics.append(tmp);
  }
  }
  if (responseParser->hasName("custome_props_name")) {
  customePropsName = responseParser->getStrByName("custome_props_name");
  }
  if (responseParser->hasName("market_time")) {
  marketTime = responseParser->getDateByName("market_time");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("product_code")) {
  productCode = responseParser->getStrByName("product_code");
  }
  if (responseParser->hasName("product_id")) {
  productId = responseParser->getNumByName("product_id");
  }
  if (responseParser->hasName("spec_id")) {
  specId = responseParser->getNumByName("spec_id");
  }
  if (responseParser->hasName("spec_props")) {
  specProps = responseParser->getStrByName("spec_props");
  }
  if (responseParser->hasName("spec_props_alias")) {
  specPropsAlias = responseParser->getStrByName("spec_props_alias");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getNumByName("status");
  }

}

