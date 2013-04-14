#include <TaoApiCpp/response/PromotionMealGetResponse.h>

QList<Meal> PromotionMealGetResponse::getMealList() const {
  return mealList;
}
void PromotionMealGetResponse::setMealList (QList<Meal> mealList) {
  this->mealList = mealList;
}

void PromotionMealGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("meal_list")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("meal_list");
  Parser *parser;
  foreach (parser, listParser) {
    Meal tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    mealList.append(tmp);
  }
  }

}

