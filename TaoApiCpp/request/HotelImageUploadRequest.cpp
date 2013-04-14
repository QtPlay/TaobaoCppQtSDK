#include <TaoApiCpp/request/HotelImageUploadRequest.h>

QString HotelImageUploadRequest::getApiMethodName() const {
  return "taobao.hotel.image.upload";
}

qlonglong HotelImageUploadRequest::getHid() const {
  return hid;
}
void HotelImageUploadRequest::setHid (qlonglong hid) {
  this->hid = hid;
  appParams.insert("hid", QString::number(hid));
}

FileItem HotelImageUploadRequest::getPic() const {
  return pic;
}
void HotelImageUploadRequest::setPic (FileItem pic) {
  this->pic = pic;
  fileParams.insert("pic", pic);
}



HotelImageUploadResponse *HotelImageUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelImageUploadResponse *tmpResponse = new HotelImageUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
