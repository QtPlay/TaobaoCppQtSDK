#ifndef LOGISTICSORDERTRACEPUSHRESPONSE_H
#define LOGISTICSORDERTRACEPUSHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shipping.h>


/**
 * @brief TOP RESPONSE API: 卖家使用自己的物流公司发货，可以通过本接口将订单的流转信息推送到淘宝，淘宝保存这些流转信息，并可在页面展示这些流转信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrdertracePushResponse : public TaoResponse
{
public:
 virtual ~LogisticsOrdertracePushResponse() { }

  Shipping getShipping() const;
  void setShipping (Shipping shipping);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回结果是否成功is_success
 **/
  Shipping shipping;

};

#endif
