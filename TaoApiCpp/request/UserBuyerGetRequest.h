#ifndef USERBUYERGETREQUEST_H
#define USERBUYERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UserBuyerGetResponse.h>

/**
 * TOP API: 查询买家信息API
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserBuyerGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);


  virtual UserBuyerGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 只返回user_id,nick,sex,buyer_credit,avatar,has_shop,vip_info参数
 **/
  QString fields;

};

#endif  /* USERBUYERGETREQUEST_H */
