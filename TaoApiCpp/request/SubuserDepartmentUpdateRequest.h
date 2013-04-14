#ifndef SUBUSERDEPARTMENTUPDATEREQUEST_H
#define SUBUSERDEPARTMENTUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserDepartmentUpdateResponse.h>

/**
 * TOP API: 通过指定主账号ID和部门ID来修改该部门的名称或该部门的父部门ID。（通过主账号登陆只能修改属于该主账号的部门信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDepartmentUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDepartmentId() const
;  void setDepartmentId (qlonglong departmentId);

 QString getDepartmentName() const
;  void setDepartmentName (QString departmentName);

 qlonglong getParentId() const
;  void setParentId (qlonglong parentId);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubuserDepartmentUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 部门ID
 **/
  qlonglong departmentId;

/**
 * @brief 部门名称
 **/
  QString departmentName;

/**
 * @brief 父部门ID 如果是最高部门则传入0
 **/
  qlonglong parentId;

/**
 * @brief 主账号用户名
 **/
  QString userNick;

};

#endif  /* SUBUSERDEPARTMENTUPDATEREQUEST_H */
