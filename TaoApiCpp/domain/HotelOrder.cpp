#include <TaoApiCpp/domain/HotelOrder.h>
QString HotelOrder::getAlipayTradeNo() const {
  return alipayTradeNo;
}
void HotelOrder::setAlipayTradeNo (QString alipayTradeNo) {
  this->alipayTradeNo = alipayTradeNo;
}

QDateTime HotelOrder::getArriveEarly() const {
  return arriveEarly;
}
void HotelOrder::setArriveEarly (QDateTime arriveEarly) {
  this->arriveEarly = arriveEarly;
}

QDateTime HotelOrder::getArriveLate() const {
  return arriveLate;
}
void HotelOrder::setArriveLate (QDateTime arriveLate) {
  this->arriveLate = arriveLate;
}

QString HotelOrder::getBuyerNick() const {
  return buyerNick;
}
void HotelOrder::setBuyerNick (QString buyerNick) {
  this->buyerNick = buyerNick;
}

QDateTime HotelOrder::getCheckinDate() const {
  return checkinDate;
}
void HotelOrder::setCheckinDate (QDateTime checkinDate) {
  this->checkinDate = checkinDate;
}

QDateTime HotelOrder::getCheckoutDate() const {
  return checkoutDate;
}
void HotelOrder::setCheckoutDate (QDateTime checkoutDate) {
  this->checkoutDate = checkoutDate;
}

QString HotelOrder::getContactName() const {
  return contactName;
}
void HotelOrder::setContactName (QString contactName) {
  this->contactName = contactName;
}

QString HotelOrder::getContactPhone() const {
  return contactPhone;
}
void HotelOrder::setContactPhone (QString contactPhone) {
  this->contactPhone = contactPhone;
}

QString HotelOrder::getContactPhoneBak() const {
  return contactPhoneBak;
}
void HotelOrder::setContactPhoneBak (QString contactPhoneBak) {
  this->contactPhoneBak = contactPhoneBak;
}

QDateTime HotelOrder::getCreated() const {
  return created;
}
void HotelOrder::setCreated (QDateTime created) {
  this->created = created;
}

QDateTime HotelOrder::getEndTime() const {
  return endTime;
}
void HotelOrder::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

qlonglong HotelOrder::getGid() const {
  return gid;
}
void HotelOrder::setGid (qlonglong gid) {
  this->gid = gid;
}

QList<OrderGuest> HotelOrder::getGuests() const {
  return guests;
}
void HotelOrder::setGuests (QList<OrderGuest> guests) {
  this->guests = guests;
}

qlonglong HotelOrder::getHid() const {
  return hid;
}
void HotelOrder::setHid (qlonglong hid) {
  this->hid = hid;
}

QString HotelOrder::getLogisticsStatus() const {
  return logisticsStatus;
}
void HotelOrder::setLogisticsStatus (QString logisticsStatus) {
  this->logisticsStatus = logisticsStatus;
}

QString HotelOrder::getMessage() const {
  return message;
}
void HotelOrder::setMessage (QString message) {
  this->message = message;
}

QDateTime HotelOrder::getModified() const {
  return modified;
}
void HotelOrder::setModified (QDateTime modified) {
  this->modified = modified;
}

qlonglong HotelOrder::getNights() const {
  return nights;
}
void HotelOrder::setNights (qlonglong nights) {
  this->nights = nights;
}

qlonglong HotelOrder::getOid() const {
  return oid;
}
void HotelOrder::setOid (qlonglong oid) {
  this->oid = oid;
}

QString HotelOrder::getOutOid() const {
  return outOid;
}
void HotelOrder::setOutOid (QString outOid) {
  this->outOid = outOid;
}

QDateTime HotelOrder::getPayTime() const {
  return payTime;
}
void HotelOrder::setPayTime (QDateTime payTime) {
  this->payTime = payTime;
}

qlonglong HotelOrder::getPayment() const {
  return payment;
}
void HotelOrder::setPayment (qlonglong payment) {
  this->payment = payment;
}

QString HotelOrder::getRefundStatus() const {
  return refundStatus;
}
void HotelOrder::setRefundStatus (QString refundStatus) {
  this->refundStatus = refundStatus;
}

