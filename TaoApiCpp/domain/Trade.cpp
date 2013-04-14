#include <TaoApiCpp/domain/Trade.h>
QString Trade::getAdjustFee() const {
  return adjustFee;
}
void Trade::setAdjustFee (QString adjustFee) {
  this->adjustFee = adjustFee;
}

qlonglong Trade::getAlipayId() const {
  return alipayId;
}
void Trade::setAlipayId (qlonglong alipayId) {
  this->alipayId = alipayId;
}

QString Trade::getAlipayNo() const {
  return alipayNo;
}
void Trade::setAlipayNo (QString alipayNo) {
  this->alipayNo = alipayNo;
}

QString Trade::getAlipayUrl() const {
  return alipayUrl;
}
void Trade::setAlipayUrl (QString alipayUrl) {
  this->alipayUrl = alipayUrl;
}

QString Trade::getAlipayWarnMsg() const {
  return alipayWarnMsg;
}
void Trade::setAlipayWarnMsg (QString alipayWarnMsg) {
  this->alipayWarnMsg = alipayWarnMsg;
}

QString Trade::getAreaId() const {
  return areaId;
}
void Trade::setAreaId (QString areaId) {
  this->areaId = areaId;
}

QString Trade::getAvailableConfirmFee() const {
  return availableConfirmFee;
}
void Trade::setAvailableConfirmFee (QString availableConfirmFee) {
  this->availableConfirmFee = availableConfirmFee;
}

QString Trade::getBuyerAlipayNo() const {
  return buyerAlipayNo;
}
void Trade::setBuyerAlipayNo (QString buyerAlipayNo) {
  this->buyerAlipayNo = buyerAlipayNo;
}

QString Trade::getBuyerArea() const {
  return buyerArea;
}
void Trade::setBuyerArea (QString buyerArea) {
  this->buyerArea = buyerArea;
}

QString Trade::getBuyerCodFee() const {
  return buyerCodFee;
}
void Trade::setBuyerCodFee (QString buyerCodFee) {
  this->buyerCodFee = buyerCodFee;
}

QString Trade::getBuyerEmail() const {
  return buyerEmail;
}
void Trade::setBuyerEmail (QString buyerEmail) {
  this->buyerEmail = buyerEmail;
}

qlonglong Trade::getBuyerFlag() const {
  return buyerFlag;
}
void Trade::setBuyerFlag (qlonglong buyerFlag) {
  this->buyerFlag = buyerFlag;
}

QString Trade::getBuyerMemo() const {
  return buyerMemo;
}
void Trade::setBuyerMemo (QString buyerMemo) {
  this->buyerMemo = buyerMemo;
}

QString Trade::getBuyerMessage() const {
  return buyerMessage;
}
void Trade::setBuyerMessage (QString buyerMessage) {
  this->buyerMessage = buyerMessage;
}

QString Trade::getBuyerNick() const {
  return buyerNick;
}
void Trade::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

qlonglong Trade::getBuyerObtainPointFee() const {
  return buyerObtainPointFee;
}
void Trade::setBuyerObtainPointFee (qlonglong buyerObtainPointFee) {
  this->buyerObtainPointFee = buyerObtainPointFee;
}

bool Trade::getBuyerRate() const {
  return buyerRate;
}
void Trade::setBuyerRate (bool buyerRate) {
  this->buyerRate = buyerRate;
}

bool Trade::getCanRate() const {
  return canRate;
}
void Trade::setCanRate (bool canRate) {
  this->canRate = canRate;
}

QString Trade::getCodFee() const {
  return codFee;
}
void Trade::setCodFee (QString codFee) {
  this->codFee = codFee;
}

QString Trade::getCodStatus() const {
  return codStatus;
}
void Trade::setCodStatus (QString codStatus) {
  this->codStatus = codStatus;
}

QString Trade::getCommissionFee() const {
  return commissionFee;
}
void Trade::setCommissionFee (QString commissionFee) {
  this->commissionFee = commissionFee;
}

QDateTime Trade::getConsignTime() const {
  return consignTime;
}
void Trade::setConsignTime (QDateTime consignTime) {
  this->consignTime = consignTime;
}

QDateTime Trade::getCreated() const {
  return created;
}
void Trade::setCreated (QDateTime created) {
  this->created = created;
}

QString Trade::getCreditCardFee() const {
  return creditCardFee;
}
void Trade::setCreditCardFee (QString creditCardFee) {
  this->creditCardFee = creditCardFee;
}

