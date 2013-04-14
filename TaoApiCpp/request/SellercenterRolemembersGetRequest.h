#ifndef SELLERCENTERROLEMEMBERSGETREQUEST_H
#define SELLERCENTERROLEMEMBERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercenterRolemembersGetResponse.h>

/**
 * TOP API: 获取指定卖家的角色下属员工列表，只能获取属于登陆者自己的信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterRolemembersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getRoleId() const
;  void setRoleId (qlonglong roleId);


  virtual SellercenterRolemembersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 角色id
 **/
  qlonglong roleId;

};

#endif  /* SELLERCENTERROLEMEMBERSGETREQUEST_H */
