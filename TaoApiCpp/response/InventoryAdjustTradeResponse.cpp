#include <TaoApiCpp/response/InventoryAdjustTradeResponse.h>

QString InventoryAdjustTradeResponse::getOperateCode() const {
  return operateCode;
}
void InventoryAdjustTradeResponse::setOperateCode (QString operateCode) {
  this->operateCode = operateCode;
}
QList<TipInfo> InventoryAdjustTradeResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryAdjustTradeResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryAdjustTradeResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("operate_code")) {
  operateCode = responseParser->getStrByName("operate_code");
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

