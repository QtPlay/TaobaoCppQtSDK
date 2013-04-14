#include <TaoApiCpp/response/RoductSpecPicUploadResponse.h>

QString RoductSpecPicUploadResponse::getSpecPicUrl() const {
  return specPicUrl;
}
void RoductSpecPicUploadResponse::setSpecPicUrl (QString specPicUrl) {
  this->specPicUrl = specPicUrl;
}

void RoductSpecPicUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("spec_pic_url")) {
  specPicUrl = responseParser->getStrByName("spec_pic_url");
  }

}

