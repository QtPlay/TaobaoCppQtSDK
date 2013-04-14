#ifndef RANDCATCONTROLGETREQUEST_H
#define RANDCATCONTROLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RandcatControlGetResponse.h>

/**
 * TOP API: 获取到所有的类目，品牌的控制信息，达尔文类目是会以品牌和类目作为控制的力度来管理商品，所有的控制信息可以通过这个接口获取到信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RandcatControlGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual RandcatControlGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* RANDCATCONTROLGETREQUEST_H */