QString Trade::getDiscountFee() const {
  return discountFee;
}
void Trade::setDiscountFee (QString discountFee) {
  this->discountFee = discountFee;
}

QDateTime Trade::getEndTime() const {
  return endTime;
}
void Trade::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

QString Trade::getEticketExt() const {
  return eticketExt;
}
void Trade::setEticketExt (QString eticketExt) {
  this->eticketExt = eticketExt;
}

QString Trade::getExpressAgencyFee() const {
  return expressAgencyFee;
}
void Trade::setExpressAgencyFee (QString expressAgencyFee) {
  this->expressAgencyFee = expressAgencyFee;
}

bool Trade::getHasBuyerMessage() const {
  return hasBuyerMessage;
}
void Trade::setHasBuyerMessage (bool hasBuyerMessage) {
  this->hasBuyerMessage = hasBuyerMessage;
}

bool Trade::getHasPostFee() const {
  return hasPostFee;
}
void Trade::setHasPostFee (bool hasPostFee) {
  this->hasPostFee = hasPostFee;
}

bool Trade::getHasYfx() const {
  return hasYfx;
}
void Trade::setHasYfx (bool hasYfx) {
  this->hasYfx = hasYfx;
}

QString Trade::getIid() const {
  return iid;
}
void Trade::setIid (QString iid) {
  this->iid = iid;
}

QString Trade::getInvoiceName() const {
  return invoiceName;
}
void Trade::setInvoiceName (QString invoiceName) {
  this->invoiceName = invoiceName;
}

bool Trade::getIs3D() const {
  return is3D;
}
void Trade::setIs3D (bool is3D) {
  this->is3D = is3D;
}

bool Trade::getIsBrandSale() const {
  return isBrandSale;
}
void Trade::setIsBrandSale (bool isBrandSale) {
  this->isBrandSale = isBrandSale;
}

bool Trade::getIsForceWlb() const {
  return isForceWlb;
}
void Trade::setIsForceWlb (bool isForceWlb) {
  this->isForceWlb = isForceWlb;
}

bool Trade::getIsLgtype() const {
  return isLgtype;
}
void Trade::setIsLgtype (bool isLgtype) {
  this->isLgtype = isLgtype;
}

bool Trade::getIsPartConsign() const {
  return isPartConsign;
}
void Trade::setIsPartConsign (bool isPartConsign) {
  this->isPartConsign = isPartConsign;
}

QString Trade::getLgAging() const {
  return lgAging;
}
void Trade::setLgAging (QString lgAging) {
  this->lgAging = lgAging;
}

QString Trade::getLgAgingType() const {
  return lgAgingType;
}
void Trade::setLgAgingType (QString lgAgingType) {
  this->lgAgingType = lgAgingType;
}

QString Trade::getMarkDesc() const {
  return markDesc;
}
void Trade::setMarkDesc (QString markDesc) {
  this->markDesc = markDesc;
}

QDateTime Trade::getModified() const {
  return modified;
}
void Trade::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong Trade::getNum() const {
  return num;
}
void Trade::setNum (qlonglong num) {
  this->num = num;
}

qlonglong Trade::getNumIid() const {
  return numIid;
}
void Trade::setNumIid (qlonglong numIid) {
  this->numIid = numIid;
}

QString Trade::getNutFeature() const {
  return nutFeature;
}
void Trade::setNutFeature (QString nutFeature) {
  this->nutFeature = nutFeature;
}

QList<Order> Trade::getOrders() const {
  return orders;
}
void Trade::setOrders (QList<Order> orders) {
  this->orders = orders;
}

QDateTime Trade::getPayTime() const {
  return payTime;
}
void Trade::setPayTime (QDateTime payTime) {
  this->payTime = payTime;
}

QString Trade::getPayment() const {
  return payment;
}
void Trade::setPayment (QString payment) {
  this->payment = payment;
}

QString Trade::getPicPath() const {
  return picPath;
}
void Trade::setPicPath (QString picPath) {
  this->picPath = picPath;
}

qlonglong Trade::getPointFee() const {
  return pointFee;
}
void Trade::setPointFee (qlonglong pointFee) {
  this->pointFee = pointFee;
}

QString Trade::getPostFee() const {
  return postFee;
}
void Trade::setPostFee (QString postFee) {
  this->postFee = postFee;
}

QString Trade::getPrice() const {
  return price;
}
void Trade::setPrice (QString price) {
  this->price = price;
}

