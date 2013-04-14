#include <TaoApiCpp/request/SubuserEmployeeUpdateRequest.h>

QString SubuserEmployeeUpdateRequest::getApiMethodName() const {
  return "taobao.subuser.employee.update";
}

qlonglong SubuserEmployeeUpdateRequest::getDepartmentId() const {
  return departmentId;
}
void SubuserEmployeeUpdateRequest::setDepartmentId (qlonglong departmentId) {
  this->departmentId = departmentId;
  appParams.insert("department_id", QString::number(departmentId));
}

qlonglong SubuserEmployeeUpdateRequest::getDutyId() const {
  return dutyId;
}
void SubuserEmployeeUpdateRequest::setDutyId (qlonglong dutyId) {
  this->dutyId = dutyId;
  appParams.insert("duty_id", QString::number(dutyId));
}

QString SubuserEmployeeUpdateRequest::getEmployeeName() const {
  return employeeName;
}
void SubuserEmployeeUpdateRequest::setEmployeeName (QString employeeName) {
  this->employeeName = employeeName;
  appParams.insert("employee_name", employeeName);
}

QString SubuserEmployeeUpdateRequest::getEmployeeNickname() const {
  return employeeNickname;
}
void SubuserEmployeeUpdateRequest::setEmployeeNickname (QString employeeNickname) {
  this->employeeNickname = employeeNickname;
  appParams.insert("employee_nickname", employeeNickname);
}

QString SubuserEmployeeUpdateRequest::getEmployeeNum() const {
  return employeeNum;
}
void SubuserEmployeeUpdateRequest::setEmployeeNum (QString employeeNum) {
  this->employeeNum = employeeNum;
  appParams.insert("employee_num", employeeNum);
}

bool SubuserEmployeeUpdateRequest::getEmployeeTurnover() const {
  return employeeTurnover;
}
void SubuserEmployeeUpdateRequest::setEmployeeTurnover (bool employeeTurnover) {
  this->employeeTurnover = employeeTurnover;
  appParams.insert("employee_turnover", employeeTurnover? "true": "false");
}

QDateTime SubuserEmployeeUpdateRequest::getEntryDate() const {
  return entryDate;
}
void SubuserEmployeeUpdateRequest::setEntryDate (QDateTime entryDate) {
  this->entryDate = entryDate;
  appParams.insert("entry_date", entryDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString SubuserEmployeeUpdateRequest::getIdCardNum() const {
  return idCardNum;
}
void SubuserEmployeeUpdateRequest::setIdCardNum (QString idCardNum) {
  this->idCardNum = idCardNum;
  appParams.insert("id_card_num", idCardNum);
}

qlonglong SubuserEmployeeUpdateRequest::getLeaderId() const {
  return leaderId;
}
void SubuserEmployeeUpdateRequest::setLeaderId (qlonglong leaderId) {
  this->leaderId = leaderId;
  appParams.insert("leader_id", QString::number(leaderId));
}

QString SubuserEmployeeUpdateRequest::getOfficePhone() const {
  return officePhone;
}
void SubuserEmployeeUpdateRequest::setOfficePhone (QString officePhone) {
  this->officePhone = officePhone;
  appParams.insert("office_phone", officePhone);
}

QString SubuserEmployeeUpdateRequest::getPersonalEmail() const {
  return personalEmail;
}
void SubuserEmployeeUpdateRequest::setPersonalEmail (QString personalEmail) {
  this->personalEmail = personalEmail;
  appParams.insert("personal_email", personalEmail);
}

QString SubuserEmployeeUpdateRequest::getPersonalMobile() const {
  return personalMobile;
}
void SubuserEmployeeUpdateRequest::setPersonalMobile (QString personalMobile) {
  this->personalMobile = personalMobile;
  appParams.insert("personal_mobile", personalMobile);
}

qlonglong SubuserEmployeeUpdateRequest::getSex() const {
  return sex;
}
void SubuserEmployeeUpdateRequest::setSex (qlonglong sex) {
  this->sex = sex;
  appParams.insert("sex", QString::number(sex));
}

qlonglong SubuserEmployeeUpdateRequest::getSubId() const {
  return subId;
}
void SubuserEmployeeUpdateRequest::setSubId (qlonglong subId) {
  this->subId = subId;
  appParams.insert("sub_id", QString::number(subId));
}

QString SubuserEmployeeUpdateRequest::getWorkLocation() const {
  return workLocation;
}
void SubuserEmployeeUpdateRequest::setWorkLocation (QString workLocation) {
  this->workLocation = workLocation;
  appParams.insert("work_location", workLocation);
}



SubuserEmployeeUpdateResponse *SubuserEmployeeUpdateRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserEmployeeUpdateResponse *tmpResponse = new SubuserEmployeeUpdateResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
