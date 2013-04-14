#include <TaoApiCpp/response/FenxiaoProductSkuAddResponse.h>

QDateTime FenxiaoProductSkuAddResponse::getCreated() const {
  return created;
}
void FenxiaoProductSkuAddResponse::setCreated (QDateTime created) {
  this->created = created;
}
bool FenxiaoProductSkuAddResponse::getResult() const {
  return result;
}
void FenxiaoProductSkuAddResponse::setResult (bool result) {
  this->result = result;
}

void FenxiaoProductSkuAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("result")) {
  result = responseParser->getBoolByName("result");
  }

}

