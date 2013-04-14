#include <TaoApiCpp/response/FavoriteAddResponse.h>

bool FavoriteAddResponse::getSuccess() const {
  return success;
}
void FavoriteAddResponse::setSuccess (bool success) {
  this->success = success;
}

void FavoriteAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("success")) {
  success = responseParser->getBoolByName("success");
  }

}

