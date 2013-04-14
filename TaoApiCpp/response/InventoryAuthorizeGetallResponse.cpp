#include <TaoApiCpp/response/InventoryAuthorizeGetallResponse.h>

QList<InventoryAuthorizeInfo> InventoryAuthorizeGetallResponse::getAuthorizeList() const {
  return authorizeList;
}
void InventoryAuthorizeGetallResponse::setAuthorizeList (QList<InventoryAuthorizeInfo> authorizeList) {
  this->authorizeList = authorizeList;
}

void InventoryAuthorizeGetallResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("authorize_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("authorize_list");
  Parser *parser;
  foreach (parser, listParser) {
    InventoryAuthorizeInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    authorizeList.append(tmp);
  }
  }

}

