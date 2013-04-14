#include <TaoApiCpp/response/SubuserDepartmentsGetResponse.h>

QList<Department> SubuserDepartmentsGetResponse::getDepartments() const {
  return departments;
}
void SubuserDepartmentsGetResponse::setDepartments (QList<Department> departments) {
  this->departments = departments;
}

void SubuserDepartmentsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("departments")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("departments");
  Parser *parser;
  foreach (parser, listParser) {
    Department tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    departments.append(tmp);
  }
  }

}

