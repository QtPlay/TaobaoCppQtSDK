#ifndef WANGWANGESERVICEGROUPMEMBERGETREQUEST_H
#define WANGWANGESERVICEGROUPMEMBERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WangwangEserviceGroupmemberGetResponse.h>

/**
 * TOP API: 用某个组管理员账号查询，返回该组组名、和该组所有组成员ID（E客服的分流设置）。 
 
用旺旺主帐号查询，返回所有组的组名和该组所有组成员ID。 
 
返回的组成员ID可以是多个，用 "," 隔开。 
 
被查者ID只能传入一个。 
 
组成员中排名最靠前的ID是组管理员ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceGroupmemberGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getManagerId() const
;  void setManagerId (QString managerId);


  virtual WangwangEserviceGroupmemberGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 被查询用户组管理员ID：cntaobao+淘宝nick，例如cntaobaotest
 **/
  QString managerId;

};

#endif  /* WANGWANGESERVICEGROUPMEMBERGETREQUEST_H */
