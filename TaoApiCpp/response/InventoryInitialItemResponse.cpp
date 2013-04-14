#include <TaoApiCpp/response/InventoryInitialItemResponse.h>

QList<TipInfo> InventoryInitialItemResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryInitialItemResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryInitialItemResponse::parseNormalResponse() {
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

