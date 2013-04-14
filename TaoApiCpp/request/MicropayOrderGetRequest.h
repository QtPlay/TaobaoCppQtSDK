#ifndef MICROPAYORDERGETREQUEST_H
#define MICROPAYORDERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/MicropayOrderGetResponse.h>

/**
 * TOP API: 用户对已经冻结的订单可以调用此接口查询明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAlipayOrderNo() const
;  void setAlipayOrderNo (QString alipayOrderNo);

 QString getAuthToken() const
;  void setAuthToken (QString authToken);


  virtual MicropayOrderGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝订单号，冻结流水号(创建冻结订单返回)
 **/
  QString alipayOrderNo;

/**
 * @brief 支付宝用户给应用的授权.
 **/
  QString authToken;

};

#endif  /* MICROPAYORDERGETREQUEST_H */
