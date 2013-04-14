#ifndef WANGWANGESERVICESTREAMWEIGTHSGETREQUEST_H
#define WANGWANGESERVICESTREAMWEIGTHSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WangwangEserviceStreamweigthsGetResponse.h>

/**
 * TOP API: 获取当前登录用户自己的店铺内的分流权重设置，只支持xml 返回。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceStreamweigthsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual WangwangEserviceStreamweigthsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* WANGWANGESERVICESTREAMWEIGTHSGETREQUEST_H */
