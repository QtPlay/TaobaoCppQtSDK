#ifndef SUBUSERDEPARTMENTADDREQUEST_H
#define SUBUSERDEPARTMENTADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserDepartmentAddResponse.h>

/**
 * TOP API: 根据主账号ID以及部门名称、父部门ID创建新的部门信息（通过主账号登陆只能新建属于该主账号的部门信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDepartmentAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDepartmentName() const
;  void setDepartmentName (QString departmentName);

 qlonglong getParentId() const
;  void setParentId (qlonglong parentId);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubuserDepartmentAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
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

#endif  /* SUBUSERDEPARTMENTADDREQUEST_H */
