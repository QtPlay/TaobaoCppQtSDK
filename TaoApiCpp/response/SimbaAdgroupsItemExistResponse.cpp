#include <TaoApiCpp/response/SimbaAdgroupsItemExistResponse.h>

bool SimbaAdgroupsItemExistResponse::getExist() const {
  return exist;
}
void SimbaAdgroupsItemExistResponse::setExist (bool exist) {
  this->exist = exist;
}

void SimbaAdgroupsItemExistResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("exist")) {
  exist = responseParser->getBoolByName("exist");
  }

}

