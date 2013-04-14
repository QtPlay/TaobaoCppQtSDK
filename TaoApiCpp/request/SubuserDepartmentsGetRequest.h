#ifndef SUBUSERDEPARTMENTSGETREQUEST_H
#define SUBUSERDEPARTMENTSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserDepartmentsGetResponse.h>

/**
 * TOP API: 获取指定账户的所有部门列表，其实包括有每个部门的ID、父部门ID、部门名称（通过主账号登陆只能查询属于该主账号下的所有部门信息）。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDepartmentsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubuserDepartmentsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主账号用户名
 **/
  QString userNick;

};

#endif  /* SUBUSERDEPARTMENTSGETREQUEST_H */
