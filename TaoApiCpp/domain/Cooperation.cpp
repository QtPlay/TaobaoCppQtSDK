#include <TaoApiCpp/domain/Cooperation.h>
QList<QString> Cooperation::getAuthPayway() const {
  return authPayway;
}
void Cooperation::setAuthPayway (QList<QString> authPayway) {
  this->authPayway = authPayway;
}

qlonglong Cooperation::getCooperateId() const {
  return cooperateId;
}
void Cooperation::setCooperateId (qlonglong cooperateId) {
  this->cooperateId = cooperateId;
}

qlonglong Cooperation::getDistributorId() const {
  return distributorId;
}
void Cooperation::setDistributorId (qlonglong distributorId) {
  this->distributorId = distributorId;
}

QString Cooperation::getDistributorNick() const {
  return distributorNick;
}
void Cooperation::setDistributorNick (QString distributorNick) {
  this->distributorNick = distributorNick;
}

QDateTime Cooperation::getEndDate() const {
  return endDate;
}
void Cooperation::setEndDate (QDateTime endDate) {
  this->endDate = endDate;
}

qlonglong Cooperation::getGradeId() const {
  return gradeId;
}
void Cooperation::setGradeId (qlonglong gradeId) {
  this->gradeId = gradeId;
}

QString Cooperation::getProductLine() const {
  return productLine;
}
void Cooperation::setProductLine (QString productLine) {
  this->productLine = productLine;
}

QDateTime Cooperation::getStartDate() const {
  return startDate;
}
void Cooperation::setStartDate (QDateTime startDate) {
  this->startDate = startDate;
}

QString Cooperation::getStatus() const {
  return status;
}
void Cooperation::setStatus (QString status) {
  this->status = status;
}

qlonglong Cooperation::getSupplierId() const {
  return supplierId;
}
void Cooperation::setSupplierId (qlonglong supplierId) {
  this->supplierId = supplierId;
}

QString Cooperation::getSupplierNick() const {
  return supplierNick;
}
void Cooperation::setSupplierNick (QString supplierNick) {
  this->supplierNick = supplierNick;
}

QString Cooperation::getTradeType() const {
  return tradeType;
}
void Cooperation::setTradeType (QString tradeType) {
  this->tradeType = tradeType;
}


void Cooperation::parseResponse() {
  if (responseParser->hasName("auth_payway")) {
  authPayway = responseParser->getListStrByName("auth_payway");
  }
  if (responseParser->hasName("cooperate_id")) {
  cooperateId = responseParser->getNumByName("cooperate_id");
  }
  if (responseParser->hasName("distributor_id")) {
  distributorId = responseParser->getNumByName("distributor_id");
  }
  if (responseParser->hasName("distributor_nick")) {
  distributorNick = responseParser->getStrByName("distributor_nick");
  }
  if (responseParser->hasName("end_date")) {
  endDate = responseParser->getDateByName("end_date");
  }
  if (responseParser->hasName("grade_id")) {
  gradeId = responseParser->getNumByName("grade_id");
  }
  if (responseParser->hasName("product_line")) {
  productLine = responseParser->getStrByName("product_line");
  }
  if (responseParser->hasName("start_date")) {
  startDate = responseParser->getDateByName("start_date");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("supplier_id")) {
  supplierId = responseParser->getNumByName("supplier_id");
  }
  if (responseParser->hasName("supplier_nick")) {
  supplierNick = responseParser->getStrByName("supplier_nick");
  }
  if (responseParser->hasName("trade_type")) {
  tradeType = responseParser->getStrByName("trade_type");
  }

}

