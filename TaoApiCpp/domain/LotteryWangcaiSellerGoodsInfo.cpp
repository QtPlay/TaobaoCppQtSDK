#include <TaoApiCpp/domain/LotteryWangcaiSellerGoodsInfo.h>
QDateTime LotteryWangcaiSellerGoodsInfo::getActBeginTime() const {
  return actBeginTime;
}
void LotteryWangcaiSellerGoodsInfo::setActBeginTime (QDateTime actBeginTime) {
  this->actBeginTime = actBeginTime;
}

QDateTime LotteryWangcaiSellerGoodsInfo::getActEndTime() const {
  return actEndTime;
}
void LotteryWangcaiSellerGoodsInfo::setActEndTime (QDateTime actEndTime) {
  this->actEndTime = actEndTime;
}

qlonglong LotteryWangcaiSellerGoodsInfo::getGoodsId() const {
  return goodsId;
}
void LotteryWangcaiSellerGoodsInfo::setGoodsId (qlonglong goodsId) {
  this->goodsId = goodsId;
}

qlonglong LotteryWangcaiSellerGoodsInfo::getLotteryTypeId() const {
  return lotteryTypeId;
}
void LotteryWangcaiSellerGoodsInfo::setLotteryTypeId (qlonglong lotteryTypeId) {
  this->lotteryTypeId = lotteryTypeId;
}

qlonglong LotteryWangcaiSellerGoodsInfo::getPresentType() const {
  return presentType;
}
void LotteryWangcaiSellerGoodsInfo::setPresentType (qlonglong presentType) {
  this->presentType = presentType;
}


void LotteryWangcaiSellerGoodsInfo::parseResponse() {
  if (responseParser->hasName("act_begin_time")) {
  actBeginTime = responseParser->getDateByName("act_begin_time");
  }
  if (responseParser->hasName("act_end_time")) {
  actEndTime = responseParser->getDateByName("act_end_time");
  }
  if (responseParser->hasName("goods_id")) {
  goodsId = responseParser->getNumByName("goods_id");
  }
  if (responseParser->hasName("lottery_type_id")) {
  lotteryTypeId = responseParser->getNumByName("lottery_type_id");
  }
  if (responseParser->hasName("present_type")) {
  presentType = responseParser->getNumByName("present_type");
  }

}

