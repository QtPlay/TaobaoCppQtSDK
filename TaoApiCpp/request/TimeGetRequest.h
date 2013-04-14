#ifndef TIMEGETREQUEST_H
#define TIMEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TimeGetResponse.h>

/**
 * TOP API: 获取淘宝系统当前时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TimeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual TimeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* TIMEGETREQUEST_H */
