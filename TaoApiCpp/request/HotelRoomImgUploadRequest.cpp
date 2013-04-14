#include <TaoApiCpp/request/HotelRoomImgUploadRequest.h>

QString HotelRoomImgUploadRequest::getApiMethodName() const {
  return "taobao.hotel.room.img.upload";
}

qlonglong HotelRoomImgUploadRequest::getGid() const {
  return gid;
}
void HotelRoomImgUploadRequest::setGid (qlonglong gid) {
  this->gid = gid;
  appParams.insert("gid", QString::number(gid));
}

FileItem HotelRoomImgUploadRequest::getPic() const {
  return pic;
}
void HotelRoomImgUploadRequest::setPic (FileItem pic) {
  this->pic = pic;
  fileParams.insert("pic", pic);
}

qlonglong HotelRoomImgUploadRequest::getPosition() const {
  return position;
}
void HotelRoomImgUploadRequest::setPosition (qlonglong position) {
  this->position = position;
  appParams.insert("position", QString::number(position));
}



HotelRoomImgUploadResponse *HotelRoomImgUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelRoomImgUploadResponse *tmpResponse = new HotelRoomImgUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
