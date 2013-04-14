#ifndef ITEMTEMPLATESGETREQUEST_H
#define ITEMTEMPLATESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemTemplatesGetResponse.h>

/**
 * TOP API: 查询当前登录用户的店铺的宝贝详情页的模板名称
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemTemplatesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;


  virtual ItemTemplatesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:

};

#endif  /* ITEMTEMPLATESGETREQUEST_H */
