#include <TaoApiCpp/response/TaobaokeWidgetShopsConvertResponse.h>

QList<TaobaokeShop> TaobaokeWidgetShopsConvertResponse::getTaobaokeShops() const {
  return taobaokeShops;
}
void TaobaokeWidgetShopsConvertResponse::setTaobaokeShops (QList<TaobaokeShop> taobaokeShops) {
  this->taobaokeShops = taobaokeShops;
}

void TaobaokeWidgetShopsConvertResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("taobaoke_shops")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("taobaoke_shops");
  Parser *parser;
  foreach (parser, listParser) {
    TaobaokeShop tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    taobaokeShops.append(tmp);
  }
  }

}

