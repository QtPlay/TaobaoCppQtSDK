#ifndef WLBTRADEORDERGETRESPONSE_H
#define WLBTRADEORDERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbOrder.h>


/**
 * @brief TOP RESPONSE API: 根据交易类型和交易id查询物流宝订单详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbTradeorderGetResponse : public TaoResponse
{
public:
 virtual ~WlbTradeorderGetResponse() { }

  QList<WlbOrder> getWlbOrderList() const;
  void setWlbOrderList (QList<WlbOrder> wlbOrderList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流宝订单列表信息
 **/
  QList<WlbOrder> wlbOrderList;

};

#endif
