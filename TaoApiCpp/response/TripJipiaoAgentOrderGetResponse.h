#ifndef TRIPJIPIAOAGENTORDERGETRESPONSE_H
#define TRIPJIPIAOAGENTORDERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/AtOrder.h>


/**
 * @brief TOP RESPONSE API: 根据淘宝系统订单号获取订单详情信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderGetResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentOrderGetResponse() { }

  QList<AtOrder> getOrders() const;
  void setOrders (QList<AtOrder> orders);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回订单详细列表
 **/
  QList<AtOrder> orders;

};

#endif
