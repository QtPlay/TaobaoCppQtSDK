#include <TaoApiCpp/response/InventoryAuthorizeSetResponse.h>

QList<InventoryAuthorizeInfo> InventoryAuthorizeSetResponse::getAuthorizeResults() const {
  return authorizeResults;
}
void InventoryAuthorizeSetResponse::setAuthorizeResults (QList<InventoryAuthorizeInfo> authorizeResults) {
  this->authorizeResults = authorizeResults;
}
QList<TipInfo> InventoryAuthorizeSetResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryAuthorizeSetResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryAuthorizeSetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("authorize_results")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("authorize_results");
  Parser *parser;
  foreach (parser, listParser) {
    InventoryAuthorizeInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    authorizeResults.append(tmp);
  }
  }
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

