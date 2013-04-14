#include <TaoApiCpp/response/ItemImgDeleteResponse.h>

ItemImg ItemImgDeleteResponse::getItemImg() const {
  return itemImg;
}
void ItemImgDeleteResponse::setItemImg (ItemImg itemImg) {
  this->itemImg = itemImg;
}

void ItemImgDeleteResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_img")) {
  itemImg.setParser(responseParser->getObjectParser("item_img"));
  itemImg.parseResponse();
  }

}

