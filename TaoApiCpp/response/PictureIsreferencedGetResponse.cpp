#include <TaoApiCpp/response/PictureIsreferencedGetResponse.h>

bool PictureIsreferencedGetResponse::getIsReferenced() const {
  return isReferenced;
}
void PictureIsreferencedGetResponse::setIsReferenced (bool isReferenced) {
  this->isReferenced = isReferenced;
}

void PictureIsreferencedGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("is_referenced")) {
  isReferenced = responseParser->getBoolByName("is_referenced");
  }

}

