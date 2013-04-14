#include <TaoApiCpp/request/HotelSoldHotelsIncrementGetRequest.h>

QString HotelSoldHotelsIncrementGetRequest::getApiMethodName() const {
  return "taobao.hotel.sold.hotels.increment.get";
}

QDateTime HotelSoldHotelsIncrementGetRequest::getEndModified() const {
  return endModified;
}
void HotelSoldHotelsIncrementGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong HotelSoldHotelsIncrementGetRequest::getPageNo() const {
  return pageNo;
}
void HotelSoldHotelsIncrementGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong HotelSoldHotelsIncrementGetRequest::getPageSize() const {
  return pageSize;
}
void HotelSoldHotelsIncrementGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime HotelSoldHotelsIncrementGetRequest::getStartModified() const {
  return startModified;
}
void HotelSoldHotelsIncrementGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

bool HotelSoldHotelsIncrementGetRequest::getUseHasNext() const {
  return useHasNext;
}
void HotelSoldHotelsIncrementGetRequest::setUseHasNext (bool useHasNext) {
  this->useHasNext = useHasNext;
  appParams.insert("use_has_next", useHasNext? "true": "false");
}



HotelSoldHotelsIncrementGetResponse *HotelSoldHotelsIncrementGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelSoldHotelsIncrementGetResponse *tmpResponse = new HotelSoldHotelsIncrementGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
