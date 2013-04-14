#include <TaoApiCpp/domain/Department.h>
qlonglong Department::getDepartmentId() const {
  return departmentId;
}
void Department::setDepartmentId (qlonglong departmentId) {
  this->departmentId = departmentId;
}

QString Department::getDepartmentName() const {
  return departmentName;
}
void Department::setDepartmentName (QString departmentName) {
  this->departmentName = departmentName;
}

qlonglong Department::getParentId() const {
  return parentId;
}
void Department::setParentId (qlonglong parentId) {
  this->parentId = parentId;
}


void Department::parseResponse() {
  if (responseParser->hasName("department_id")) {
  departmentId = responseParser->getNumByName("department_id");
  }
  if (responseParser->hasName("department_name")) {
  departmentName = responseParser->getStrByName("department_name");
  }
  if (responseParser->hasName("parent_id")) {
  parentId = responseParser->getNumByName("parent_id");
  }

}

