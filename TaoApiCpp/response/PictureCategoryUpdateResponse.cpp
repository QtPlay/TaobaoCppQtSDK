#include <TaoApiCpp/response/PictureCategoryUpdateResponse.h>

bool PictureCategoryUpdateResponse::getDone() const {
  return done;
}
void PictureCategoryUpdateResponse::setDone (bool done) {
  this->done = done;
}

void PictureCategoryUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("done")) {
  done = responseParser->getBoolByName("done");
  }

}

