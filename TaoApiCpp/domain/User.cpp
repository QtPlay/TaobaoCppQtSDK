#include <TaoApiCpp/domain/User.h>
QString User::getAlipayBind() const {
  return alipayBind;
}
void User::setAlipayBind (QString alipayBind) {
  this->alipayBind = alipayBind;
}

QString User::getAutoRepost() const {
  return autoRepost;
}
void User::setAutoRepost (QString autoRepost) {
  this->autoRepost = autoRepost;
}

QString User::getAvatar() const {
  return avatar;
}
void User::setAvatar (QString avatar) {
  this->avatar = avatar;
}

QDateTime User::getBirthday() const {
  return birthday;
}
void User::setBirthday (QDateTime birthday) {
  this->birthday = birthday;
}

UserCredit User::getBuyerCredit() const {
  return buyerCredit;
}
void User::setBuyerCredit (UserCredit buyerCredit) {
  this->buyerCredit = buyerCredit;
}

bool User::getConsumerProtection() const {
  return consumerProtection;
}
void User::setConsumerProtection (bool consumerProtection) {
  this->consumerProtection = consumerProtection;
}

QDateTime User::getCreated() const {
  return created;
}
void User::setCreated (QDateTime created) {
  this->created = created;
}

QString User::getEmail() const {
  return email;
}
void User::setEmail (QString email) {
  this->email = email;
}

bool User::getHasMorePic() const {
  return hasMorePic;
}
void User::setHasMorePic (bool hasMorePic) {
  this->hasMorePic = hasMorePic;
}

bool User::getHasShop() const {
  return hasShop;
}
void User::setHasShop (bool hasShop) {
  this->hasShop = hasShop;
}

bool User::getHasSubStock() const {
  return hasSubStock;
}
void User::setHasSubStock (bool hasSubStock) {
  this->hasSubStock = hasSubStock;
}

bool User::getIsGoldenSeller() const {
  return isGoldenSeller;
}
void User::setIsGoldenSeller (bool isGoldenSeller) {
  this->isGoldenSeller = isGoldenSeller;
}

bool User::getIsLightningConsignment() const {
  return isLightningConsignment;
}
void User::setIsLightningConsignment (bool isLightningConsignment) {
  this->isLightningConsignment = isLightningConsignment;
}

qlonglong User::getItemImgNum() const {
  return itemImgNum;
}
void User::setItemImgNum (qlonglong itemImgNum) {
  this->itemImgNum = itemImgNum;
}

qlonglong User::getItemImgSize() const {
  return itemImgSize;
}
void User::setItemImgSize (qlonglong itemImgSize) {
  this->itemImgSize = itemImgSize;
}

QDateTime User::getLastVisit() const {
  return lastVisit;
}
void User::setLastVisit (QDateTime lastVisit) {
  this->lastVisit = lastVisit;
}

bool User::getLiangpin() const {
  return liangpin;
}
void User::setLiangpin (bool liangpin) {
  this->liangpin = liangpin;
}

Location User::getLocation() const {
  return location;
}
void User::setLocation (Location location) {
  this->location = location;
}

bool User::getMagazineSubscribe() const {
  return magazineSubscribe;
}
void User::setMagazineSubscribe (bool magazineSubscribe) {
  this->magazineSubscribe = magazineSubscribe;
}

QString User::getNick() const {
  return nick;
}
void User::setNick (QString nick) {
  this->nick = nick;
}

bool User::getOnlineGaming() const {
  return onlineGaming;
}
void User::setOnlineGaming (bool onlineGaming) {
  this->onlineGaming = onlineGaming;
}

QString User::getPromotedType() const {
  return promotedType;
}
void User::setPromotedType (QString promotedType) {
  this->promotedType = promotedType;
}

qlonglong User::getPropImgNum() const {
  return propImgNum;
}
void User::setPropImgNum (qlonglong propImgNum) {
  this->propImgNum = propImgNum;
}

qlonglong User::getPropImgSize() const {
  return propImgSize;
}
void User::setPropImgSize (qlonglong propImgSize) {
  this->propImgSize = propImgSize;
}

UserCredit User::getSellerCredit() const {
  return sellerCredit;
}
void User::setSellerCredit (UserCredit sellerCredit) {
  this->sellerCredit = sellerCredit;
}

QString User::getSex() const {
  return sex;
}
void User::setSex (QString sex) {
  this->sex = sex;
}

bool User::getSignFoodSellerPromise() const {
  return signFoodSellerPromise;
}
void User::setSignFoodSellerPromise (bool signFoodSellerPromise) {
  this->signFoodSellerPromise = signFoodSellerPromise;
}

