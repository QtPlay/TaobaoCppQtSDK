#include <TaoApiCpp/response/PictureUpdateResponse.h>

bool PictureUpdateResponse::getDone() const {
  return done;
}
void PictureUpdateResponse::setDone (bool done) {
  this->done = done;
}

void PictureUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("done")) {
  done = responseParser->getBoolByName("done");
  }

}

