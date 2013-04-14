#include <TaoApiCpp/response/PictureDeleteResponse.h>

bool PictureDeleteResponse::getSuccess() const {
  return success;
}
void PictureDeleteResponse::setSuccess (bool success) {
  this->success = success;
}

void PictureDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("success")) {
  success = responseParser->getBoolByName("success");
  }

}

