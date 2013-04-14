#include <TaoApiCpp/response/FenxiaoProductAddResponse.h>

QDateTime FenxiaoProductAddResponse::getCreated() const {
  return created;
}
void FenxiaoProductAddResponse::setCreated (QDateTime created) {
  this->created = created;
}
qlonglong FenxiaoProductAddResponse::getPid() const {
  return pid;
}
void FenxiaoProductAddResponse::setPid (qlonglong pid) {
  this->pid = pid;
}

void FenxiaoProductAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("pid")) {
  pid = responseParser->getNumByName("pid");
  }

}