QString User::getStatus() const {
  return status;
}
void User::setStatus (QString status) {
  this->status = status;
}

QString User::getType() const {
  return type;
}
void User::setType (QString type) {
  this->type = type;
}

QString User::getUid() const {
  return uid;
}
void User::setUid (QString uid) {
  this->uid = uid;
}

qlonglong User::getUserId() const {
  return userId;
}
void User::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString User::getVerticalMarket() const {
  return verticalMarket;
}
void User::setVerticalMarket (QString verticalMarket) {
  this->verticalMarket = verticalMarket;
}

QString User::getVipInfo() const {
  return vipInfo;
}
void User::setVipInfo (QString vipInfo) {
  this->vipInfo = vipInfo;
}


void User::parseResponse() {
  if (responseParser->hasName("alipay_bind")) {
  alipayBind = responseParser->getStrByName("alipay_bind");
  }
  if (responseParser->hasName("auto_repost")) {
  autoRepost = responseParser->getStrByName("auto_repost");
  }
  if (responseParser->hasName("avatar")) {
  avatar = responseParser->getStrByName("avatar");
  }
  if (responseParser->hasName("birthday")) {
  birthday = responseParser->getDateByName("birthday");
  }
  if (responseParser->hasName("buyer_credit")) {
  buyerCredit.setParser(responseParser->getObjectParser("buyer_credit"));
  buyerCredit.parseResponse();
  }
  if (responseParser->hasName("consumer_protection")) {
  consumerProtection = responseParser->getBoolByName("consumer_protection");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("email")) {
  email = responseParser->getStrByName("email");
  }
  if (responseParser->hasName("has_more_pic")) {
  hasMorePic = responseParser->getBoolByName("has_more_pic");
  }
  if (responseParser->hasName("has_shop")) {
  hasShop = responseParser->getBoolByName("has_shop");
  }
  if (responseParser->hasName("has_sub_stock")) {
  hasSubStock = responseParser->getBoolByName("has_sub_stock");
  }
  if (responseParser->hasName("is_golden_seller")) {
  isGoldenSeller = responseParser->getBoolByName("is_golden_seller");
  }
  if (responseParser->hasName("is_lightning_consignment")) {
  isLightningConsignment = responseParser->getBoolByName("is_lightning_consignment");
  }
  if (responseParser->hasName("item_img_num")) {
  itemImgNum = responseParser->getNumByName("item_img_num");
  }
  if (responseParser->hasName("item_img_size")) {
  itemImgSize = responseParser->getNumByName("item_img_size");
  }
  if (responseParser->hasName("last_visit")) {
  lastVisit = responseParser->getDateByName("last_visit");
  }
  if (responseParser->hasName("liangpin")) {
  liangpin = responseParser->getBoolByName("liangpin");
  }
  if (responseParser->hasName("location")) {
  location.setParser(responseParser->getObjectParser("location"));
  location.parseResponse();
  }
  if (responseParser->hasName("magazine_subscribe")) {
  magazineSubscribe = responseParser->getBoolByName("magazine_subscribe");
  }
  if (responseParser->hasName("nick")) {
  nick = responseParser->getStrByName("nick");
  }
  if (responseParser->hasName("online_gaming")) {
  onlineGaming = responseParser->getBoolByName("online_gaming");
  }
  if (responseParser->hasName("promoted_type")) {
  promotedType = responseParser->getStrByName("promoted_type");
  }
  if (responseParser->hasName("prop_img_num")) {
  propImgNum = responseParser->getNumByName("prop_img_num");
  }
  if (responseParser->hasName("prop_img_size")) {
  propImgSize = responseParser->getNumByName("prop_img_size");
  }
  if (responseParser->hasName("seller_credit")) {
  sellerCredit.setParser(responseParser->getObjectParser("seller_credit"));
  sellerCredit.parseResponse();
  }
  if (responseParser->hasName("sex")) {
  sex = responseParser->getStrByName("sex");
  }
  if (responseParser->hasName("sign_food_seller_promise")) {
  signFoodSellerPromise = responseParser->getBoolByName("sign_food_seller_promise");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }
  if (responseParser->hasName("uid")) {
  uid = responseParser->getStrByName("uid");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("vertical_market")) {
  verticalMarket = responseParser->getStrByName("vertical_market");
  }
  if (responseParser->hasName("vip_info")) {
  vipInfo = responseParser->getStrByName("vip_info");
  }

}

