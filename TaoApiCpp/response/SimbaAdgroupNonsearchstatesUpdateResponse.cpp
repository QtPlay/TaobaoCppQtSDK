#include <TaoApiCpp/response/SimbaAdgroupNonsearchstatesUpdateResponse.h>

QList<ADGroup> SimbaAdgroupNonsearchstatesUpdateResponse::getAdgroupList() const {
  return adgroupList;
}
void SimbaAdgroupNonsearchstatesUpdateResponse::setAdgroupList (QList<ADGroup> adgroupList) {
  this->adgroupList = adgroupList;
}

void SimbaAdgroupNonsearchstatesUpdateResponse::parseNormalResponse() {
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

