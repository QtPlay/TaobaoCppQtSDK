#include <TaoApiCpp/domain/StaffEvalStatById.h>
QList<Evaluation> StaffEvalStatById::getEvaluations() const {
  return evaluations;
}
void StaffEvalStatById::setEvaluations (QList<Evaluation> evaluations) {
  this->evaluations = evaluations;
}

QString StaffEvalStatById::getServiceStaffId() const {
  return serviceStaffId;
}
void StaffEvalStatById::setServiceStaffId (QString serviceStaffId) {
  this->serviceStaffId = serviceStaffId;
}


void StaffEvalStatById::parseResponse() {
  if (responseParser->hasName("evaluations")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("evaluations");
  Parser *parser;
  foreach (parser, listParser) {
    Evaluation tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    evaluations.append(tmp);
  }
  }
  if (responseParser->hasName("service_staff_id")) {
  serviceStaffId = responseParser->getStrByName("service_staff_id");
  }

}

