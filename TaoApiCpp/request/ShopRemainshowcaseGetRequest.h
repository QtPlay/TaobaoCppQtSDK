#ifndef SHOPREMAINSHOWCASEGETREQUEST_H
#define SHOPREMAINSHOWCASEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ShopRemainshowcaseGetResponse.h>

/**
 * TOP API: 获取卖家店铺剩余橱窗数量，已用橱窗数量，总橱窗数量（对于B卖家，后两个参数返回-1）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopRemainshowcaseGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual ShopRemainshowcaseGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* SHOPREMAINSHOWCASEGETREQUEST_H */