QString Trade::getPromotion() const {
  return promotion;
}
void Trade::setPromotion (QString promotion) {
  this->promotion = promotion;
}

QList<PromotionDetail> Trade::getPromotionDetails() const {
  return promotionDetails;
}
void Trade::setPromotionDetails (QList<PromotionDetail> promotionDetails) {
  this->promotionDetails = promotionDetails;
}

qlonglong Trade::getRealPointFee() const {
  return realPointFee;
}
void Trade::setRealPointFee (qlonglong realPointFee) {
  this->realPointFee = realPointFee;
}

QString Trade::getReceivedPayment() const {
  return receivedPayment;
}
void Trade::setReceivedPayment (QString receivedPayment) {
  this->receivedPayment = receivedPayment;
}

QString Trade::getReceiverAddress() const {
  return receiverAddress;
}
void Trade::setReceiverAddress (QString receiverAddress) {
  this->receiverAddress = receiverAddress;
}

QString Trade::getReceiverCity() const {
  return receiverCity;
}
void Trade::setReceiverCity (QString receiverCity) {
  this->receiverCity = receiverCity;
}

QString Trade::getReceiverDistrict() const {
  return receiverDistrict;
}
void Trade::setReceiverDistrict (QString receiverDistrict) {
  this->receiverDistrict = receiverDistrict;
}

QString Trade::getReceiverMobile() const {
  return receiverMobile;
}
void Trade::setReceiverMobile (QString receiverMobile) {
  this->receiverMobile = receiverMobile;
}

QString Trade::getReceiverName() const {
  return receiverName;
}
void Trade::setReceiverName (QString receiverName) {
  this->receiverName = receiverName;
}

QString Trade::getReceiverPhone() const {
  return receiverPhone;
}
void Trade::setReceiverPhone (QString receiverPhone) {
  this->receiverPhone = receiverPhone;
}

QString Trade::getReceiverState() const {
  return receiverState;
}
void Trade::setReceiverState (QString receiverState) {
  this->receiverState = receiverState;
}

QString Trade::getReceiverZip() const {
  return receiverZip;
}
void Trade::setReceiverZip (QString receiverZip) {
  this->receiverZip = receiverZip;
}

QString Trade::getSellerAlipayNo() const {
  return sellerAlipayNo;
}
void Trade::setSellerAlipayNo (QString sellerAlipayNo) {
  this->sellerAlipayNo = sellerAlipayNo;
}

bool Trade::getSellerCanRate() const {
  return sellerCanRate;
}
void Trade::setSellerCanRate (bool sellerCanRate) {
  this->sellerCanRate = sellerCanRate;
}

QString Trade::getSellerCodFee() const {
  return sellerCodFee;
}
void Trade::setSellerCodFee (QString sellerCodFee) {
  this->sellerCodFee = sellerCodFee;
}

QString Trade::getSellerEmail() const {
  return sellerEmail;
}
void Trade::setSellerEmail (QString sellerEmail) {
  this->sellerEmail = sellerEmail;
}

qlonglong Trade::getSellerFlag() const {
  return sellerFlag;
}
void Trade::setSellerFlag (qlonglong sellerFlag) {
  this->sellerFlag = sellerFlag;
}

QString Trade::getSellerMemo() const {
  return sellerMemo;
}
void Trade::setSellerMemo (QString sellerMemo) {
  this->sellerMemo = sellerMemo;
}

QString Trade::getSellerMobile() const {
  return sellerMobile;
}
void Trade::setSellerMobile (QString sellerMobile) {
  this->sellerMobile = sellerMobile;
}

QString Trade::getSellerName() const {
  return sellerName;
}
void Trade::setSellerName (QString sellerName) {
  this->sellerName = sellerName;
}

QString Trade::getSellerNick() const {
  return sellerNick;
}
void Trade::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

QString Trade::getSellerPhone() const {
  return sellerPhone;
}
void Trade::setSellerPhone (QString sellerPhone) {
  this->sellerPhone = sellerPhone;
}

bool Trade::getSellerRate() const {
  return sellerRate;
}
void Trade::setSellerRate (bool sellerRate) {
  this->sellerRate = sellerRate;
}

QString Trade::getSendTime() const {
  return sendTime;
}
void Trade::setSendTime (QString sendTime) {
  this->sendTime = sendTime;
}

QList<ServiceOrder> Trade::getServiceOrders() const {
  return serviceOrders;
}
void Trade::setServiceOrders (QList<ServiceOrder> serviceOrders) {
  this->serviceOrders = serviceOrders;
}

