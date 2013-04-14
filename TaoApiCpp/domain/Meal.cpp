#include <TaoApiCpp/domain/Meal.h>
QString Meal::getItemList() const {
  return itemList;
}
void Meal::setItemList (QString itemList) {
  this->itemList = itemList;
}

qlonglong Meal::getMealId() const {
  return mealId;
}
void Meal::setMealId (qlonglong mealId) {
  this->mealId = mealId;
}

QString Meal::getMealMemo() const {
  return mealMemo;
}
void Meal::setMealMemo (QString mealMemo) {
  this->mealMemo = mealMemo;
}

QString Meal::getMealName() const {
  return mealName;
}
void Meal::setMealName (QString mealName) {
  this->mealName = mealName;
}

QString Meal::getMealPrice() const {
  return mealPrice;
}
void Meal::setMealPrice (QString mealPrice) {
  this->mealPrice = mealPrice;
}

qlonglong Meal::getPostageId() const {
  return postageId;
}
void Meal::setPostageId (qlonglong postageId) {
  this->postageId = postageId;
}

QString Meal::getStatus() const {
  return status;
}
void Meal::setStatus (QString status) {
  this->status = status;
}


void Meal::parseResponse() {
  if (responseParser->hasName("item_list")) {
  itemList = responseParser->getStrByName("item_list");
  }
  if (responseParser->hasName("meal_id")) {
  mealId = responseParser->getNumByName("meal_id");
  }
  if (responseParser->hasName("meal_memo")) {
  mealMemo = responseParser->getStrByName("meal_memo");
  }
  if (responseParser->hasName("meal_name")) {
  mealName = responseParser->getStrByName("meal_name");
  }
  if (responseParser->hasName("meal_price")) {
  mealPrice = responseParser->getStrByName("meal_price");
  }
  if (responseParser->hasName("postage_id")) {
  postageId = responseParser->getNumByName("postage_id");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }

}

