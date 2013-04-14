#include <TaoApiCpp/response/FenxiaoProductGradepriceGetResponse.h>

QList<GradeDiscount> FenxiaoProductGradepriceGetResponse::getGradeDiscounts() const {
  return gradeDiscounts;
}
void FenxiaoProductGradepriceGetResponse::setGradeDiscounts (QList<GradeDiscount> gradeDiscounts) {
  this->gradeDiscounts = gradeDiscounts;
}
bool FenxiaoProductGradepriceGetResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoProductGradepriceGetResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoProductGradepriceGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("grade_discounts")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("grade_discounts");
  Parser *parser;
  foreach (parser, listParser) {
    GradeDiscount tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    gradeDiscounts.append(tmp);
  }
  }
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

