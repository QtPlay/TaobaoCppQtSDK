#ifndef SELLERCENTERUSERPERMISSIONSGETREQUEST_H
#define SELLERCENTERUSERPERMISSIONSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercenterUserPermissionsGetResponse.h>

/**
 * TOP API: 获取指定用户的权限集合，并不组装成树。如果是主账号，返回所有的权限列表；如果是子账号，返回所有已授权的权限。只能查询属于自己的账号信息 (如果是主账号，则是主账号以及所属子账号，如果是子账号则是对应主账号以及所属子账号)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterUserPermissionsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SellercenterUserPermissionsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 用户标识，次入参必须为子账号比如zhangsan:cool。如果只输入主账号zhangsan，将报错。
 **/
  QString nick;

};

#endif  /* SELLERCENTERUSERPERMISSIONSGETREQUEST_H */
