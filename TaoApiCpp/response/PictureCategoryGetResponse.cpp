#include <TaoApiCpp/response/PictureCategoryGetResponse.h>

QList<PictureCategory> PictureCategoryGetResponse::getPictureCategories() const {
  return pictureCategories;
}
void PictureCategoryGetResponse::setPictureCategories (QList<PictureCategory> pictureCategories) {
  this->pictureCategories = pictureCategories;
}

void PictureCategoryGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("picture_categories")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("picture_categories");
  Parser *parser;
  foreach (parser, listParser) {
    PictureCategory tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    pictureCategories.append(tmp);
  }
  }

}

