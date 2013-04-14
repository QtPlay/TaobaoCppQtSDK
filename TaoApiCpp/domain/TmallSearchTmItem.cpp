#include <TaoApiCpp/domain/TmallSearchTmItem.h>
qlonglong TmallSearchTmItem::getBrandId() const {
  return brandId;
}
void TmallSearchTmItem::setBrandId (qlonglong brandId) {
  this->brandId = brandId;
}

QString TmallSearchTmItem::getBrandName() const {
  return brandName;
}
void TmallSearchTmItem::setBrandName (QString brandName) {
  this->brandName = brandName;
}

QString TmallSearchTmItem::getCommentNum() const {
  return commentNum;
}
void TmallSearchTmItem::setCommentNum (QString commentNum) {
  this->commentNum = commentNum;
}

QString TmallSearchTmItem::getCommissionRate() const {
  return commissionRate;
}
void TmallSearchTmItem::setCommissionRate (QString commissionRate) {
  this->commissionRate = commissionRate;
}

QString TmallSearchTmItem::getDetailUrl() const {
  return detailUrl;
}
void TmallSearchTmItem::setDetailUrl (QString detailUrl) {
  this->detailUrl = detailUrl;
}

QString TmallSearchTmItem::getPicUrl() const {
  return picUrl;
}
void TmallSearchTmItem::setPicUrl (QString picUrl) {
  this->picUrl = picUrl;
}

QString TmallSearchTmItem::getPrice() const {
  return price;
}
void TmallSearchTmItem::setPrice (QString price) {
  this->price = price;
}

QString TmallSearchTmItem::getPromotionPrice() const {
  return promotionPrice;
}
void TmallSearchTmItem::setPromotionPrice (QString promotionPrice) {
  this->promotionPrice = promotionPrice;
}

QString TmallSearchTmItem::getTagHot() const {
  return tagHot;
}
void TmallSearchTmItem::setTagHot (QString tagHot) {
  this->tagHot = tagHot;
}

QString TmallSearchTmItem::getTagLq() const {
  return tagLq;
}
void TmallSearchTmItem::setTagLq (QString tagLq) {
  this->tagLq = tagLq;
}

QString TmallSearchTmItem::getTagNew() const {
  return tagNew;
}
void TmallSearchTmItem::setTagNew (QString tagNew) {
  this->tagNew = tagNew;
}

QString TmallSearchTmItem::getTitle() const {
  return title;
}
void TmallSearchTmItem::setTitle (QString title) {
  this->title = title;
}

QString TmallSearchTmItem::getTrackIid() const {
  return trackIid;
}
void TmallSearchTmItem::setTrackIid (QString trackIid) {
  this->trackIid = trackIid;
}

qlonglong TmallSearchTmItem::getVolume() const {
  return volume;
}
void TmallSearchTmItem::setVolume (qlonglong volume) {
  this->volume = volume;
}


void TmallSearchTmItem::parseResponse() {
  if (responseParser->hasName("brand_id")) {
  brandId = responseParser->getNumByName("brand_id");
  }
  if (responseParser->hasName("brand_name")) {
  brandName = responseParser->getStrByName("brand_name");
  }
  if (responseParser->hasName("comment_num")) {
  commentNum = responseParser->getStrByName("comment_num");
  }
  if (responseParser->hasName("commission_rate")) {
  commissionRate = responseParser->getStrByName("commission_rate");
  }
  if (responseParser->hasName("detail_url")) {
  detailUrl = responseParser->getStrByName("detail_url");
  }
  if (responseParser->hasName("pic_url")) {
  picUrl = responseParser->getStrByName("pic_url");
  }
  if (responseParser->hasName("price")) {
  price = responseParser->getStrByName("price");
  }
  if (responseParser->hasName("promotion_price")) {
  promotionPrice = responseParser->getStrByName("promotion_price");
  }
  if (responseParser->hasName("tag_hot")) {
  tagHot = responseParser->getStrByName("tag_hot");
  }
  if (responseParser->hasName("tag_lq")) {
  tagLq = responseParser->getStrByName("tag_lq");
  }
  if (responseParser->hasName("tag_new")) {
  tagNew = responseParser->getStrByName("tag_new");
  }
  if (responseParser->hasName("title")) {
  title = responseParser->getStrByName("title");
  }
  if (responseParser->hasName("track_iid")) {
  trackIid = responseParser->getStrByName("track_iid");
  }
  if (responseParser->hasName("volume")) {
  volume = responseParser->getNumByName("volume");
  }

}

