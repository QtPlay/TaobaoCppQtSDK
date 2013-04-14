#include <TaoApiCpp/response/FenxiaoProductSkuUpdateResponse.h>

QDateTime FenxiaoProductSkuUpdateResponse::getCreated() const {
  return created;
}
void FenxiaoProductSkuUpdateResponse::setCreated (QDateTime created) {
  this->created = created;
}
bool FenxiaoProductSkuUpdateResponse::getResult() const {
  return result;
}
void FenxiaoProductSkuUpdateResponse::setResult (bool result) {
  this->result = result;
}

void FenxiaoProductSkuUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("result")) {
  result = responseParser->getBoolByName("result");
  }

}

