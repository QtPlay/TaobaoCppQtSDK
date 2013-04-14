#ifndef SUBUSEREMPLOYEEADDREQUEST_H
#define SUBUSEREMPLOYEEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserEmployeeAddResponse.h>

/**
 * TOP API: 给指定子账号新增一个员工信息（通过主账号登陆只能新建属于该主账号的员工信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserEmployeeAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDepartmentId() const
;  void setDepartmentId (qlonglong departmentId);

 qlonglong getDutyId() const
;  void setDutyId (qlonglong dutyId);

 QString getEmployeeName() const
;  void setEmployeeName (QString employeeName);

 QString getEmployeeNickname() const
;  void setEmployeeNickname (QString employeeNickname);

 QString getEmployeeNum() const
;  void setEmployeeNum (QString employeeNum);

 QDateTime getEntryDate() const
;  void setEntryDate (QDateTime entryDate);

 QString getIdCardNum() const
;  void setIdCardNum (QString idCardNum);

 qlonglong getLeaderId() const
;  void setLeaderId (qlonglong leaderId);

 QString getOfficePhone() const
;  void setOfficePhone (QString officePhone);

 QString getPersonalEmail() const
;  void setPersonalEmail (QString personalEmail);

 QString getPersonalMobile() const
;  void setPersonalMobile (QString personalMobile);

 qlonglong getSex() const
;  void setSex (qlonglong sex);

 qlonglong getSubId() const
;  void setSubId (qlonglong subId);

 QString getWorkLocation() const
;  void setWorkLocation (QString workLocation);


  virtual SubuserEmployeeAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 当前员工所属部门ID
 **/
  qlonglong departmentId;

/**
 * @brief 当前员工担任职务ID
 **/
  qlonglong dutyId;

/**
 * @brief 员工姓名
 **/
  QString employeeName;

/**
 * @brief 员工花名
 **/
  QString employeeNickname;

/**
 * @brief 员工工号(可以用大小写英文字母和数字)
 **/
  QString employeeNum;

/**
 * @brief 员工入职时间
 **/
  QDateTime entryDate;

/**
 * @brief 员工身份证号码
 **/
  QString idCardNum;

/**
 * @brief 直接上级的员工ID
 **/
  qlonglong leaderId;

/**
 * @brief 办公电话
 **/
  QString officePhone;

/**
 * @brief 员工私人邮箱
 **/
  QString personalEmail;

/**
 * @brief 员工手机号码
 **/
  QString personalMobile;

/**
 * @brief 员工性别 1：男; 2:女
 **/
  qlonglong sex;

/**
 * @brief 子账号ID
 **/
  qlonglong subId;

/**
 * @brief 工作地点
 **/
  QString workLocation;

};

#endif  /* SUBUSEREMPLOYEEADDREQUEST_H */
