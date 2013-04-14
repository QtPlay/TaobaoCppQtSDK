#include <TaoApiCpp/domain/Evaluation.h>
QString Evaluation::getEvaluationName() const {
  return evaluationName;
}
void Evaluation::setEvaluationName (QString evaluationName) {
  this->evaluationName = evaluationName;
}

QString Evaluation::getEvaluationNum() const {
  return evaluationNum;
}
void Evaluation::setEvaluationNum (QString evaluationNum) {
  this->evaluationNum = evaluationNum;
}


void Evaluation::parseResponse() {
  if (responseParser->hasName("evaluation_name")) {
  evaluationName = responseParser->getStrByName("evaluation_name");
  }
  if (responseParser->hasName("evaluation_num")) {
  evaluationNum = responseParser->getStrByName("evaluation_num");
  }

}

