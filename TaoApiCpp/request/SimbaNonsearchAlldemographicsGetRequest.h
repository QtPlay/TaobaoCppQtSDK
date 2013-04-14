#ifndef SIMBANONSEARCHALLDEMOGRAPHICSGETREQUEST_H
#define SIMBANONSEARCHALLDEMOGRAPHICSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaNonsearchAlldemographicsGetResponse.h>

/**
 * TOP API: 获取定向投放人群维度列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAlldemographicsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual SimbaNonsearchAlldemographicsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* SIMBANONSEARCHALLDEMOGRAPHICSGETREQUEST_H */
