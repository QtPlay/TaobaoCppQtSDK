#include <TaoApiCpp/response/InventoryInitialResponse.h>

QList<TipInfo> InventoryInitialResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryInitialResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryInitialResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("tip_infos")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("tip_infos");
  Parser *parser;
  foreach (parser, listParser) {
    TipInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    tipInfos.append(tmp);
  }
  }

}

