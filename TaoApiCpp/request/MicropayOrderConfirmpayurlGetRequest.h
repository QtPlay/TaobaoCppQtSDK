#ifndef MICROPAYORDERCONFIRMPAYURLGETREQUEST_H
#define MICROPAYORDERCONFIRMPAYURLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/MicropayOrderConfirmpayurlGetResponse.h>

/**
 * TOP API: 创建并支付冻结单之后，使用此接口获取有密支付的url 
这个接口调用的前提是创建冻结金的参数信息pay_confirm=PAY_PASSWORD
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderConfirmpayurlGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAlipayOrderNo() const
;  void setAlipayOrderNo (QString alipayOrderNo);

 QString getAmount() const
;  void setAmount (QString amount);

 QString getAuthToken() const
;  void setAuthToken (QString authToken);

 QString getMemo() const
;  void setMemo (QString memo);

 QString getReceiveUserId() const
;  void setReceiveUserId (QString receiveUserId);

 QString getTransferOutOrderNo() const
;  void setTransferOutOrderNo (QString transferOutOrderNo);


  virtual MicropayOrderConfirmpayurlGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝订单号，冻结流水号.这个是创建冻结订单支付宝返回的
 **/
  QString alipayOrderNo;

/**
 * @brief 支付金额,区间必须在[0.01,30]，只能保留小数点后两位
 **/
  QString amount;

/**
 * @brief 支付宝用户给应用的授权.
 **/
  QString authToken;

/**
 * @brief 支付备注
 **/
  QString memo;

/**
 * @brief 收款方的支付宝ID
 **/
  QString receiveUserId;

/**
 * @brief 本次转账的外部单据号（只能由字母和数字组成,maxlength=32）
 **/
  QString transferOutOrderNo;

};

#endif  /* MICROPAYORDERCONFIRMPAYURLGETREQUEST_H */
