#include <TaoApiCpp/domain/LotteryWangcaiPresentStat.h>
qlonglong LotteryWangcaiPresentStat::getDateId() const {
  return dateId;
}
void LotteryWangcaiPresentStat::setDateId (qlonglong dateId) {
  this->dateId = dateId;
}

qlonglong LotteryWangcaiPresentStat::getPresentFee() const {
  return presentFee;
}
void LotteryWangcaiPresentStat::setPresentFee (qlonglong presentFee) {
  this->presentFee = presentFee;
}

qlonglong LotteryWangcaiPresentStat::getPresentStake() const {
  return presentStake;
}
void LotteryWangcaiPresentStat::setPresentStake (qlonglong presentStake) {
  this->presentStake = presentStake;
}

qlonglong LotteryWangcaiPresentStat::getPresentUser() const {
  return presentUser;
}
void LotteryWangcaiPresentStat::setPresentUser (qlonglong presentUser) {
  this->presentUser = presentUser;
}

qlonglong LotteryWangcaiPresentStat::getSellerId() const {
  return sellerId;
}
void LotteryWangcaiPresentStat::setSellerId (qlonglong sellerId) {
  this->sellerId = sellerId;
}


void LotteryWangcaiPresentStat::parseResponse() {
  if (responseParser->hasName("date_id")) {
  dateId = responseParser->getNumByName("date_id");
  }
  if (responseParser->hasName("present_fee")) {
  presentFee = responseParser->getNumByName("present_fee");
  }
  if (responseParser->hasName("present_stake")) {
  presentStake = responseParser->getNumByName("present_stake");
  }
  if (responseParser->hasName("present_user")) {
  presentUser = responseParser->getNumByName("present_user");
  }
  if (responseParser->hasName("seller_id")) {
  sellerId = responseParser->getNumByName("seller_id");
  }

}

