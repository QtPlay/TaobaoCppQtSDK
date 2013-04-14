#ifndef CAIPIAOGOODSINFOGETREQUEST_H
#define CAIPIAOGOODSINFOGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CaipiaoGoodsInfoGetResponse.h>

/**
 * TOP API: 根据卖家id与appkey获取商品信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoGoodsInfoGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual CaipiaoGoodsInfoGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* CAIPIAOGOODSINFOGETREQUEST_H */