QString Trade::getShippingType() const {
  return shippingType;
}
void Trade::setShippingType (QString shippingType) {
  this->shippingType = shippingType;
}

QString Trade::getSnapshot() const {
  return snapshot;
}
void Trade::setSnapshot (QString snapshot) {
  this->snapshot = snapshot;
}

QString Trade::getSnapshotUrl() const {
  return snapshotUrl;
}
void Trade::setSnapshotUrl (QString snapshotUrl) {
  this->snapshotUrl = snapshotUrl;
}

QString Trade::getStatus() const {
  return status;
}
void Trade::setStatus (QString status) {
  this->status = status;
}

QString Trade::getStepPaidFee() const {
  return stepPaidFee;
}
void Trade::setStepPaidFee (QString stepPaidFee) {
  this->stepPaidFee = stepPaidFee;
}

QString Trade::getStepTradeStatus() const {
  return stepTradeStatus;
}
void Trade::setStepTradeStatus (QString stepTradeStatus) {
  this->stepTradeStatus = stepTradeStatus;
}

qlonglong Trade::getTid() const {
  return tid;
}
void Trade::setTid (qlonglong tid) {
  this->tid = tid;
}

QDateTime Trade::getTimeoutActionTime() const {
  return timeoutActionTime;
}
void Trade::setTimeoutActionTime (QDateTime timeoutActionTime) {
  this->timeoutActionTime = timeoutActionTime;
}

QString Trade::getTitle() const {
  return title;
}
void Trade::setTitle (QString title) {
  this->title = title;
}

QString Trade::getTotalFee() const {
  return totalFee;
}
void Trade::setTotalFee (QString totalFee) {
  this->totalFee = totalFee;
}

QString Trade::getTradeFrom() const {
  return tradeFrom;
}
void Trade::setTradeFrom (QString tradeFrom) {
  this->tradeFrom = tradeFrom;
}

QString Trade::getTradeMemo() const {
  return tradeMemo;
}
void Trade::setTradeMemo (QString tradeMemo) {
  this->tradeMemo = tradeMemo;
}

QString Trade::getTradeSource() const {
  return tradeSource;
}
void Trade::setTradeSource (QString tradeSource) {
  this->tradeSource = tradeSource;
}

QString Trade::getType() const {
  return type;
}
void Trade::setType (QString type) {
  this->type = type;
}

QString Trade::getYfxFee() const {
  return yfxFee;
}
void Trade::setYfxFee (QString yfxFee) {
  this->yfxFee = yfxFee;
}

QString Trade::getYfxId() const {
  return yfxId;
}
void Trade::setYfxId (QString yfxId) {
  this->yfxId = yfxId;
}

qlonglong Trade::getYfxType() const {
  return yfxType;
}
void Trade::setYfxType (qlonglong yfxType) {
  this->yfxType = yfxType;
}


