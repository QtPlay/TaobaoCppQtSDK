#include <TaoApiCpp/response/SimbaNonsearchAdgroupplacesDeleteResponse.h>

QList<ADGroupPlace> SimbaNonsearchAdgroupplacesDeleteResponse::getAdgroupPlaceList() const {
  return adgroupPlaceList;
}
void SimbaNonsearchAdgroupplacesDeleteResponse::setAdgroupPlaceList (QList<ADGroupPlace> adgroupPlaceList) {
  this->adgroupPlaceList = adgroupPlaceList;
}

void SimbaNonsearchAdgroupplacesDeleteResponse::parseNormalResponse() {
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

