#ifndef EBPPBILLPAYURLGETREQUEST_H
#define EBPPBILLPAYURLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/EbppBillPayurlGetResponse.h>

/**
 * TOP API: 创建账单之后，调用此API返回一个用户自己去收银台付款的URL，用户去收银台页面完成付款操作。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EbppBillPayurlGetRequest : public TaoRequest
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


  virtual EbppBillPayurlGetResponse *getResponseClass(const QString &session = "",
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
 * @brief 支付宝订单类型。公共事业缴纳JF,信用卡还款HK。
 **/
  QString orderType;

};

#endif  /* EBPPBILLPAYURLGETREQUEST_H */
