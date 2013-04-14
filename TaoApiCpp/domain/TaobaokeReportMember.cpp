#include <TaoApiCpp/domain/TaobaokeReportMember.h>
QString TaobaokeReportMember::getAppKey() const {
  return appKey;
}
void TaobaokeReportMember::setAppKey (QString appKey) {
  this->appKey = appKey;
}

qlonglong TaobaokeReportMember::getCategoryId() const {
  return categoryId;
}
void TaobaokeReportMember::setCategoryId (qlonglong categoryId) {
  this->categoryId = categoryId;
}

QString TaobaokeReportMember::getCategoryName() const {
  return categoryName;
}
void TaobaokeReportMember::setCategoryName (QString categoryName) {
  this->categoryName = categoryName;
}

QString TaobaokeReportMember::getCommission() const {
  return commission;
}
void TaobaokeReportMember::setCommission (QString commission) {
  this->commission = commission;
}

QString TaobaokeReportMember::getCommissionRate() const {
  return commissionRate;
}
void TaobaokeReportMember::setCommissionRate (QString commissionRate) {
  this->commissionRate = commissionRate;
}

QDateTime TaobaokeReportMember::getCreateTime() const {
  return createTime;
}
void TaobaokeReportMember::setCreateTime (QDateTime createTime) {
  this->createTime = createTime;
}

qlonglong TaobaokeReportMember::getItemNum() const {
  return itemNum;
}
void TaobaokeReportMember::setItemNum (qlonglong itemNum) {
  this->itemNum = itemNum;
}

QString TaobaokeReportMember::getItemTitle() const {
  return itemTitle;
}
void TaobaokeReportMember::setItemTitle (QString itemTitle) {
  this->itemTitle = itemTitle;
}

qlonglong TaobaokeReportMember::getNumIid() const {
  return numIid;
}
void TaobaokeReportMember::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

QString TaobaokeReportMember::getOuterCode() const {
  return outerCode;
}
void TaobaokeReportMember::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
}

QString TaobaokeReportMember::getPayPrice() const {
  return payPrice;
}
void TaobaokeReportMember::setPayPrice (QString payPrice) {
  this->payPrice = payPrice;
}

QDateTime TaobaokeReportMember::getPayTime() const {
  return payTime;
}
void TaobaokeReportMember::setPayTime (QDateTime payTime) {
  this->payTime = payTime;
}

QString TaobaokeReportMember::getRealPayFee() const {
  return realPayFee;
}
void TaobaokeReportMember::setRealPayFee (QString realPayFee) {
  this->realPayFee = realPayFee;
}

QString TaobaokeReportMember::getSellerNick() const {
  return sellerNick;
}
void TaobaokeReportMember::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QString TaobaokeReportMember::getShopTitle() const {
  return shopTitle;
}
void TaobaokeReportMember::setShopTitle (QString shopTitle) {
  this->shopTitle = shopTitle;
}

qlonglong TaobaokeReportMember::getTradeId() const {
  return tradeId;
}
void TaobaokeReportMember::setTradeId (qlonglong tradeId) {
  this->tradeId = tradeId;
}

qlonglong TaobaokeReportMember::getTradeParentId() const {
  return tradeParentId;
}
void TaobaokeReportMember::setTradeParentId (qlonglong tradeParentId) {
  this->tradeParentId = tradeParentId;
}


void TaobaokeReportMember::parseResponse() {
  if (responseParser->hasName("app_key")) {
  appKey = responseParser->getStrByName("app_key");
  }
  if (responseParser->hasName("category_id")) {
  categoryId = responseParser->getNumByName("category_id");
  }
  if (responseParser->hasName("category_name")) {
  categoryName = responseParser->getStrByName("category_name");
  }
  if (responseParser->hasName("commission")) {
  commission = responseParser->getStrByName("commission");
  }
  if (responseParser->hasName("commission_rate")) {
  commissionRate = responseParser->getStrByName("commission_rate");
  }
  if (responseParser->hasName("create_time")) {
  createTime = responseParser->getDateByName("create_time");
  }
  if (responseParser->hasName("item_num")) {
  itemNum = responseParser->getNumByName("item_num");
  }
  if (responseParser->hasName("item_title")) {
  itemTitle = responseParser->getStrByName("item_title");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("outer_code")) {
  outerCode = responseParser->getStrByName("outer_code");
  }
  if (responseParser->hasName("pay_price")) {
  payPrice = responseParser->getStrByName("pay_price");
  }
  if (responseParser->hasName("pay_time")) {
  payTime = responseParser->getDateByName("pay_time");
  }
  if (responseParser->hasName("real_pay_fee")) {
  realPayFee = responseParser->getStrByName("real_pay_fee");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("shop_title")) {
  shopTitle = responseParser->getStrByName("shop_title");
  }
  if (responseParser->hasName("trade_id")) {
  tradeId = responseParser->getNumByName("trade_id");
  }
  if (responseParser->hasName("trade_parent_id")) {
  tradeParentId = responseParser->getNumByName("trade_parent_id");
  }

}

