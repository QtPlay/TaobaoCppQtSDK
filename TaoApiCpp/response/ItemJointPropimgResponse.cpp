#include <TaoApiCpp/response/ItemJointPropimgResponse.h>

PropImg ItemJointPropimgResponse::getPropImg() const {
  return propImg;
}
void ItemJointPropimgResponse::setPropImg (PropImg propImg) {
  this->propImg = propImg;
}

void ItemJointPropimgResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("prop_img")) {
  propImg.setParser(responseParser->getObjectParser("prop_img"));
  propImg.parseResponse();
  }

}

