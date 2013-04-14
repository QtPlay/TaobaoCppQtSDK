#include <TaoApiCpp/domain/CertPicInfo.h>
qlonglong CertPicInfo::getCertType() const {
  return certType;
}
void CertPicInfo::setCertType (qlonglong certType) {
  this->certType = certType;
}

QString CertPicInfo::getPicUrl() const {
  return picUrl;
}
void CertPicInfo::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}


void CertPicInfo::parseResponse() {
  if (responseParser->hasName("cert_type")) {
  certType = responseParser->getNumByName("cert_type");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }

}

