#include <TaoApiCpp/response/PointBudgetGetResponse.h>

qlonglong PointBudgetGetResponse::getBudgetAmount() const {
  return budgetAmount;
}
void PointBudgetGetResponse::setBudgetAmount (qlonglong budgetAmount) {
  this->budgetAmount = budgetAmount;
}

void PointBudgetGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("budget_amount")) {
  budgetAmount = responseParser->getNumByName("budget_amount");
  }

}

