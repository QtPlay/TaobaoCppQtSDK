#include <TaoApiCpp/response/PictureCategoryAddResponse.h>

PictureCategory PictureCategoryAddResponse::getPictureCategory() const {
  return pictureCategory;
}
void PictureCategoryAddResponse::setPictureCategory (PictureCategory pictureCategory) {
  this->pictureCategory = pictureCategory;
}

void PictureCategoryAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("picture_category")) {
  pictureCategory.setParser(responseParser->getObjectParser("picture_category"));
  pictureCategory.parseResponse();
  }

}

