#ifndef SUBUSERDEPARTMENTDELETEREQUEST_H
#define SUBUSERDEPARTMENTDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserDepartmentDeleteResponse.h>

/**
 * TOP API: 根据主账号Nick和部门ID删除该主账号下的该部门信息，如果待删除部门下有子账号则无法删除该部门（通过主账号登陆只能删除属于该主账号下的部门信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDepartmentDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDepartmentId() const
;  void setDepartmentId (qlonglong departmentId);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubuserDepartmentDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 部门ID
 **/
  qlonglong departmentId;

/**
 * @brief 主账号用户名
 **/
  QString userNick;

};

#endif  /* SUBUSERDEPARTMENTDELETEREQUEST_H */
