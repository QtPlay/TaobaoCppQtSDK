#include <TaoApiCpp/response/ItemPropimgDeleteResponse.h>

PropImg ItemPropimgDeleteResponse::getPropImg() const {
  return propImg;
}
void ItemPropimgDeleteResponse::setPropImg (PropImg propImg) {
  this->propImg = propImg;
}

void ItemPropimgDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("prop_img")) {
  propImg.setParser(responseParser->getObjectParser("prop_img"));
  propImg.parseResponse();
  }

}

