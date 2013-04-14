#include <TaoApiCpp/response/ItemImgUploadResponse.h>

ItemImg ItemImgUploadResponse::getItemImg() const {
  return itemImg;
}
void ItemImgUploadResponse::setItemImg (ItemImg itemImg) {
  this->itemImg = itemImg;
}

void ItemImgUploadResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("item_img")) {
  itemImg.setParser(responseParser->getObjectParser("item_img"));
  itemImg.parseResponse();
  }

}

