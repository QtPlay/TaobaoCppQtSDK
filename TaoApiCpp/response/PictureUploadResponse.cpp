#include <TaoApiCpp/response/PictureUploadResponse.h>

Picture PictureUploadResponse::getPicture() const {
  return picture;
}
void PictureUploadResponse::setPicture (Picture picture) {
  this->picture = picture;
}

void PictureUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("picture")) {
  picture.setParser(responseParser->getObjectParser("picture"));
  picture.parseResponse();
  }

}

