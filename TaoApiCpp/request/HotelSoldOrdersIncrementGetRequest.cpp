#include <TaoApiCpp/request/HotelSoldOrdersIncrementGetRequest.h>

QString HotelSoldOrdersIncrementGetRequest::getApiMethodName() const {
  return "taobao.hotel.sold.orders.increment.get";
}

QDateTime HotelSoldOrdersIncrementGetRequest::getEndModified() const {
  return endModified;
}
void HotelSoldOrdersIncrementGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

bool HotelSoldOrdersIncrementGetRequest::getNeedGuest() const {
  return needGuest;
}
void HotelSoldOrdersIncrementGetRequest::setNeedGuest (bool needGuest) {
  this->needGuest = needGuest;
  appParams.insert("need_guest", needGuest? "true": "false");
}

bool HotelSoldOrdersIncrementGetRequest::getNeedMessage() const {
  return needMessage;
}
void HotelSoldOrdersIncrementGetRequest::setNeedMessage (bool needMessage) {
  this->needMessage = needMessage;
  appParams.insert("need_message", needMessage? "true": "false");
}

qlonglong HotelSoldOrdersIncrementGetRequest::getPageNo() const {
  return pageNo;
}
void HotelSoldOrdersIncrementGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong HotelSoldOrdersIncrementGetRequest::getPageSize() const {
  return pageSize;
}
void HotelSoldOrdersIncrementGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime HotelSoldOrdersIncrementGetRequest::getStartModified() const {
  return startModified;
}
void HotelSoldOrdersIncrementGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

QString HotelSoldOrdersIncrementGetRequest::getStatus() const {
  return status;
}
void HotelSoldOrdersIncrementGetRequest::setStatus (QString status) {
  this->status = status;
  appParams.insert("status", status);
}

bool HotelSoldOrdersIncrementGetRequest::getUseHasNext() const {
  return useHasNext;
}
void HotelSoldOrdersIncrementGetRequest::setUseHasNext (bool useHasNext) {
  this->useHasNext = useHasNext;
  appParams.insert("use_has_next", useHasNext? "true": "false");
}



HotelSoldOrdersIncrementGetResponse *HotelSoldOrdersIncrementGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelSoldOrdersIncrementGetResponse *tmpResponse = new HotelSoldOrdersIncrementGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