qlonglong HotelOrder::getRid() const {
  return rid;
}
void HotelOrder::setRid (qlonglong rid) {
  this->rid = rid;
}

qlonglong HotelOrder::getRoomNumber() const {
  return roomNumber;
}
void HotelOrder::setRoomNumber (qlonglong roomNumber) {
  this->roomNumber = roomNumber;
}

QString HotelOrder::getSellerNick() const {
  return sellerNick;
}
void HotelOrder::setSellerNick (QString sellerNick) {
  this->sellerNick = sellerNick;
}

qlonglong HotelOrder::getTid() const {
  return tid;
}
void HotelOrder::setTid (qlonglong tid) {
  this->tid = tid;
}

qlonglong HotelOrder::getTotalRoomPrice() const {
  return totalRoomPrice;
}
void HotelOrder::setTotalRoomPrice (qlonglong totalRoomPrice) {
  this->totalRoomPrice = totalRoomPrice;
}

QString HotelOrder::getTradeStatus() const {
  return tradeStatus;
}
void HotelOrder::setTradeStatus (QString tradeStatus) {
  this->tradeStatus = tradeStatus;
}

QString HotelOrder::getType() const {
  return type;
}
void HotelOrder::setType (QString type) {
  this->type = type;
}


void HotelOrder::parseResponse() {
  if (responseParser->hasName("alipay_trade_no")) {
  alipayTradeNo = responseParser->getStrByName("alipay_trade_no");
  }
  if (responseParser->hasName("arrive_early")) {
  arriveEarly = responseParser->getDateByName("arrive_early");
  }
  if (responseParser->hasName("arrive_late")) {
  arriveLate = responseParser->getDateByName("arrive_late");
  }
  if (responseParser->hasName("buyer_nick")) {
  buyerNick = responseParser->getStrByName("buyer_nick");
  }
  if (responseParser->hasName("checkin_date")) {
  checkinDate = responseParser->getDateByName("checkin_date");
  }
  if (responseParser->hasName("checkout_date")) {
  checkoutDate = responseParser->getDateByName("checkout_date");
  }
  if (responseParser->hasName("contact_name")) {
  contactName = responseParser->getStrByName("contact_name");
  }
  if (responseParser->hasName("contact_phone")) {
  contactPhone = responseParser->getStrByName("contact_phone");
  }
  if (responseParser->hasName("contact_phone_bak")) {
  contactPhoneBak = responseParser->getStrByName("contact_phone_bak");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("gid")) {
  gid = responseParser->getNumByName("gid");
  }
  if (responseParser->hasName("guests")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("guests");
  Parser *parser;
  foreach (parser, listParser) {
    OrderGuest tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    guests.append(tmp);
  }
  }
  if (responseParser->hasName("hid")) {
  hid = responseParser->getNumByName("hid");
  }
  if (responseParser->hasName("logistics_status")) {
  logisticsStatus = responseParser->getStrByName("logistics_status");
  }
  if (responseParser->hasName("message")) {
  message = responseParser->getStrByName("message");
  }
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("nights")) {
  nights = responseParser->getNumByName("nights");
  }
  if (responseParser->hasName("oid")) {
  oid = responseParser->getNumByName("oid");
  }
  if (responseParser->hasName("out_oid")) {
  outOid = responseParser->getStrByName("out_oid");
  }
  if (responseParser->hasName("pay_time")) {
  payTime = responseParser->getDateByName("pay_time");
  }
  if (responseParser->hasName("payment")) {
  payment = responseParser->getNumByName("payment");
  }
  if (responseParser->hasName("refund_status")) {
  refundStatus = responseParser->getStrByName("refund_status");
  }
  if (responseParser->hasName("rid")) {
  rid = responseParser->getNumByName("rid");
  }
  if (responseParser->hasName("room_number")) {
  roomNumber = responseParser->getNumByName("room_number");
  }
  if (responseParser->hasName("seller_nick")) {
  sellerNick = responseParser->getStrByName("seller_nick");
  }
  if (responseParser->hasName("tid")) {
  tid = responseParser->getNumByName("tid");
  }
  if (responseParser->hasName("total_room_price")) {
  totalRoomPrice = responseParser->getNumByName("total_room_price");
  }
  if (responseParser->hasName("trade_status")) {
  tradeStatus = responseParser->getStrByName("trade_status");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }

}

