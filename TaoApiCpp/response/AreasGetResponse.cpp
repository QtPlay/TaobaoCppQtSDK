#include <TaoApiCpp/response/AreasGetResponse.h>

QList<Area> AreasGetResponse::getAreas() const {
  return areas;
}
void AreasGetResponse::setAreas (QList<Area> areas) {
  this->areas = areas;
}

void AreasGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("areas")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("areas");
  Parser *parser;
  foreach (parser, listParser) {
    Area tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    areas.append(tmp);
  }
  }

}

