#ifndef APPIPGETREQUEST_H
#define APPIPGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/AppipGetResponse.h>

/**
 * TOP API: 获取ISV发起请求服务器IP
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AppipGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual AppipGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* APPIPGETREQUEST_H */
