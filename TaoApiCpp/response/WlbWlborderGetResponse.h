#ifndef WLBWLBORDERGETRESPONSE_H
#define WLBWLBORDERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/WlbOrder.h>


/**
 * @brief TOP RESPONSE API: 根据物流宝订单编号查询物流宝订单概要信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbWlborderGetResponse : public TaoResponse
{
public:
 virtual ~WlbWlborderGetResponse() { }

  WlbOrder getWlbOrder() const;
  void setWlbOrder (WlbOrder wlbOrder);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流宝订单详情
 **/
  WlbOrder wlbOrder;

};

#endif
