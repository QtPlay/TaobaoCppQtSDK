#include <TaoApiCpp/response/InventoryAdjustExternalResponse.h>

QString InventoryAdjustExternalResponse::getOperateCode() const {
  return operateCode;
}
void InventoryAdjustExternalResponse::setOperateCode (QString operateCode) {
  this->operateCode = operateCode;
}
QList<TipInfo> InventoryAdjustExternalResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryAdjustExternalResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryAdjustExternalResponse::parseNormalResponse() {
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

