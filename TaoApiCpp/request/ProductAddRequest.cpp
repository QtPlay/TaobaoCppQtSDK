#include <TaoApiCpp/request/ProductAddRequest.h>

QString ProductAddRequest::getApiMethodName() const {
  return "taobao.product.add";
}

QString ProductAddRequest::getBinds() const {
  return binds;
}
void ProductAddRequest::setBinds (QString binds) {
  this->binds = binds;
  appParams.insert("binds", binds);
}

qlonglong ProductAddRequest::getCid() const {
  return cid;
}
void ProductAddRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString ProductAddRequest::getCustomerProps() const {
  return customerProps;
}
void ProductAddRequest::setCustomerProps (QString customerProps) {
  this->customerProps = customerProps;
  appParams.insert("customer_props", customerProps);
}

QString ProductAddRequest::getDesc() const {
  return desc;
}
void ProductAddRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

FileItem ProductAddRequest::getImage() const {
  return image;
}
void ProductAddRequest::setImage (FileItem image) {
  this->image = image;
  fileParams.insert("image", image);
}

bool ProductAddRequest::getMajor() const {
  return major;
}
void ProductAddRequest::setMajor (bool major) {
  this->major = major;
  appParams.insert("major", major? "true": "false");
}

QDateTime ProductAddRequest::getMarketTime() const {
  return marketTime;
}
void ProductAddRequest::setMarketTime (QDateTime marketTime) {
  this->marketTime = marketTime;
  appParams.insert("market_time", marketTime.toString("yyyy-MM-dd hh:mm:ss"));
}

QString ProductAddRequest::getName() const {
  return name;
}
void ProductAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString ProductAddRequest::getOuterId() const {
  return outerId;
}
void ProductAddRequest::setOuterId (QString outerId) {
  this->outerId = outerId;
  appParams.insert("outer_id", outerId);
}

QString ProductAddRequest::getPackingList() const {
  return packingList;
}
void ProductAddRequest::setPackingList (QString packingList) {
  this->packingList = packingList;
  appParams.insert("packing_list", packingList);
}

QString ProductAddRequest::getPrice() const {
  return price;
}
void ProductAddRequest::setPrice (QString price) {
  this->price = price;
  appParams.insert("price", price);
}

QString ProductAddRequest::getPropertyAlias() const {
  return propertyAlias;
}
void ProductAddRequest::setPropertyAlias (QString propertyAlias) {
  this->propertyAlias = propertyAlias;
  appParams.insert("property_alias", propertyAlias);
}

QString ProductAddRequest::getProps() const {
  return props;
}
void ProductAddRequest::setProps (QString props) {
  this->props = props;
  appParams.insert("props", props);
}

QString ProductAddRequest::getSaleProps() const {
  return saleProps;
}
void ProductAddRequest::setSaleProps (QString saleProps) {
  this->saleProps = saleProps;
  appParams.insert("sale_props", saleProps);
}



ProductAddResponse *ProductAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ProductAddResponse *tmpResponse = new ProductAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
