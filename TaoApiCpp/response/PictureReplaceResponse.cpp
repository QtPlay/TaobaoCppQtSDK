#include <TaoApiCpp/response/PictureReplaceResponse.h>

bool PictureReplaceResponse::getDone() const {
  return done;
}
void PictureReplaceResponse::setDone (bool done) {
  this->done = done;
}

void PictureReplaceResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("done")) {
  done = responseParser->getBoolByName("done");
  }

}

