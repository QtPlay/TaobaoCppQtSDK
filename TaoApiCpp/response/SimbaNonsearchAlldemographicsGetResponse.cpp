#include <TaoApiCpp/response/SimbaNonsearchAlldemographicsGetResponse.h>

QList<Demographic> SimbaNonsearchAlldemographicsGetResponse::getDemographicList() const {
  return demographicList;
}
void SimbaNonsearchAlldemographicsGetResponse::setDemographicList (QList<Demographic> demographicList) {
  this->demographicList = demographicList;
}

void SimbaNonsearchAlldemographicsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("demographic_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("demographic_list");
  Parser *parser;
  foreach (parser, listParser) {
    Demographic tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    demographicList.append(tmp);
  }
  }

}

