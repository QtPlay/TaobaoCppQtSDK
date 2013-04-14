#include <TaoApiCpp/domain/LotteryWangcaiPresent.h>
QString LotteryWangcaiPresent::getAppName() const {
  return appName;
}
void LotteryWangcaiPresent::setAppName (QString appName) {
  this->appName = appName;
}

QString LotteryWangcaiPresent::getLotteryName() const {
  return lotteryName;
}
void LotteryWangcaiPresent::setLotteryName (QString lotteryName) {
  this->lotteryName = lotteryName;
}

QDateTime LotteryWangcaiPresent::getPresentDate() const {
  return presentDate;
}
void LotteryWangcaiPresent::setPresentDate (QDateTime presentDate) {
  this->presentDate = presentDate;
}

qlonglong LotteryWangcaiPresent::getStakeCount() const {
  return stakeCount;
}
void LotteryWangcaiPresent::setStakeCount (qlonglong stakeCount) {
  this->stakeCount = stakeCount;
}

QString LotteryWangcaiPresent::getUserNick() const {
  return userNick;
}
void LotteryWangcaiPresent::setUserNick (QString userNick) {
  this->userNick = userNick;
}

qlonglong LotteryWangcaiPresent::getWinFee() const {
  return winFee;
}
void LotteryWangcaiPresent::setWinFee (qlonglong winFee) {
  this->winFee = winFee;
}


void LotteryWangcaiPresent::parseResponse() {
  if (responseParser->hasName("app_name")) {
  appName = responseParser->getStrByName("app_name");
  }
  if (responseParser->hasName("lottery_name")) {
  lotteryName = responseParser->getStrByName("lottery_name");
  }
  if (responseParser->hasName("present_date")) {
  presentDate = responseParser->getDateByName("present_date");
  }
  if (responseParser->hasName("stake_count")) {
  stakeCount = responseParser->getNumByName("stake_count");
  }
  if (responseParser->hasName("user_nick")) {
  userNick = responseParser->getStrByName("user_nick");
  }
  if (responseParser->hasName("win_fee")) {
  winFee = responseParser->getNumByName("win_fee");
  }

}

