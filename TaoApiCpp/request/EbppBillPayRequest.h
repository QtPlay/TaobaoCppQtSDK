#ifndef EBPPBILLPAYREQUEST_H
#define EBPPBILLPAYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/EbppBillPayResponse.h>

/**
 * TOP API: 对生活账单进行支付接口
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EbppBillPayRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAlipayOrderNo() const
;  void setAlipayOrderNo (QString alipayOrderNo);

 QString getAuthToken() const
;  void setAuthToken (QString authToken);

 QString getMerchantOrderNo() const
;  void setMerchantOrderNo (QString merchantOrderNo);

 QString getOrderType() const
;  void setOrderType (QString orderType);


  virtual EbppBillPayResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝的业务订单号，具有唯一性。
 **/
  QString alipayOrderNo;

/**
 * @brief 如有有淘宝授权的session可以不传这个字段
 **/
  QString authToken;

/**
 * @brief 输出机构的业务流水号，需要保证唯一性。
 **/
  QString merchantOrderNo;

/**
 * @brief 支付宝订单类型。公共事业缴纳JF,信用卡还款HK
 **/
  QString orderType;

};

#endif  /* EBPPBILLPAYREQUEST_H */
