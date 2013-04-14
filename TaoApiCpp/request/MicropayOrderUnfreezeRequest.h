#ifndef MICROPAYORDERUNFREEZEREQUEST_H
#define MICROPAYORDERUNFREEZEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/MicropayOrderUnfreezeResponse.h>

/**
 * TOP API: 解冻冻结单API
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderUnfreezeRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAlipayOrderNo() const
;  void setAlipayOrderNo (QString alipayOrderNo);

 QString getAuthToken() const
;  void setAuthToken (QString authToken);

 QString getMemo() const
;  void setMemo (QString memo);


  virtual MicropayOrderUnfreezeResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 冻结资金流水号,在创建资金订单时支付宝返回的流水号
 **/
  QString alipayOrderNo;

/**
 * @brief 支付宝用户给应用的授权.
 **/
  QString authToken;

/**
 * @brief 冻结备注
 **/
  QString memo;

};

#endif  /* MICROPAYORDERUNFREEZEREQUEST_H */
