#include <TaoApiCpp/response/SimbaNonsearchAdgroupplacesUpdateResponse.h>

QList<ADGroupPlace> SimbaNonsearchAdgroupplacesUpdateResponse::getAdgroupPlaceList() const {
  return adgroupPlaceList;
}
void SimbaNonsearchAdgroupplacesUpdateResponse::setAdgroupPlaceList (QList<ADGroupPlace> adgroupPlaceList) {
  this->adgroupPlaceList = adgroupPlaceList;
}

void SimbaNonsearchAdgroupplacesUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroup_place_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("adgroup_place_list");
  Parser *parser;
  foreach (parser, listParser) {
    ADGroupPlace tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    adgroupPlaceList.append(tmp);
  }
  }

}

