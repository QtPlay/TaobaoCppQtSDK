#ifndef CAIPIAOSIGNSTATUSCHECKREQUEST_H
#define CAIPIAOSIGNSTATUSCHECKREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoSignstatusCheckResponse.h>

/**
 * TOP API: 检查用户是否签署了支付宝代扣协议。如果签署了，返回true; 如果没签署，返回false, 同时返回签署代扣协议的Url。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoSignstatusCheckRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual CaipiaoSignstatusCheckResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* CAIPIAOSIGNSTATUSCHECKREQUEST_H */
