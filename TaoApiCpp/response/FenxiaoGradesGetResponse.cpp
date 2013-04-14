#include <TaoApiCpp/response/FenxiaoGradesGetResponse.h>

QList<FenxiaoGrade> FenxiaoGradesGetResponse::getFenxiaoGrades() const {
  return fenxiaoGrades;
}
void FenxiaoGradesGetResponse::setFenxiaoGrades (QList<FenxiaoGrade> fenxiaoGrades) {
  this->fenxiaoGrades = fenxiaoGrades;
}
qlonglong FenxiaoGradesGetResponse::getTotalResults() const {
  return totalResults;
}
void FenxiaoGradesGetResponse::setTotalResults (qlonglong totalResults) {
  this->totalResults = totalResults;
}

void FenxiaoGradesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("fenxiao_grades")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("fenxiao_grades");
  Parser *parser;
  foreach (parser, listParser) {
    FenxiaoGrade tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    fenxiaoGrades.append(tmp);
  }
  }
  if (responseParser->hasName("total_results")) {
  totalResults = responseParser->getNumByName("total_results");
  }

}

