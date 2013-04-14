#include <TaoApiCpp/response/SimbaNonsearchAdgroupplacesAddResponse.h>

QList<ADGroupPlace> SimbaNonsearchAdgroupplacesAddResponse::getAdgroupPlaceList() const {
  return adgroupPlaceList;
}
void SimbaNonsearchAdgroupplacesAddResponse::setAdgroupPlaceList (QList<ADGroupPlace> adgroupPlaceList) {
  this->adgroupPlaceList = adgroupPlaceList;
}

void SimbaNonsearchAdgroupplacesAddResponse::parseNormalResponse() {
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

