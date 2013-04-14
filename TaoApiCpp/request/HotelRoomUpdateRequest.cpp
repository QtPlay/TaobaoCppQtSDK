#include <TaoApiCpp/request/HotelRoomUpdateRequest.h>

QString HotelRoomUpdateRequest::getApiMethodName() const {
  return "taobao.hotel.room.update";
}

QString HotelRoomUpdateRequest::getArea() const {
  return area;
}
void HotelRoomUpdateRequest::setArea (QString area) {
  this->area = area;
  appParams.insert("area", area);
}

QString HotelRoomUpdateRequest::getBbn() const {
  return bbn;
}
void HotelRoomUpdateRequest::setBbn (QString bbn) {
  this->bbn = bbn;
  appParams.insert("bbn", bbn);
}

QString HotelRoomUpdateRequest::getBedType() const {
  return bedType;
}
void HotelRoomUpdateRequest::setBedType (QString bedType) {
  this->bedType = bedType;
  appParams.insert("bed_type", bedType);
}

QString HotelRoomUpdateRequest::getBreakfast() const {
  return breakfast;
}
void HotelRoomUpdateRequest::setBreakfast (QString breakfast) {
  this->breakfast = breakfast;
  appParams.insert("breakfast", breakfast);
}

qlonglong HotelRoomUpdateRequest::getDeposit() const {
  return deposit;
}
void HotelRoomUpdateRequest::setDeposit (qlonglong deposit) {
  this->deposit = deposit;
  appParams.insert("deposit", QString::number(deposit));
}

QString HotelRoomUpdateRequest::getDesc() const {
  return desc;
}
void HotelRoomUpdateRequest::setDesc (QString desc) {
  this->desc = desc;
  appParams.insert("desc", desc);
}

qlonglong HotelRoomUpdateRequest::getFee() const {
  return fee;
}
void HotelRoomUpdateRequest::setFee (qlonglong fee) {
  this->fee = fee;
  appParams.insert("fee", QString::number(fee));
}

qlonglong HotelRoomUpdateRequest::getGid() const {
  return gid;
}
void HotelRoomUpdateRequest::setGid (qlonglong gid) {
  this->gid = gid;
  appParams.insert("gid", QString::number(gid));
}

QString HotelRoomUpdateRequest::getGuide() const {
  return guide;
}
void HotelRoomUpdateRequest::setGuide (QString guide) {
  this->guide = guide;
  appParams.insert("guide", guide);
}

bool HotelRoomUpdateRequest::getHasReceipt() const {
  return hasReceipt;
}
void HotelRoomUpdateRequest::setHasReceipt (bool hasReceipt) {
  this->hasReceipt = hasReceipt;
  appParams.insert("has_receipt", hasReceipt? "true": "false");
}

QString HotelRoomUpdateRequest::getMultiRoomQuotas() const {
  return multiRoomQuotas;
}
void HotelRoomUpdateRequest::setMultiRoomQuotas (QString multiRoomQuotas) {
  this->multiRoomQuotas = multiRoomQuotas;
  appParams.insert("multi_room_quotas", multiRoomQuotas);
}

QString HotelRoomUpdateRequest::getPaymentType() const {
  return paymentType;
}
void HotelRoomUpdateRequest::setPaymentType (QString paymentType) {
  this->paymentType = paymentType;
  appParams.insert("payment_type", paymentType);
}

FileItem HotelRoomUpdateRequest::getPic() const {
  return pic;
}
void HotelRoomUpdateRequest::setPic (FileItem pic) {
  this->pic = pic;
  fileParams.insert("pic", pic);
}

QString HotelRoomUpdateRequest::getPicPath() const {
  return picPath;
}
void HotelRoomUpdateRequest::setPicPath (QString picPath) {
  this->picPath = picPath;
  appParams.insert("pic_path", picPath);
}

QString HotelRoomUpdateRequest::getPriceType() const {
  return priceType;
}
void HotelRoomUpdateRequest::setPriceType (QString priceType) {
  this->priceType = priceType;
  appParams.insert("price_type", priceType);
}

QString HotelRoomUpdateRequest::getReceiptInfo() const {
  return receiptInfo;
}
void HotelRoomUpdateRequest::setReceiptInfo (QString receiptInfo) {
  this->receiptInfo = receiptInfo;
  appParams.insert("receipt_info", receiptInfo);
}

QString HotelRoomUpdateRequest::getReceiptOtherTypeDesc() const {
  return receiptOtherTypeDesc;
}
void HotelRoomUpdateRequest::setReceiptOtherTypeDesc (QString receiptOtherTypeDesc) {
  this->receiptOtherTypeDesc = receiptOtherTypeDesc;
  appParams.insert("receipt_other_type_desc", receiptOtherTypeDesc);
}

QString HotelRoomUpdateRequest::getReceiptType() const {
  return receiptType;
}
void HotelRoomUpdateRequest::setReceiptType (QString receiptType) {
  this->receiptType = receiptType;
  appParams.insert("receipt_type", receiptType);
}

QString HotelRoomUpdateRequest::getRoomQuotas() const {
  return roomQuotas;
}
void HotelRoomUpdateRequest::setRoomQuotas (QString roomQuotas) {
  this->roomQuotas = roomQuotas;
  appParams.insert("room_quotas", roomQuotas);
}

QString HotelRoomUpdateRequest::getService() const {
  return service;
}
void HotelRoomUpdateRequest::setService (QString service) {
  this->service = service;
  appParams.insert("service", service);
}

QString HotelRoomUpdateRequest::getSiteParam() const {
  return siteParam;
}
void HotelRoomUpdateRequest::setSiteParam (QString siteParam) {
  this->siteParam = siteParam;
  appParams.insert("site_param", siteParam);
}

QString HotelRoomUpdateRequest::getSize() const {
  return size;
}
void HotelRoomUpdateRequest::setSize (QString size) {
  this->size = size;
  appParams.insert("size", size);
}

qlonglong HotelRoomUpdateRequest::getStatus() const {
  return status;
}
void HotelRoomUpdateRequest::setStatus (qlonglong status) {
  this->status = status;
  appParams.insert("status", QString::number(status));
}

QString HotelRoomUpdateRequest::getStorey() const {
  return storey;
}
void HotelRoomUpdateRequest::setStorey (QString storey) {
  this->storey = storey;
  appParams.insert("storey", storey);
}

QString HotelRoomUpdateRequest::getTitle() const {
  return title;
}
void HotelRoomUpdateRequest::setTitle (QString title) {
  this->title = title;
  appParams.insert("title", title);
}



HotelRoomUpdateResponse *HotelRoomUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelRoomUpdateResponse *tmpResponse = new HotelRoomUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
