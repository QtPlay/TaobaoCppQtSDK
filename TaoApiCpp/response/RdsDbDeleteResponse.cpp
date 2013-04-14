#include <TaoApiCpp/response/RdsDbDeleteResponse.h>

RdsDbInfo RdsDbDeleteResponse::getRdsDbInfo() const {
  return rdsDbInfo;
}
void RdsDbDeleteResponse::setRdsDbInfo (RdsDbInfo rdsDbInfo) {
  this->rdsDbInfo = rdsDbInfo;
}

void RdsDbDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rds_db_info")) {
  rdsDbInfo.setParser(responseParser->getObjectParser("rds_db_info"));
  rdsDbInfo.parseResponse();
  }

}