void Trade::parseResponse() {
  if (responseParser->hasName("adjust_fee")) {
  adjustFee = responseParser->getStrByName("adjust_fee");
  }
  if (responseParser->hasName("alipay_id")) {
  alipayId = responseParser->getNumByName("alipay_id");
  }
  if (responseParser->hasName("alipay_no")) {
  alipayNo = responseParser->getStrByName("alipay_no");
  }
  if (responseParser->hasName("alipay_url")) {
  alipayUrl = responseParser->getStrByName("alipay_url");
  }
  if (responseParser->hasName("alipay_warn_msg")) {
  alipayWarnMsg = responseParser->getStrByName("alipay_warn_msg");
  }
  if (responseParser->hasName("area_id")) {
  areaId = responseParser->getStrByName("area_id");
  }
  if (responseParser->hasName("available_confirm_fee")) {
  availableConfirmFee = responseParser->getStrByName("available_confirm_fee");
  }
  if (responseParser->hasName("buyer_alipay_no")) {
  buyerAlipayNo = responseParser->getStrByName("buyer_alipay_no");
  }
  if (responseParser->hasName("buyer_area")) {
  buyerArea = responseParser->getStrByName("buyer_area");
  }
  if (responseParser->hasName("buyer_cod_fee")) {
  buyerCodFee = responseParser->getStrByName("buyer_cod_fee");
  }
  if (responseParser->hasName("buyer_email")) {
  buyerEmail = responseParser->getStrByName("buyer_email");
  }
  if (responseParser->hasName("buyer_flag")) {
  buyerFlag = responseParser->getNumByName("buyer_flag");
  }
  if (responseParser->hasName("buyer_memo")) {
  buyerMemo = responseParser->getStrByName("buyer_memo");
  }
  if (responseParser->hasName("buyer_message")) {
  buyerMessage = responseParser->getStrByName("buyer_message");
  }
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("buyer_obtain_point_fee")) {
  buyerObtainPointFee = responseParser->getNumByName("buyer_obtain_point_fee");
  }
  if (responseParser->hasName("buyer_rate")) {
  buyerRate = responseParser->getBoolByName("buyer_rate");
  }
  if (responseParser->hasName("can_rate")) {
  canRate = responseParser->getBoolByName("can_rate");
  }
  if (responseParser->hasName("cod_fee")) {
  codFee = responseParser->getStrByName("cod_fee");
  }
  if (responseParser->hasName("cod_status")) {
  codStatus = responseParser->getStrByName("cod_status");
  }
  if (responseParser->hasName("commission_fee")) {
  commissionFee = responseParser->getStrByName("commission_fee");
  }
  if (responseParser->hasName("consign_time")) {
  consignTime = responseParser->getDateByName("consign_time");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("credit_card_fee")) {
  creditCardFee = responseParser->getStrByName("credit_card_fee");
  }
  if (responseParser->hasName("discount_fee")) {
  discountFee = responseParser->getStrByName("discount_fee");
  }
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("eticket_ext")) {
  eticketExt = responseParser->getStrByName("eticket_ext");
  }
  if (responseParser->hasName("express_agency_fee")) {
  expressAgencyFee = responseParser->getStrByName("express_agency_fee");
  }
  if (responseParser->hasName("has_buyer_message")) {
  hasBuyerMessage = responseParser->getBoolByName("has_buyer_message");
  }
  if (responseParser->hasName("has_post_fee")) {
  hasPostFee = responseParser->getBoolByName("has_post_fee");
  }
  if (responseParser->hasName("has_yfx")) {
  hasYfx = responseParser->getBoolByName("has_yfx");
  }
  if (responseParser->hasName("iid")) {
  iid = responseParser->getStrByName("iid");
  }
  if (responseParser->hasName("invoice_name")) {
  invoiceName = responseParser->getStrByName("invoice_name");
  }
  if (responseParser->hasName("is_3D")) {
  is3D = responseParser->getBoolByName("is_3D");
  }
  if (responseParser->hasName("is_brand_sale")) {
  isBrandSale = responseParser->getBoolByName("is_brand_sale");
  }
  if (responseParser->hasName("is_force_wlb")) {
  isForceWlb = responseParser->getBoolByName("is_force_wlb");
  }
  if (responseParser->hasName("is_lgtype")) {
  isLgtype = responseParser->getBoolByName("is_lgtype");
  }
  if (responseParser->hasName("is_part_consign")) {
  isPartConsign = responseParser->getBoolByName("is_part_consign");
  }
  if (responseParser->hasName("lg_aging")) {
  lgAging = responseParser->getStrByName("lg_aging");
  }
  if (responseParser->hasName("lg_aging_type")) {
  lgAgingType = responseParser->getStrByName("lg_aging_type");
  }
  if (responseParser->hasName("mark_desc")) {
  markDesc = responseParser->getStrByName("mark_desc");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("num")) {
  num = responseParser->getNumByName("num");
  }
  if (responseParser->hasName("num_iid")) {
  numIid = responseParser->getNumByName("num_iid");
  }
  if (responseParser->hasName("nut_feature")) {
  nutFeature = responseParser->getStrByName("nut_feature");
  }
  if (responseParser->hasName("orders")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("orders");
  Parser *parser;
  foreach (parser, listParser) {
    Order tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    orders.append(tmp);
  }
  }
  if (responseParser->hasName("pay_time")) {
  payTime = responseParser->getDateByName("pay_time");
  }
  if (responseParser->hasName("payment")) {
  payment = responseParser->getStrByName("payment");
  }
  if (responseParser->hasName("pic_path")) {
  picPath = responseParser->getStrByName("pic_path");
  }
  if (responseParser->hasName("point_fee")) {
  pointFee = responseParser->getNumByName("point_fee");
  }
  if (responseParser->hasName("post_fee")) {
  postFee = responseParser->getStrByName("post_fee");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("promotion")) {
  promotion = responseParser->getStrByName("promotion");
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
  if (responseParser->hasName("real_point_fee")) {
  realPointFee = responseParser->getNumByName("real_point_fee");
  }
  if (responseParser->hasName("received_payment")) {
  receivedPayment = responseParser->getStrByName("received_payment");
  }
  if (responseParser->hasName("receiver_address")) {
  receiverAddress = responseParser->getStrByName("receiver_address");
  }
  if (responseParser->hasName("receiver_city")) {
  receiverCity = responseParser->getStrByName("receiver_city");
  }
  if (responseParser->hasName("receiver_district")) {
  receiverDistrict = responseParser->getStrByName("receiver_district");
  }
  if (responseParser->hasName("receiver_mobile")) {
  receiverMobile = responseParser->getStrByName("receiver_mobile");
  }
  if (responseParser->hasName("receiver_name")) {
  receiverName = responseParser->getStrByName("receiver_name");
  }
  if (responseParser->hasName("receiver_phone")) {
  receiverPhone = responseParser->getStrByName("receiver_phone");
  }
  if (responseParser->hasName("receiver_state")) {
  receiverState = responseParser->getStrByName("receiver_state");
  }
  if (responseParser->hasName("receiver_zip")) {
  receiverZip = responseParser->getStrByName("receiver_zip");
  }
  if (responseParser->hasName("seller_alipay_no")) {
  sellerAlipayNo = responseParser->getStrByName("seller_alipay_no");
  }
  if (responseParser->hasName("seller_can_rate")) {
  sellerCanRate = responseParser->getBoolByName("seller_can_rate");
  }
  if (responseParser->hasName("seller_cod_fee")) {
  sellerCodFee = responseParser->getStrByName("seller_cod_fee");
  }
  if (responseParser->hasName("seller_email")) {
  sellerEmail = responseParser->getStrByName("seller_email");
  }
  if (responseParser->hasName("seller_flag")) {
  sellerFlag = responseParser->getNumByName("seller_flag");
  }
  if (responseParser->hasName("seller_memo")) {
  sellerMemo = responseParser->getStrByName("seller_memo");
  }
  if (responseParser->hasName("seller_mobile")) {
  sellerMobile = responseParser->getStrByName("seller_mobile");
  }
  if (responseParser->hasName("seller_name")) {
  sellerName = responseParser->getStrByName("seller_name");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("seller_phone")) {
  sellerPhone = responseParser->getStrByName("seller_phone");
  }
  if (responseParser->hasName("seller_rate")) {
  sellerRate = responseParser->getBoolByName("seller_rate");
  }
  if (responseParser->hasName("send_time")) {
  sendTime = responseParser->getStrByName("send_time");
  }
  if (responseParser->hasName("service_orders")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("service_orders");
  Parser *parser;
  foreach (parser, listParser) {
    ServiceOrder tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    serviceOrders.append(tmp);
  }
  }
  if (responseParser->hasName("shipping_type")) {
  shippingType = responseParser->getStrByName("shipping_type");
  }
  if (responseParser->hasName("snapshot")) {
  snapshot = responseParser->getStrByName("snapshot");
  }
  if (responseParser->hasName("snapshot_url")) {
  snapshotUrl = responseParser->getStrByName("snapshot_url");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("step_paid_fee")) {
  stepPaidFee = responseParser->getStrByName("step_paid_fee");
  }
  if (responseParser->hasName("step_trade_status")) {
  stepTradeStatus = responseParser->getStrByName("step_trade_status");
  }
  if (responseParser->hasName("tid")) {
  tid = responseParser->getNumByName("tid");
  }
  if (responseParser->hasName("timeout_action_time")) {
  timeoutActionTime = responseParser->getDateByName("timeout_action_time");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("total_fee")) {
  totalFee = responseParser->getStrByName("total_fee");
  }
  if (responseParser->hasName("trade_from")) {
  tradeFrom = responseParser->getStrByName("trade_from");
  }
  if (responseParser->hasName("trade_memo")) {
  tradeMemo = responseParser->getStrByName("trade_memo");
  }
  if (responseParser->hasName("trade_source")) {
  tradeSource = responseParser->getStrByName("trade_source");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }
  if (responseParser->hasName("yfx_fee")) {
  yfxFee = responseParser->getStrByName("yfx_fee");
  }
  if (responseParser->hasName("yfx_id")) {
  yfxId = responseParser->getStrByName("yfx_id");
  }
  if (responseParser->hasName("yfx_type")) {
  yfxType = responseParser->getNumByName("yfx_type");
  }

}

