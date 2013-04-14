#include <TaoApiCpp/response/InventoryOccupyApplyResponse.h>

QString InventoryOccupyApplyResponse::getOperateCode() const {
  return operateCode;
}
void InventoryOccupyApplyResponse::setOperateCode (QString operateCode) {
  this->operateCode = operateCode;
}
QList<TipInfo> InventoryOccupyApplyResponse::getTipInfos() const {
  return tipInfos;
}
void InventoryOccupyApplyResponse::setTipInfos (QList<TipInfo> tipInfos) {
  this->tipInfos = tipInfos;
}

void InventoryOccupyApplyResponse::parseNormalResponse() {
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

