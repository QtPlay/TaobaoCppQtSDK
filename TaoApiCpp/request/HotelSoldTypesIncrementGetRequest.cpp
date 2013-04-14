#include <TaoApiCpp/request/HotelSoldTypesIncrementGetRequest.h>

QString HotelSoldTypesIncrementGetRequest::getApiMethodName() const {
  return "taobao.hotel.sold.types.increment.get";
}

QDateTime HotelSoldTypesIncrementGetRequest::getEndModified() const {
  return endModified;
}
void HotelSoldTypesIncrementGetRequest::setEndModified (QDateTime endModified) {
  this->endModified = endModified;
  appParams.insert("end_modified", endModified.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong HotelSoldTypesIncrementGetRequest::getPageNo() const {
  return pageNo;
}
void HotelSoldTypesIncrementGetRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong HotelSoldTypesIncrementGetRequest::getPageSize() const {
  return pageSize;
}
void HotelSoldTypesIncrementGetRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime HotelSoldTypesIncrementGetRequest::getStartModified() const {
  return startModified;
}
void HotelSoldTypesIncrementGetRequest::setStartModified (QDateTime startModified) {
  this->startModified = startModified;
  appParams.insert("start_modified", startModified.toString("yyyy-MM-dd hh:mm:ss"));
}

bool HotelSoldTypesIncrementGetRequest::getUseHasNext() const {
  return useHasNext;
}
void HotelSoldTypesIncrementGetRequest::setUseHasNext (bool useHasNext) {
  this->useHasNext = useHasNext;
  appParams.insert("use_has_next", useHasNext? "true": "false");
}



HotelSoldTypesIncrementGetResponse *HotelSoldTypesIncrementGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelSoldTypesIncrementGetResponse *tmpResponse = new HotelSoldTypesIncrementGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
