#include <TaoApiCpp/response/UmpRangeGetResponse.h>

QList<Range> UmpRangeGetResponse::getRanges() const {
  return ranges;
}
void UmpRangeGetResponse::setRanges (QList<Range> ranges) {
  this->ranges = ranges;
}

void UmpRangeGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("ranges")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("ranges");
  Parser *parser;
  foreach (parser, listParser) {
    Range tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    ranges.append(tmp);
  }
  }

}

