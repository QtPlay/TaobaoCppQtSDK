#include <TaoApiCpp/response/ItemPropimgUploadResponse.h>

PropImg ItemPropimgUploadResponse::getPropImg() const {
  return propImg;
}
void ItemPropimgUploadResponse::setPropImg (PropImg propImg) {
  this->propImg = propImg;
}

void ItemPropimgUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("prop_img")) {
  propImg.setParser(responseParser->getObjectParser("prop_img"));
  propImg.parseResponse();
  }

}

