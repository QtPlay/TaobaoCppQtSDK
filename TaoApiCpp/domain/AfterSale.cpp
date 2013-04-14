#include <TaoApiCpp/domain/AfterSale.h>
qlonglong AfterSale::getAfterSaleId() const {
  return afterSaleId;
}
void AfterSale::setAfterSaleId (qlonglong afterSaleId) {
  this->afterSaleId = afterSaleId;
}

QString AfterSale::getAfterSaleName() const {
  return afterSaleName;
}
void AfterSale::setAfterSaleName (QString afterSaleName) {
  this->afterSaleName = afterSaleName;
}

QString AfterSale::getAfterSalePath() const {
  return afterSalePath;
}
void AfterSale::setAfterSalePath (QString afterSalePath) {
  this->afterSalePath = afterSalePath;
}


void AfterSale::parseResponse() {
  if (responseParser->hasName("after_sale_id")) {
  afterSaleId = responseParser->getNumByName("after_sale_id");
  }
  if (responseParser->hasName("after_sale_name")) {
  afterSaleName = responseParser->getStrByName("after_sale_name");
  }
  if (responseParser->hasName("after_sale_path")) {
  afterSalePath = responseParser->getStrByName("after_sale_path");
  }

}

