#ifndef USERGETREQUEST_H
#define USERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UserGetResponse.h>

/**
 * TOP API: 查询支付宝用户信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAuthToken() const
;  void setAuthToken (QString authToken);

 QString getFields() const
;  void setFields (QString fields);


  virtual UserGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝给用户的授权。如果没有top的授权，这个字段是必填项
 **/
  QString authToken;

/**
 * @brief 需要返回的字段列表。alipay_user_id：支付宝用户userId,user_status：支付宝用户状态,user_type：支付宝用户类型,certified：是否通过实名认证,real_name：真实姓名,logon_id：支付宝登录号,sex：用户性别
 **/
  QString fields;

};

#endif  /* USERGETREQUEST_H */
