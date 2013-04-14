#include <TaoApiCpp/response/SimbaAdgroupNonsearchpricesUpdateResponse.h>

QList<ADGroup> SimbaAdgroupNonsearchpricesUpdateResponse::getAdgroupList() const {
  return adgroupList;
}
void SimbaAdgroupNonsearchpricesUpdateResponse::setAdgroupList (QList<ADGroup> adgroupList) {
  this->adgroupList = adgroupList;
}

void SimbaAdgroupNonsearchpricesUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroup_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("adgroup_list");
  Parser *parser;
  foreach (parser, listParser) {
    ADGroup tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    adgroupList.append(tmp);
  }
  }

}

