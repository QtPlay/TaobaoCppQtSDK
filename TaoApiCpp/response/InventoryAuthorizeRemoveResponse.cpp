#include <TaoApiCpp/response/InventoryAuthorizeRemoveResponse.h>

QList<TipInfo> InventoryAuthorizeRemoveResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryAuthorizeRemoveResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryAuthorizeRemoveResponse::parseNormalResponse() {
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

