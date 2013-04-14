#include <TaoApiCpp/domain/HotelImage.h>
qlonglong HotelImage::getHid() const {
  return hid;
}
void HotelImage::setHid (qlonglong hid) {
  this->hid = hid;
}

QString HotelImage::getPic() const {
  return pic;
}
void HotelImage::setPic (QString pic) {
  this->pic = pic;
}


void HotelImage::parseResponse() {
  if (responseParser->hasName("hid")) {
  hid = responseParser->getNumByName("hid");
  }
  if (responseParser->hasName("pic")) {
  pic = responseParser->getStrByName("pic");
  }

}

