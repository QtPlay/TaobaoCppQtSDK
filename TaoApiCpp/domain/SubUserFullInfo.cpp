#include <TaoApiCpp/domain/SubUserFullInfo.h>
qlonglong SubUserFullInfo::getDepartmentId() const {
  return departmentId;
}
void SubUserFullInfo::setDepartmentId (qlonglong departmentId) {
  this->departmentId = departmentId;
}

QString SubUserFullInfo::getDepartmentName() const {
  return departmentName;
}
void SubUserFullInfo::setDepartmentName (QString departmentName) {
  this->departmentName = departmentName;
}

qlonglong SubUserFullInfo::getDutyId() const {
  return dutyId;
}
void SubUserFullInfo::setDutyId (qlonglong dutyId) {
  this->dutyId = dutyId;
}

qlonglong SubUserFullInfo::getDutyLevel() const {
  return dutyLevel;
}
void SubUserFullInfo::setDutyLevel (qlonglong dutyLevel) {
  this->dutyLevel = dutyLevel;
}

QString SubUserFullInfo::getDutyName() const {
  return dutyName;
}
void SubUserFullInfo::setDutyName (QString dutyName) {
  this->dutyName = dutyName;
}

qlonglong SubUserFullInfo::getEmployeeId() const {
  return employeeId;
}
void SubUserFullInfo::setEmployeeId (qlonglong employeeId) {
  this->employeeId = employeeId;
}

QString SubUserFullInfo::getEmployeeName() const {
  return employeeName;
}
void SubUserFullInfo::setEmployeeName (QString employeeName) {
  this->employeeName = employeeName;
}

QString SubUserFullInfo::getEmployeeNickname() const {
  return employeeNickname;
}
void SubUserFullInfo::setEmployeeNickname (QString employeeNickname) {
  this->employeeNickname = employeeNickname;
}

QString SubUserFullInfo::getEmployeeNum() const {
  return employeeNum;
}
void SubUserFullInfo::setEmployeeNum (QString employeeNum) {
  this->employeeNum = employeeNum;
}

QDateTime SubUserFullInfo::getEntryDate() const {
  return entryDate;
}
void SubUserFullInfo::setEntryDate (QDateTime entryDate) {
  this->entryDate = entryDate;
}

qlonglong SubUserFullInfo::getLeaderId() const {
  return leaderId;
}
void SubUserFullInfo::setLeaderId (qlonglong leaderId) {
  this->leaderId = leaderId;
}

QString SubUserFullInfo::getOfficePhone() const {
  return officePhone;
}
void SubUserFullInfo::setOfficePhone (QString officePhone) {
  this->officePhone = officePhone;
}

qlonglong SubUserFullInfo::getParentDepartment() const {
  return parentDepartment;
}
void SubUserFullInfo::setParentDepartment (qlonglong parentDepartment) {
  this->parentDepartment = parentDepartment;
}

qlonglong SubUserFullInfo::getSex() const {
  return sex;
}
void SubUserFullInfo::setSex (qlonglong sex) {
  this->sex = sex;
}

bool SubUserFullInfo::getSubDispatchStatus() const {
  return subDispatchStatus;
}
void SubUserFullInfo::setSubDispatchStatus (bool subDispatchStatus) {
  this->subDispatchStatus = subDispatchStatus;
}

qlonglong SubUserFullInfo::getSubId() const {
  return subId;
}
void SubUserFullInfo::setSubId (qlonglong subId) {
  this->subId = subId;
}

QString SubUserFullInfo::getSubNick() const {
  return subNick;
}
void SubUserFullInfo::setSubNick (QString subNick) {
  this->subNick = subNick;
}

bool SubUserFullInfo::getSubOwedStatus() const {
  return subOwedStatus;
}
void SubUserFullInfo::setSubOwedStatus (bool subOwedStatus) {
  this->subOwedStatus = subOwedStatus;
}

