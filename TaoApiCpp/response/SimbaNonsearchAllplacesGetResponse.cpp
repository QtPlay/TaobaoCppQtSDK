#include <TaoApiCpp/response/SimbaNonsearchAllplacesGetResponse.h>

QList<Place> SimbaNonsearchAllplacesGetResponse::getPlaceList() const {
  return placeList;
}
void SimbaNonsearchAllplacesGetResponse::setPlaceList (QList<Place> placeList) {
  this->placeList = placeList;
}

void SimbaNonsearchAllplacesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("place_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("place_list");
  Parser *parser;
  foreach (parser, listParser) {
    Place tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    placeList.append(tmp);
  }
  }

}

