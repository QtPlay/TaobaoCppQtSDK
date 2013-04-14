#include <TaoApiCpp/response/RdsDbCreateResponse.h>

RdsDbInfo RdsDbCreateResponse::getRdsDbInfo() const {
  return rdsDbInfo;
}
void RdsDbCreateResponse::setRdsDbInfo (RdsDbInfo rdsDbInfo) {
  this->rdsDbInfo = rdsDbInfo;
}

void RdsDbCreateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("rds_db_info")) {
  rdsDbInfo.setParser(responseParser->getObjectParser("rds_db_info"));
  rdsDbInfo.parseResponse();
  }

}

