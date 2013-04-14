#include <TaoApiCpp/response/InventoryAuthorizeGetResponse.h>

QList<InventoryAuthorizeInfo> InventoryAuthorizeGetResponse::getAuthorizeList() const {
  return authorizeList;
}
void InventoryAuthorizeGetResponse::setAuthorizeList (QList<InventoryAuthorizeInfo> authorizeList) {
  this->authorizeList = authorizeList;
}

void InventoryAuthorizeGetResponse::parseNormalResponse() {
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

