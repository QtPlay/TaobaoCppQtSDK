#include <TaoApiCpp/domain/UserCredit.h>
qlonglong UserCredit::getGoodNum() const {
  return goodNum;
}
void UserCredit::setGoodNum (qlonglong goodNum) {
  this->goodNum = goodNum;
}

qlonglong UserCredit::getLevel() const {
  return level;
}
void UserCredit::setLevel (qlonglong level) {
  this->level = level;
}

qlonglong UserCredit::getScore() const {
  return score;
}
void UserCredit::setScore (qlonglong score) {
  this->score = score;
}

qlonglong UserCredit::getTotalNum() const {
  return totalNum;
}
void UserCredit::setTotalNum (qlonglong totalNum) {
  this->totalNum = totalNum;
}


void UserCredit::parseResponse() {
  if (responseParser->hasName("good_num")) {
  goodNum = responseParser->getNumByName("good_num");
  }
  if (responseParser->hasName("level")) {
  level = responseParser->getNumByName("level");
  }
  if (responseParser->hasName("score")) {
  score = responseParser->getNumByName("score");
  }
  if (responseParser->hasName("total_num")) {
  totalNum = responseParser->getNumByName("total_num");
  }

}

