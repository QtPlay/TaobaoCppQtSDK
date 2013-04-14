#include <TaoApiCpp/response/ScitemUpdateResponse.h>

qlonglong ScitemUpdateResponse::getUpdateRows() const {
  return updateRows;
}
void ScitemUpdateResponse::setUpdateRows (qlonglong updateRows) {
  this->updateRows = updateRows;
}

void ScitemUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("update_rows")) {
  updateRows = responseParser->getNumByName("update_rows");
  }

}

