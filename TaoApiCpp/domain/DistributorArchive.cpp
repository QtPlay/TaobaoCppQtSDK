#include <TaoApiCpp/domain/DistributorArchive.h>
QString DistributorArchive::getDownLoadRatio() const {
  return downLoadRatio;
}
void DistributorArchive::setDownLoadRatio (QString downLoadRatio) {
  this->downLoadRatio = downLoadRatio;
}

QString DistributorArchive::getOrderShopRatio() const {
  return orderShopRatio;
}
void DistributorArchive::setOrderShopRatio (QString orderShopRatio) {
  this->orderShopRatio = orderShopRatio;
}

QString DistributorArchive::getUpSelfRatio() const {
  return upSelfRatio;
}
void DistributorArchive::setUpSelfRatio (QString upSelfRatio) {
  this->upSelfRatio = upSelfRatio;
}

QString DistributorArchive::getUpShopRatio() const {
  return upShopRatio;
}
void DistributorArchive::setUpShopRatio (QString upShopRatio) {
  this->upShopRatio = upShopRatio;
}

QString DistributorArchive::getUvShopRatio() const {
  return uvShopRatio;
}
void DistributorArchive::setUvShopRatio (QString uvShopRatio) {
  this->uvShopRatio = uvShopRatio;
}


void DistributorArchive::parseResponse() {
  if (responseParser->hasName("down_load_ratio")) {
  downLoadRatio = responseParser->getStrByName("down_load_ratio");
  }
  if (responseParser->hasName("order_shop_ratio")) {
  orderShopRatio = responseParser->getStrByName("order_shop_ratio");
  }
  if (responseParser->hasName("up_self_ratio")) {
  upSelfRatio = responseParser->getStrByName("up_self_ratio");
  }
  if (responseParser->hasName("up_shop_ratio")) {
  upShopRatio = responseParser->getStrByName("up_shop_ratio");
  }
  if (responseParser->hasName("uv_shop_ratio")) {
  uvShopRatio = responseParser->getStrByName("uv_shop_ratio");
  }

}

