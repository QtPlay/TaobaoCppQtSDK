#ifndef SELLERCENTERROLEINFOGETREQUEST_H
#define SELLERCENTERROLEINFOGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercenterRoleInfoGetResponse.h>

/**
 * TOP API: 获取指定角色的信息。只能查询属于自己的角色信息 (主账号或者某个主账号的子账号登陆，只能查询属于该主账号的角色信息)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterRoleInfoGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getRoleId() const
;  void setRoleId (qlonglong roleId);


  virtual SellercenterRoleInfoGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 角色id
 **/
  qlonglong roleId;

};

#endif  /* SELLERCENTERROLEINFOGETREQUEST_H */
