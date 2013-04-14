#include <TaoApiCpp/response/FenxiaoGradeAddResponse.h>

qlonglong FenxiaoGradeAddResponse::getGradeId() const {
  return gradeId;
}
void FenxiaoGradeAddResponse::setGradeId (qlonglong gradeId) {
  this->gradeId = gradeId;
}
bool FenxiaoGradeAddResponse::getIsSuccess() const {
  return isSuccess;
}
void FenxiaoGradeAddResponse::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

void FenxiaoGradeAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("grade_id")) {
  gradeId = responseParser->getNumByName("grade_id");
  }
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }

}

