#include <TaoApiCpp/domain/WidgetSku.h>
QString WidgetSku::getPrice() const {
  return price;
}
void WidgetSku::setPrice (QString price) {
  this->price = price;
}

QString WidgetSku::getProps() const {
  return props;
}
void WidgetSku::setProps (QString props) {
  this->props = props;
}

qlonglong WidgetSku::getQuantity() const {
  return quantity;
}
void WidgetSku::setQuantity (qlonglong quantity) {
  this->quantity = quantity;
}

qlonglong WidgetSku::getSkuId() const {
  return skuId;
}
void WidgetSku::setSkuId (qlonglong skuId) {
  this->skuId = skuId;
}


void WidgetSku::parseResponse() {
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("props")) {
  props = responseParser->getStrByName("props");
  }
  if (responseParser->hasName("quantity")) {
  quantity = responseParser->getNumByName("quantity");
  }
  if (responseParser->hasName("sku_id")) {
  skuId = responseParser->getNumByName("sku_id");
  }

}

