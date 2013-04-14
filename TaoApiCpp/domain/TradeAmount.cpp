#include <TaoApiCpp/domain/TradeAmount.h>
QString TradeAmount::getAlipayNo() const {
  return alipayNo;
}
void TradeAmount::setAlipayNo (QString alipayNo) {
  this->alipayNo = alipayNo;
}

QString TradeAmount::getBuyerCodFee() const {
  return buyerCodFee;
}
void TradeAmount::setBuyerCodFee (QString buyerCodFee) {
  this->buyerCodFee = buyerCodFee;
}

qlonglong TradeAmount::getBuyerObtainPointFee() const {
  return buyerObtainPointFee;
}
void TradeAmount::setBuyerObtainPointFee (qlonglong buyerObtainPointFee) {
  this->buyerObtainPointFee = buyerObtainPointFee;
}

QString TradeAmount::getCodFee() const {
  return codFee;
}
void TradeAmount::setCodFee (QString codFee) {
  this->codFee = codFee;
}

QString TradeAmount::getCommissionFee() const {
  return commissionFee;
}
void TradeAmount::setCommissionFee (QString commissionFee) {
  this->commissionFee = commissionFee;
}

QDateTime TradeAmount::getCreated() const {
  return created;
}
void TradeAmount::setCreated (QDateTime created) {
  this->created = created;
}

QDateTime TradeAmount::getEndTime() const {
  return endTime;
}
void TradeAmount::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

QString TradeAmount::getExpressAgencyFee() const {
  return expressAgencyFee;
}
void TradeAmount::setExpressAgencyFee (QString expressAgencyFee) {
  this->expressAgencyFee = expressAgencyFee;
}

QList<OrderAmount> TradeAmount::getOrderAmounts() const {
  return orderAmounts;
}
void TradeAmount::setOrderAmounts (QList<OrderAmount> orderAmounts) {
  this->orderAmounts = orderAmounts;
}

QDateTime TradeAmount::getPayTime() const {
  return payTime;
}
void TradeAmount::setPayTime (QDateTime payTime) {
  this->payTime = payTime;
}

QString TradeAmount::getPayment() const {
  return payment;
}
void TradeAmount::setPayment (QString payment) {
  this->payment = payment;
}

QString TradeAmount::getPostFee() const {
  return postFee;
}
void TradeAmount::setPostFee (QString postFee) {
  this->postFee = postFee;
}

QList<PromotionDetail> TradeAmount::getPromotionDetails() const {
  return promotionDetails;
}
void TradeAmount::setPromotionDetails (QList<PromotionDetail> promotionDetails) {
  this->promotionDetails = promotionDetails;
}

QString TradeAmount::getSellerCodFee() const {
  return sellerCodFee;
}
void TradeAmount::setSellerCodFee (QString sellerCodFee) {
  this->sellerCodFee = sellerCodFee;
}

qlonglong TradeAmount::getTid() const {
  return tid;
}
void TradeAmount::setTid (qlonglong tid) {
  this->tid = tid;
}

QString TradeAmount::getTotalFee() const {
  return totalFee;
}
void TradeAmount::setTotalFee (QString totalFee) {
  this->totalFee = totalFee;
}


void TradeAmount::parseResponse() {
  if (responseParser->hasName("alipay_no")) {
  alipayNo = responseParser->getStrByName("alipay_no");
  }
  if (responseParser->hasName("buyer_cod_fee")) {
  buyerCodFee = responseParser->getStrByName("buyer_cod_fee");
  }
  if (responseParser->hasName("buyer_obtain_point_fee")) {
  buyerObtainPointFee = responseParser->getNumByName("buyer_obtain_point_fee");
  }
  if (responseParser->hasName("cod_fee")) {
  codFee = responseParser->getStrByName("cod_fee");
  }
  if (responseParser->hasName("commission_fee")) {
  commissionFee = responseParser->getStrByName("commission_fee");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("express_agency_fee")) {
  expressAgencyFee = responseParser->getStrByName("express_agency_fee");
  }
  if (responseParser->hasName("order_amounts")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("order_amounts");
  Parser *parser;
  foreach (parser, listParser) {
    OrderAmount tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    orderAmounts.append(tmp);
  }
  }
  if (responseParser->hasName("pay_time")) {
  payTime = responseParser->getDateByName("pay_time");
  }
  if (responseParser->hasName("payment")) {
  payment = responseParser->getStrByName("payment");
  }
  if (responseParser->hasName("post_fee")) {
  postFee = responseParser->getStrByName("post_fee");
  }
  if (responseParser->hasName("promotion_details")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("promotion_details");
  Parser *parser;
  foreach (parser, listParser) {
    PromotionDetail tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    promotionDetails.append(tmp);
  }
  }
  if (responseParser->hasName("seller_cod_fee")) {
  sellerCodFee = responseParser->getStrByName("seller_cod_fee");
  }
  if (responseParser->hasName("tid")) {
  tid = responseParser->getNumByName("tid");
  }
  if (responseParser->hasName("total_fee")) {
  totalFee = responseParser->getStrByName("total_fee");
  }

}

