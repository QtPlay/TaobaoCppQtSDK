#ifndef SIMBANONSEARCHALLPLACESGETREQUEST_H
#define SIMBANONSEARCHALLPLACESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaNonsearchAllplacesGetResponse.h>

/**
 * TOP API: 获取单独出价投放位置列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAllplacesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual SimbaNonsearchAllplacesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* SIMBANONSEARCHALLPLACESGETREQUEST_H */
