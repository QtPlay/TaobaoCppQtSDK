#ifndef EBPPBILLPAYRESPONSE_H
#define EBPPBILLPAYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 对生活账单进行支付接口
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EbppBillPayResponse : public TaoResponse
{
public:
 virtual ~EbppBillPayResponse() { }

  QString getAlipayOrderNo() const;
  void setAlipayOrderNo (QString alipayOrderNo);  QString getMerchantOrderNo() const;
  void setMerchantOrderNo (QString merchantOrderNo);  QString getOrderType() const;
  void setOrderType (QString orderType);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支付宝的业务订单号，具有唯一性。
 **/
  QString alipayOrderNo;

/**
 * @brief 输出机构的业务流水号，需要保证唯一性。
 **/
  QString merchantOrderNo;

/**
 * @brief 支付宝订单类型。公共事业缴纳JF,信用卡还款HK
 **/
  QString orderType;

};

#endif
