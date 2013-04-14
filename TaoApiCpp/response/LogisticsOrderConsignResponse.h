#ifndef LOGISTICSORDERCONSIGNRESPONSE_H
#define LOGISTICSORDERCONSIGNRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ConsignResult.h>


/**
 * @brief TOP RESPONSE API: 货运发货接口。通过该接口可以在通过淘宝对物流公司下单，并且可以享有部分折扣优惠。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrderConsignResponse : public TaoResponse
{
public:
 virtual ~LogisticsOrderConsignResponse() { }

  ConsignResult getConsignResult() const;
  void setConsignResult (ConsignResult consignResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 发货结果
 **/
  ConsignResult consignResult;

};

#endif
