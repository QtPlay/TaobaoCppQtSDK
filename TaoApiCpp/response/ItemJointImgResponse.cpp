#include <TaoApiCpp/response/ItemJointImgResponse.h>

ItemImg ItemJointImgResponse::getItemImg() const {
  return itemImg;
}
void ItemJointImgResponse::setItemImg (ItemImg itemImg) {
  this->itemImg = itemImg;
}

void ItemJointImgResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_img")) {
  itemImg.setParser(responseParser->getObjectParser("item_img"));
  itemImg.parseResponse();
  }

}

