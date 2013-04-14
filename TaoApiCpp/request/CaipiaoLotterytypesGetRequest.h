#ifndef CAIPIAOLOTTERYTYPESGETREQUEST_H
#define CAIPIAOLOTTERYTYPESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoLotterytypesGetResponse.h>

/**
 * TOP API: 获取彩票系统支持的可用于赠送的彩种列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoLotterytypesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual CaipiaoLotterytypesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* CAIPIAOLOTTERYTYPESGETREQUEST_H */
