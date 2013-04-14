#include <TaoApiCpp/response/InventoryAuthorizeRemoveallResponse.h>

QList<TipInfo> InventoryAuthorizeRemoveallResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryAuthorizeRemoveallResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryAuthorizeRemoveallResponse::parseNormalResponse() {
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

