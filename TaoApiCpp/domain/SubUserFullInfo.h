#ifndef SUBUSERFULLINFO_H
#define SUBUSERFULLINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 子账号详细信息，其中包括账号基本信息、员工信息和部门职务信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubUserFullInfo : public TaoDomain
{

public:
 virtual ~SubUserFullInfo() { }

  qlonglong getDepartmentId() const;
  void setDepartmentId (qlonglong departmentId);
  QString getDepartmentName() const;
  void setDepartmentName (QString departmentName);
  qlonglong getDutyId() const;
  void setDutyId (qlonglong dutyId);
  qlonglong getDutyLevel() const;
  void setDutyLevel (qlonglong dutyLevel);
  QString getDutyName() const;
  void setDutyName (QString dutyName);
  qlonglong getEmployeeId() const;
  void setEmployeeId (qlonglong employeeId);
  QString getEmployeeName() const;
  void setEmployeeName (QString employeeName);
  QString getEmployeeNickname() const;
  void setEmployeeNickname (QString employeeNickname);
  QString getEmployeeNum() const;
  void setEmployeeNum (QString employeeNum);
  QDateTime getEntryDate() const;
  void setEntryDate (QDateTime entryDate);
  qlonglong getLeaderId() const;
  void setLeaderId (qlonglong leaderId);
  QString getOfficePhone() const;
  void setOfficePhone (QString officePhone);
  qlonglong getParentDepartment() const;
  void setParentDepartment (qlonglong parentDepartment);
  qlonglong getSex() const;
  void setSex (qlonglong sex);
  bool getSubDispatchStatus() const;
  void setSubDispatchStatus (bool subDispatchStatus);
  qlonglong getSubId() const;
  void setSubId (qlonglong subId);
  QString getSubNick() const;
  void setSubNick (QString subNick);
  bool getSubOwedStatus() const;
  void setSubOwedStatus (bool subOwedStatus);
  qlonglong getSubStatus() const;
  void setSubStatus (qlonglong subStatus);
  QString getSubuserEmail() const;
  void setSubuserEmail (QString subuserEmail);
  QString getUserEmail() const;
  void setUserEmail (QString userEmail);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getUserNick() const;
  void setUserNick (QString userNick);
  QString getWorkLocation() const;
  void setWorkLocation (QString workLocation);
  
  virtual void parseResponse();

private:
/**
 * @brief 部门Id
 **/
  qlonglong departmentId;

/**
 * @brief 部门名称
 **/
  QString departmentName;

/**
 * @brief 职务Id
 **/
  qlonglong dutyId;

/**
 * @brief 职务等级
 **/
  qlonglong dutyLevel;

/**
 * @brief 职务名称
 **/
  QString dutyName;

/**
 * @brief 员工ID
 **/
  qlonglong employeeId;

/**
 * @brief 员工姓名
 **/
  QString employeeName;

/**
 * @brief 员工花名
 **/
  QString employeeNickname;

/**
 * @brief 入职员工工号
 **/
  QString employeeNum;

/**
 * @brief 员工入职时间
 **/
  QDateTime entryDate;

/**
 * @brief 直接上级的员工ID
 **/
  qlonglong leaderId;

/**
 * @brief 办公电话
 **/
  QString officePhone;

/**
 * @brief 父部门Id
 **/
  qlonglong parentDepartment;

/**
 * @brief 员工性别  1:男;  2:女
 **/
  qlonglong sex;

/**
 * @brief 子账号是否参与分流 true:参与分流 false:未参与分流
 **/
  bool subDispatchStatus;

/**
 * @brief 子账号Id
 **/
  qlonglong subId;

/**
 * @brief 子账号用户名
 **/
  QString subNick;

/**
 * @brief 子账号是否已欠费 true:已欠费 false:未欠费
 **/
  bool subOwedStatus;

/**
 * @brief 子账号当前状态：1正常，2卖家停用，3处罚冻结
 **/
  qlonglong subStatus;

/**
 * @brief 子账号企业邮箱
 **/
  QString subuserEmail;

/**
 * @brief 主账号企业邮箱
 **/
  QString userEmail;

/**
 * @brief 主账号Id
 **/
  qlonglong userId;

/**
 * @brief 主账号用户名
 **/
  QString userNick;

/**
 * @brief 工作地点
 **/
  QString workLocation;

};

#endif  /* SUBUSERFULLINFO_H */
