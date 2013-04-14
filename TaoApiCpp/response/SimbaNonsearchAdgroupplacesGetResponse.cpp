#include <TaoApiCpp/response/SimbaNonsearchAdgroupplacesGetResponse.h>

QList<ADGroupPlace> SimbaNonsearchAdgroupplacesGetResponse::getAdgroupPlaceList() const {
  return adgroupPlaceList;
}
void SimbaNonsearchAdgroupplacesGetResponse::setAdgroupPlaceList (QList<ADGroupPlace> adgroupPlaceList) {
  this->adgroupPlaceList = adgroupPlaceList;
}

void SimbaNonsearchAdgroupplacesGetResponse::parseNormalResponse() {
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

