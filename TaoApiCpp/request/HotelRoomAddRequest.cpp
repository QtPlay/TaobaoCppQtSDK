#include <TaoApiCpp/request/HotelRoomAddRequest.h>

QString HotelRoomAddRequest::getApiMethodName() const {
  return "taobao.hotel.room.add";
}

QString HotelRoomAddRequest::getArea() const {
  return area;
}
void HotelRoomAddRequest::setArea (QString area) {
  this->area = area;
  appParams.insert("area", area);
}

QString HotelRoomAddRequest::getBbn() const {
  return bbn;
}
void HotelRoomAddRequest::setBbn (QString bbn) {
  this->bbn = bbn;
  appParams.insert("bbn", bbn);
}

QString HotelRoomAddRequest::getBedType() const {
  return bedType;
}
void HotelRoomAddRequest::setBedType (QString bedType) {
  this->bedType = bedType;
  appParams.insert("bed_type", bedType);
}

QString HotelRoomAddRequest::getBreakfast() const {
  return breakfast;
}
void HotelRoomAddRequest::setBreakfast (QString breakfast) {
  this->breakfast = breakfast;
  appParams.insert("breakfast", breakfast);
}

qlonglong HotelRoomAddRequest::getDeposit() const {
  return deposit;
}
void HotelRoomAddRequest::setDeposit (qlonglong deposit) {
  this->deposit = deposit;
  appParams.insert("deposit", QString::number(deposit));
}

QString HotelRoomAddRequest::getDesc() const {
  return desc;
}
void HotelRoomAddRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

qlonglong HotelRoomAddRequest::getFee() const {
  return fee;
}
void HotelRoomAddRequest::setFee (qlonglong fee) {
  this->fee = fee;
  appParams.insert("fee", QString::number(fee));
}

QString HotelRoomAddRequest::getGuide() const {
  return guide;
}
void HotelRoomAddRequest::setGuide (QString guide) {
  this->guide = guide;
  appParams.insert("guide", guide);
}

bool HotelRoomAddRequest::getHasReceipt() const {
  return hasReceipt;
}
void HotelRoomAddRequest::setHasReceipt (bool hasReceipt) {
  this->hasReceipt = hasReceipt;
  appParams.insert("has_receipt", hasReceipt? "true": "false");
}

qlonglong HotelRoomAddRequest::getHid() const {
  return hid;
}
void HotelRoomAddRequest::setHid (qlonglong hid) {
  this->hid = hid;
  appParams.insert("hid", QString::number(hid));
}

QString HotelRoomAddRequest::getMultiRoomQuotas() const {
  return multiRoomQuotas;
}
void HotelRoomAddRequest::setMultiRoomQuotas (QString multiRoomQuotas) {
  this->multiRoomQuotas = multiRoomQuotas;
  appParams.insert("multi_room_quotas", multiRoomQuotas);
}

QString HotelRoomAddRequest::getPaymentType() const {
  return paymentType;
}
void HotelRoomAddRequest::setPaymentType (QString paymentType) {
  this->paymentType = paymentType;
  appParams.insert("payment_type", paymentType);
}

FileItem HotelRoomAddRequest::getPic() const {
  return pic;
}
void HotelRoomAddRequest::setPic (FileItem pic) {
  this->pic = pic;
  fileParams.insert("pic", pic);
}

QString HotelRoomAddRequest::getPicPath() const {
  return picPath;
}
void HotelRoomAddRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

QString HotelRoomAddRequest::getPriceType() const {
  return priceType;
}
void HotelRoomAddRequest::setPriceType (QString priceType) {
  this->priceType = priceType;
  appParams.insert("price_type", priceType);
}

QString HotelRoomAddRequest::getReceiptInfo() const {
  return receiptInfo;
}
void HotelRoomAddRequest::setReceiptInfo (QString receiptInfo) {
  this->receiptInfo = receiptInfo;
  appParams.insert("receipt_info", receiptInfo);
}

QString HotelRoomAddRequest::getReceiptOtherTypeDesc() const {
  return receiptOtherTypeDesc;
}
void HotelRoomAddRequest::setReceiptOtherTypeDesc (QString receiptOtherTypeDesc) {
  this->receiptOtherTypeDesc = receiptOtherTypeDesc;
  appParams.insert("receipt_other_type_desc", receiptOtherTypeDesc);
}

QString HotelRoomAddRequest::getReceiptType() const {
  return receiptType;
}
void HotelRoomAddRequest::setReceiptType (QString receiptType) {
  this->receiptType = receiptType;
  appParams.insert("receipt_type", receiptType);
}

qlonglong HotelRoomAddRequest::getRid() const {
  return rid;
}
void HotelRoomAddRequest::setRid (qlonglong rid) {
  this->rid = rid;
  appParams.insert("rid", QString::number(rid));
}

QString HotelRoomAddRequest::getRoomQuotas() const {
  return roomQuotas;
}
void HotelRoomAddRequest::setRoomQuotas (QString roomQuotas) {
  this->roomQuotas = roomQuotas;
  appParams.insert("room_quotas", roomQuotas);
}

QString HotelRoomAddRequest::getService() const {
  return service;
}
void HotelRoomAddRequest::setService (QString service) {
  this->service = service;
  appParams.insert("service", service);
}

QString HotelRoomAddRequest::getSiteParam() const {
  return siteParam;
}
void HotelRoomAddRequest::setSiteParam (QString siteParam) {
  this->siteParam = siteParam;
  appParams.insert("site_param", siteParam);
}

QString HotelRoomAddRequest::getSize() const {
  return size;
}
void HotelRoomAddRequest::setSize (QString size) {
  this->size = size;
  appParams.insert("size", size);
}

QString HotelRoomAddRequest::getStorey() const {
  return storey;
}
void HotelRoomAddRequest::setStorey (QString storey) {
  this->storey = storey;
  appParams.insert("storey", storey);
}

QString HotelRoomAddRequest::getTitle() const {
  return title;
}
void HotelRoomAddRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



HotelRoomAddResponse *HotelRoomAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelRoomAddResponse *tmpResponse = new HotelRoomAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
