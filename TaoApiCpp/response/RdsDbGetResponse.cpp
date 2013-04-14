#include <TaoApiCpp/response/RdsDbGetResponse.h>

QList<RdsDbInfo> RdsDbGetResponse::getRdsDbInfos() const {
  return rdsDbInfos;
}
void RdsDbGetResponse::setRdsDbInfos (QList<RdsDbInfo> rdsDbInfos) {
  this->rdsDbInfos = rdsDbInfos;
}

void RdsDbGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rds_db_infos")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("rds_db_infos");
  Parser *parser;
  foreach (parser, listParser) {
    RdsDbInfo tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    rdsDbInfos.append(tmp);
  }
  }

}