qlonglong SubUserFullInfo::getSubStatus() const {
  return subStatus;
}
void SubUserFullInfo::setSubStatus (qlonglong subStatus) {
  this->subStatus = subStatus;
}

QString SubUserFullInfo::getSubuserEmail() const {
  return subuserEmail;
}
void SubUserFullInfo::setSubuserEmail (QString subuserEmail) {
  this->subuserEmail = subuserEmail;
}

QString SubUserFullInfo::getUserEmail() const {
  return userEmail;
}
void SubUserFullInfo::setUserEmail (QString userEmail) {
  this->userEmail = userEmail;
}

qlonglong SubUserFullInfo::getUserId() const {
  return userId;
}
void SubUserFullInfo::setUserId (qlonglong userId) {
  this->userId = userId;
}

QString SubUserFullInfo::getUserNick() const {
  return userNick;
}
void SubUserFullInfo::setUserNick (QString userNick) {
  this->userNick = userNick;
}

QString SubUserFullInfo::getWorkLocation() const {
  return workLocation;
}
void SubUserFullInfo::setWorkLocation (QString workLocation) {
  this->workLocation = workLocation;
}


void SubUserFullInfo::parseResponse() {
  if (responseParser->hasName("department_id")) {
  departmentId = responseParser->getNumByName("department_id");
  }
  if (responseParser->hasName("department_name")) {
  departmentName = responseParser->getStrByName("department_name");
  }
  if (responseParser->hasName("duty_id")) {
  dutyId = responseParser->getNumByName("duty_id");
  }
  if (responseParser->hasName("duty_level")) {
  dutyLevel = responseParser->getNumByName("duty_level");
  }
  if (responseParser->hasName("duty_name")) {
  dutyName = responseParser->getStrByName("duty_name");
  }
  if (responseParser->hasName("employee_id")) {
  employeeId = responseParser->getNumByName("employee_id");
  }
  if (responseParser->hasName("employee_name")) {
  employeeName = responseParser->getStrByName("employee_name");
  }
  if (responseParser->hasName("employee_nickname")) {
  employeeNickname = responseParser->getStrByName("employee_nickname");
  }
  if (responseParser->hasName("employee_num")) {
  employeeNum = responseParser->getStrByName("employee_num");
  }
  if (responseParser->hasName("entry_date")) {
  entryDate = responseParser->getDateByName("entry_date");
  }
  if (responseParser->hasName("leader_id")) {
  leaderId = responseParser->getNumByName("leader_id");
  }
  if (responseParser->hasName("office_phone")) {
  officePhone = responseParser->getStrByName("office_phone");
  }
  if (responseParser->hasName("parent_department")) {
  parentDepartment = responseParser->getNumByName("parent_department");
  }
  if (responseParser->hasName("sex")) {
  sex = responseParser->getNumByName("sex");
  }
  if (responseParser->hasName("sub_dispatch_status")) {
  subDispatchStatus = responseParser->getBoolByName("sub_dispatch_status");
  }
  if (responseParser->hasName("sub_id")) {
  subId = responseParser->getNumByName("sub_id");
  }
  if (responseParser->hasName("sub_nick")) {
  subNick = responseParser->getStrByName("sub_nick");
  }
  if (responseParser->hasName("sub_owed_status")) {
  subOwedStatus = responseParser->getBoolByName("sub_owed_status");
  }
  if (responseParser->hasName("sub_status")) {
  subStatus = responseParser->getNumByName("sub_status");
  }
  if (responseParser->hasName("subuser_email")) {
  subuserEmail = responseParser->getStrByName("subuser_email");
  }
  if (responseParser->hasName("user_email")) {
  userEmail = responseParser->getStrByName("user_email");
  }
  if (responseParser->hasName("user_id")) {
  userId = responseParser->getNumByName("user_id");
  }
  if (responseParser->hasName("user_nick")) {
  userNick = responseParser->getStrByName("user_nick");
  }
  if (responseParser->hasName("work_location")) {
  workLocation = responseParser->getStrByName("work_location");
  }

}

