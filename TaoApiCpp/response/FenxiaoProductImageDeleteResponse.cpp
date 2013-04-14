#include <TaoApiCpp/response/FenxiaoProductImageDeleteResponse.h>

QDateTime FenxiaoProductImageDeleteResponse::getCreated() const {
  return created;
}
void FenxiaoProductImageDeleteResponse::setCreated (QDateTime created) {
  this->created = created;
}
bool FenxiaoProductImageDeleteResponse::getResult() const {
  return result;
}
void FenxiaoProductImageDeleteResponse::setResult (bool result) {
  this->result = result;
}

void FenxiaoProductImageDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("result")) {
  result = responseParser->getBoolByName("result");
  }

}

