#include <TaoApiCpp/response/FenxiaoProductSkuDeleteResponse.h>

QDateTime FenxiaoProductSkuDeleteResponse::getCreated() const {
  return created;
}
void FenxiaoProductSkuDeleteResponse::setCreated (QDateTime created) {
  this->created = created;
}
bool FenxiaoProductSkuDeleteResponse::getResult() const {
  return result;
}
void FenxiaoProductSkuDeleteResponse::setResult (bool result) {
  this->result = result;
}

void FenxiaoProductSkuDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("result")) {
  result = responseParser->getBoolByName("result");
  }

}

