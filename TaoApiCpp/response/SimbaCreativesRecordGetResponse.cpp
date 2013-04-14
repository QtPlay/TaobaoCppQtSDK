#include <TaoApiCpp/response/SimbaCreativesRecordGetResponse.h>

QList<CreativeRecord> SimbaCreativesRecordGetResponse::getCreativerecords() const {
  return creativerecords;
}
void SimbaCreativesRecordGetResponse::setCreativerecords (QList<CreativeRecord> creativerecords) {
  this->creativerecords = creativerecords;
}

void SimbaCreativesRecordGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("creativerecords")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("creativerecords");
  Parser *parser;
  foreach (parser, listParser) {
    CreativeRecord tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    creativerecords.append(tmp);
  }
  }

}

