#ifndef MICROPAYORDERFREEZEREQUEST_H
#define MICROPAYORDERFREEZEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/MicropayOrderFreezeResponse.h>

/**
 * TOP API: 该接口是支付宝提成冻结支付宝资金的操作
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderFreezeRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAmount() const
;  void setAmount (QString amount);

 QString getAuthToken() const
;  void setAuthToken (QString authToken);

 QDateTime getExpireTime() const
;  void setExpireTime (QDateTime expireTime);

 QString getMemo() const
;  void setMemo (QString memo);

 QString getMerchantOrderNo() const
;  void setMerchantOrderNo (QString merchantOrderNo);

 QString getPayConfirm() const
;  void setPayConfirm (QString payConfirm);


  virtual MicropayOrderFreezeResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要冻结金额，[0.01,2000]，必须是正数，最多只能保留小数点两位,单位是元
 **/
  QString amount;

/**
 * @brief 支付宝用户给应用的授权.
 **/
  QString authToken;

/**
 * @brief 冻结资金的到期时间，超过此日期，冻结金会自动解冻,时间要求是:[当前时间+24h,订购时间-8h] .
 **/
  QDateTime expireTime;

/**
 * @brief 冻结备注,maxLength=40
 **/
  QString memo;

/**
 * @brief 商户订单号,只能由字母和数字组成，最大长度32.此外部订单号与支付宝的冻结订单号对应,注意 应用id和订购者id和外部订单号必须保证唯一性。
 **/
  QString merchantOrderNo;

/**
 * @brief 在解冻转账的时候的支付方式: 
NO_CONFIRM：不需要付款确认，调用接口直接扣款 
PAY_PASSWORD: 
在转账需要付款方用支付密码确认，才可以转账成功
 **/
  QString payConfirm;

};

#endif  /* MICROPAYORDERFREEZEREQUEST_H */
