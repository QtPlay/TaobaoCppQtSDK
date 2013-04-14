#include <TaoApiCpp/request/RoductSpecPicUploadRequest.h>

QString RoductSpecPicUploadRequest::getApiMethodName() const {
  return "tmall.product.spec.pic.upload";
}

FileItem RoductSpecPicUploadRequest::getCertifyPic() const {
  return certifyPic;
}
void RoductSpecPicUploadRequest::setCertifyPic (FileItem certifyPic) {
  this->certifyPic = certifyPic;
  fileParams.insert("certify_pic", certifyPic);
}

qlonglong RoductSpecPicUploadRequest::getCertifyType() const {
  return certifyType;
}
void RoductSpecPicUploadRequest::setCertifyType (qlonglong certifyType) {
  this->certifyType = certifyType;
  appParams.insert("certify_type", QString::number(certifyType));
}



RoductSpecPicUploadResponse *RoductSpecPicUploadRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  RoductSpecPicUploadResponse *tmpResponse = new RoductSpecPicUploadResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
