#ifndef SUBUSEREMPLOYEEUPDATEREQUEST_H
#define SUBUSEREMPLOYEEUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserEmployeeUpdateResponse.h>

/**
 * TOP API: 修改指定账户子账号的员工信息（通过主账号登陆只能修改属于该主账号下的员工信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserEmployeeUpdateRequest : public TaoRequest
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

 bool getEmployeeTurnover() const
;  void setEmployeeTurnover (bool employeeTurnover);

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


  virtual SubuserEmployeeUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 当前员工所属部门ID
 **/
  qlonglong departmentId;

/**
 * @brief 当前员工担任职务ID(若需要将该字段的值置为空，请传入-1）
 **/
  qlonglong dutyId;

/**
 * @brief 员工姓名
 **/
  QString employeeName;

/**
 * @brief 员工花名(若需要将该字段的值置为空，请传入“-1”）
 **/
  QString employeeNickname;

/**
 * @brief 员工工号(卖家自定义)(若需要将该字段的值置为空，请传入“-1”）
 **/
  QString employeeNum;

/**
 * @brief 登记员工离职  true:登记员工离职
 **/
  bool employeeTurnover;

/**
 * @brief 员工入职时间(若需要将该字段的值置为空，请传入1900-01-01 00:00:00）
 **/
  QDateTime entryDate;

/**
 * @brief 员工身份证号码(若需要将该字段的值置为空，请传入“-1”）
 **/
  QString idCardNum;

/**
 * @brief 直接上级的员工ID(若需要将该字段的值置为空，请传入-1）
 **/
  qlonglong leaderId;

/**
 * @brief 办公电话(若需要将该字段的值置为空，请传入“-1”）
 **/
  QString officePhone;

/**
 * @brief 员工私人邮箱(若需要将该字段的值置为空，请传入“-1”）
 **/
  QString personalEmail;

/**
 * @brief 员工手机号码(若需要将该字段的值置为空，请传入“-1”）
 **/
  QString personalMobile;

/**
 * @brief 员工性别  1：男;  2:女
 **/
  qlonglong sex;

/**
 * @brief 子账号ID
 **/
  qlonglong subId;

/**
 * @brief 杭州大厦(若需要将该字段的值置为空，请传入“-1”）
 **/
  QString workLocation;

};

#endif  /* SUBUSEREMPLOYEEUPDATEREQUEST_H */
