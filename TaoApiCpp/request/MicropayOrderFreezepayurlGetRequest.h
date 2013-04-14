#ifndef MICROPAYORDERFREEZEPAYURLGETREQUEST_H
#define MICROPAYORDERFREEZEPAYURLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/MicropayOrderFreezepayurlGetResponse.h>

/**
 * TOP API: 用户创建一笔支付订单之后,使用此接口获取支付冻结金的url来支付冻结金
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderFreezepayurlGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAlipayOrderNo() const
;  void setAlipayOrderNo (QString alipayOrderNo);

 QString getAuthToken() const
;  void setAuthToken (QString authToken);


  virtual MicropayOrderFreezepayurlGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 冻结订单号,创建冻结订单时支付宝返回的
 **/
  QString alipayOrderNo;

/**
 * @brief 支付宝用户给应用的授权。
 **/
  QString authToken;

};

#endif  /* MICROPAYORDERFREEZEPAYURLGETREQUEST_H */
