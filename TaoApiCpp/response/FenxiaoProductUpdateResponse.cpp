#include <TaoApiCpp/response/FenxiaoProductUpdateResponse.h>

QDateTime FenxiaoProductUpdateResponse::getModified() const {
  return modified;
}
void FenxiaoProductUpdateResponse::setModified (QDateTime modified) {
  this->modified = modified;
}
qlonglong FenxiaoProductUpdateResponse::getPid() const {
  return pid;
}
void FenxiaoProductUpdateResponse::setPid (qlonglong pid) {
  this->pid = pid;
}

void FenxiaoProductUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("modified")) {
  modified = responseParser->getDateByName("modified");
  }
  if (responseParser->hasName("pid")) {
  pid = responseParser->getNumByName("pid");
  }

}

