#include <TaoApiCpp/response/CometDiscardinfoGetResponse.h>

QList<DiscardInfo> CometDiscardinfoGetResponse::getDiscardInfoList() const {
  return discardInfoList;
}
void CometDiscardinfoGetResponse::setDiscardInfoList (QList<DiscardInfo> discardInfoList) {
  this->discardInfoList = discardInfoList;
}

void CometDiscardinfoGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("discard_info_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("discard_info_list");
  Parser *parser;
  foreach (parser, listParser) {
    DiscardInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    discardInfoList.append(tmp);
  }
  }

}

