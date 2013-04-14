#ifndef SIMBACUSTOMERSAUTHORIZEDGETREQUEST_H
#define SIMBACUSTOMERSAUTHORIZEDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCustomersAuthorizedGetResponse.h>

/**
 * TOP API: 取得当前登录用户的授权账户列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCustomersAuthorizedGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual SimbaCustomersAuthorizedGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* SIMBACUSTOMERSAUTHORIZEDGETREQUEST_H */
