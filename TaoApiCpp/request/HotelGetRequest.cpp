#include <TaoApiCpp/request/HotelGetRequest.h>

QString HotelGetRequest::getApiMethodName() const {
  return "taobao.hotel.get";
}

bool HotelGetRequest::getCheckAudit() const {
  return checkAudit;
}
void HotelGetRequest::setCheckAudit (bool checkAudit) {
  this->checkAudit = checkAudit;
  appParams.insert("check_audit", checkAudit? "true": "false");
}

qlonglong HotelGetRequest::getHid() const {
  return hid;
}
void HotelGetRequest::setHid (qlonglong hid) {
  this->hid = hid;
  appParams.insert("hid", QString::number(hid));
}

bool HotelGetRequest::getNeedRoomType() const {
  return needRoomType;
}
void HotelGetRequest::setNeedRoomType (bool needRoomType) {
  this->needRoomType = needRoomType;
  appParams.insert("need_room_type", needRoomType? "true": "false");
}



HotelGetResponse *HotelGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelGetResponse *tmpResponse = new HotelGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
