#ifndef WLBORDERITEMPAGEGETRESPONSE_H
#define WLBORDERITEMPAGEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbOrderItem.h>


/**
 * @brief TOP RESPONSE API: 分页查询物流宝订单商品详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderitemPageGetResponse : public TaoResponse
{
public:
 virtual ~WlbOrderitemPageGetResponse() { }

  QList<WlbOrderItem> getOrderItemList() const;
  void setOrderItemList (QList<WlbOrderItem> orderItemList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流宝订单商品列表
 **/
  QList<WlbOrderItem> orderItemList;

/**
 * @brief 总数量
 **/
  qlonglong totalCount;

};

#endif
