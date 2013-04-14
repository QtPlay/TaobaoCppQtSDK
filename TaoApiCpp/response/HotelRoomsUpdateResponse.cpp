#include <TaoApiCpp/response/HotelRoomsUpdateResponse.h>

QList<QString> HotelRoomsUpdateResponse::getGids() const {
  return gids;
}
void HotelRoomsUpdateResponse::setGids (QList<QString> gids) {
  this->gids = gids;
}

void HotelRoomsUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("gids")) {
  gids = responseParser->getListStrByName("gids");
  }

}

