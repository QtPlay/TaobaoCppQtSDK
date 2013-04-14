#include <TaoApiCpp/request/HotelRoomImgDeleteRequest.h>

QString HotelRoomImgDeleteRequest::getApiMethodName() const {
  return "taobao.hotel.room.img.delete";
}

qlonglong HotelRoomImgDeleteRequest::getGid() const {
  return gid;
}
void HotelRoomImgDeleteRequest::setGid (qlonglong gid) {
  this->gid = gid;
  appParams.insert("gid", QString::number(gid));
}

qlonglong HotelRoomImgDeleteRequest::getPosition() const {
  return position;
}
void HotelRoomImgDeleteRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}



HotelRoomImgDeleteResponse *HotelRoomImgDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelRoomImgDeleteResponse *tmpResponse = new HotelRoomImgDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
