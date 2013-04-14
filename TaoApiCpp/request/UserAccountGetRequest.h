#ifndef USERACCOUNTGETREQUEST_H
#define USERACCOUNTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UserAccountGetResponse.h>

/**
 * TOP API: 查询支付宝账户余额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserAccountGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual UserAccountGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* USERACCOUNTGETREQUEST_H */
