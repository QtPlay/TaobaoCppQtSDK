#include <TaoApiCpp/request/ProductUpdateRequest.h>

QString ProductUpdateRequest::getApiMethodName() const {
  return "taobao.product.update";
}

QString ProductUpdateRequest::getBinds() const {
  return binds;
}
void ProductUpdateRequest::setBinds (QString binds) {
  this->binds = binds;
  appParams.insert("binds", binds);
}

QString ProductUpdateRequest::getDesc() const {
  return desc;
}
void ProductUpdateRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

FileItem ProductUpdateRequest::getImage() const {
  return image;
}
void ProductUpdateRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

bool ProductUpdateRequest::getMajor() const {
  return major;
}
void ProductUpdateRequest::setMajor (bool major) {
  this->major = major;
  appParams.insert("major", major? "true": "false");
}

QString ProductUpdateRequest::getName() const {
  return name;
}
void ProductUpdateRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString ProductUpdateRequest::getNativeUnkeyprops() const {
  return nativeUnkeyprops;
}
void ProductUpdateRequest::setNativeUnkeyprops (QString nativeUnkeyprops) {
  this->nativeUnkeyprops = nativeUnkeyprops;
  appParams.insert("native_unkeyprops", nativeUnkeyprops);
}

QString ProductUpdateRequest::getOuterId() const {
  return outerId;
}
void ProductUpdateRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

QString ProductUpdateRequest::getPackingList() const {
  return packingList;
}
void ProductUpdateRequest::setPackingList (QString packingList) {
  this->packingList = packingList;
  appParams.insert("packing_list", packingList);
}

QString ProductUpdateRequest::getPrice() const {
  return price;
}
void ProductUpdateRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

qlonglong ProductUpdateRequest::getProductId() const {
  return productId;
}
void ProductUpdateRequest::setProductId (qlonglong productId) {
  this->productId = productId;
  appParams.insert("product_id", QString::number(productId));
}

QString ProductUpdateRequest::getSaleProps() const {
  return saleProps;
}
void ProductUpdateRequest::setSaleProps (QString saleProps) {
  this->saleProps = saleProps;
  appParams.insert("sale_props", saleProps);
}



ProductUpdateResponse *ProductUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductUpdateResponse *tmpResponse = new ProductUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
