#include <TaoApiCpp/request/SubuserEmployeeAddRequest.h>

QString SubuserEmployeeAddRequest::getApiMethodName() const {
  return "taobao.subuser.employee.add";
}

qlonglong SubuserEmployeeAddRequest::getDepartmentId() const {
  return departmentId;
}
void SubuserEmployeeAddRequest::setDepartmentId (qlonglong departmentId) {
  this->departmentId = departmentId;
  appParams.insert("department_id", QString::number(departmentId));
}

qlonglong SubuserEmployeeAddRequest::getDutyId() const {
  return dutyId;
}
void SubuserEmployeeAddRequest::setDutyId (qlonglong dutyId) {
  this->dutyId = dutyId;
  appParams.insert("duty_id", QString::number(dutyId));
}

QString SubuserEmployeeAddRequest::getEmployeeName() const {
  return employeeName;
}
void SubuserEmployeeAddRequest::setEmployeeName (QString employeeName) {
  this->employeeName = employeeName;
  appParams.insert("employee_name", employeeName);
}

QString SubuserEmployeeAddRequest::getEmployeeNickname() const {
  return employeeNickname;
}
void SubuserEmployeeAddRequest::setEmployeeNickname (QString employeeNickname) {
  this->employeeNickname = employeeNickname;
  appParams.insert("employee_nickname", employeeNickname);
}

QString SubuserEmployeeAddRequest::getEmployeeNum() const {
  return employeeNum;
}
void SubuserEmployeeAddRequest::setEmployeeNum (QString employeeNum) {
  this->employeeNum = employeeNum;
  appParams.insert("employee_num", employeeNum);
}

QDateTime SubuserEmployeeAddRequest::getEntryDate() const {
  return entryDate;
}
void SubuserEmployeeAddRequest::setEntryDate (QDateTime entryDate) {
  this->entryDate = entryDate;
  appParams.insert("entry_date", entryDate.toString("yyyy-MM-dd hh:mm:ss"));
}

QString SubuserEmployeeAddRequest::getIdCardNum() const {
  return idCardNum;
}
void SubuserEmployeeAddRequest::setIdCardNum (QString idCardNum) {
  this->idCardNum = idCardNum;
  appParams.insert("id_card_num", idCardNum);
}

qlonglong SubuserEmployeeAddRequest::getLeaderId() const {
  return leaderId;
}
void SubuserEmployeeAddRequest::setLeaderId (qlonglong leaderId) {
  this->leaderId = leaderId;
  appParams.insert("leader_id", QString::number(leaderId));
}

QString SubuserEmployeeAddRequest::getOfficePhone() const {
  return officePhone;
}
void SubuserEmployeeAddRequest::setOfficePhone (QString officePhone) {
  this->officePhone = officePhone;
  appParams.insert("office_phone", officePhone);
}

QString SubuserEmployeeAddRequest::getPersonalEmail() const {
  return personalEmail;
}
void SubuserEmployeeAddRequest::setPersonalEmail (QString personalEmail) {
  this->personalEmail = personalEmail;
  appParams.insert("personal_email", personalEmail);
}

QString SubuserEmployeeAddRequest::getPersonalMobile() const {
  return personalMobile;
}
void SubuserEmployeeAddRequest::setPersonalMobile (QString personalMobile) {
  this->personalMobile = personalMobile;
  appParams.insert("personal_mobile", personalMobile);
}

qlonglong SubuserEmployeeAddRequest::getSex() const {
  return sex;
}
void SubuserEmployeeAddRequest::setSex (qlonglong sex) {
  this->sex = sex;
  appParams.insert("sex", QString::number(sex));
}

qlonglong SubuserEmployeeAddRequest::getSubId() const {
  return subId;
}
void SubuserEmployeeAddRequest::setSubId (qlonglong subId) {
  this->subId = subId;
  appParams.insert("sub_id", QString::number(subId));
}

QString SubuserEmployeeAddRequest::getWorkLocation() const {
  return workLocation;
}
void SubuserEmployeeAddRequest::setWorkLocation (QString workLocation) {
  this->workLocation = workLocation;
  appParams.insert("work_location", workLocation);
}



SubuserEmployeeAddResponse *SubuserEmployeeAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SubuserEmployeeAddResponse *tmpResponse = new SubuserEmployeeAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
