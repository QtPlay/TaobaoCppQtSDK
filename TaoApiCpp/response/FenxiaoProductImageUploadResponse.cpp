#include <TaoApiCpp/response/FenxiaoProductImageUploadResponse.h>

QDateTime FenxiaoProductImageUploadResponse::getCreated() const {
  return created;
}
void FenxiaoProductImageUploadResponse::setCreated (QDateTime created) {
  this->created = created;
}
bool FenxiaoProductImageUploadResponse::getResult() const {
  return result;
}
void FenxiaoProductImageUploadResponse::setResult (bool result) {
  this->result = result;
}

void FenxiaoProductImageUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("result")) {
  result = responseParser->getBoolByName("result");
  }

}

