#include <TaoApiCpp/response/PictureGetResponse.h>

QList<Picture> PictureGetResponse::getPictures() const {
  return pictures;
}
void PictureGetResponse::setPictures (QList<Picture> pictures) {
  this->pictures = pictures;
}
qlonglong PictureGetResponse::getTotalResults() const {
  return totalResults;
}
void PictureGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void PictureGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("pictures")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("pictures");
  Parser *parser;
  foreach (parser, listParser) {
    Picture tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    pictures.append(tmp);
  }
  }
  if (responseParser->hasName("totalResults")) {
  totalResults = responseParser->getNumByName("totalResults");
  }

}

