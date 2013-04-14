#include <TaoApiCpp/response/SimbaAdgroupAdgroupcatmatchsGetResponse.h>

QList<ADGroupCatmatch> SimbaAdgroupAdgroupcatmatchsGetResponse::getAdgroupCatmatchList() const {
  return adgroupCatmatchList;
}
void SimbaAdgroupAdgroupcatmatchsGetResponse::setAdgroupCatmatchList (QList<ADGroupCatmatch> adgroupCatmatchList) {
  this->adgroupCatmatchList = adgroupCatmatchList;
}

void SimbaAdgroupAdgroupcatmatchsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("adgroup_catmatch_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("adgroup_catmatch_list");
  Parser *parser;
  foreach (parser, listParser) {
    ADGroupCatmatch tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    adgroupCatmatchList.append(tmp);
  }
  }

}

