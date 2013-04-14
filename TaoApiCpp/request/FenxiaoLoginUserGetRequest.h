#ifndef FENXIAOLOGINUSERGETREQUEST_H
#define FENXIAOLOGINUSERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoLoginUserGetResponse.h>

/**
 * TOP API: 获取用户登录信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoLoginUserGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual FenxiaoLoginUserGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* FENXIAOLOGINUSERGETREQUEST_H */
