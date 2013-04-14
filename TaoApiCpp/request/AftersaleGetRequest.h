#ifndef AFTERSALEGETREQUEST_H
#define AFTERSALEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/AftersaleGetResponse.h>

/**
 * TOP API: 查询用户设置的售后服务模板，仅返回标题和id
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AftersaleGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual AftersaleGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* AFTERSALEGETREQUEST_H */
