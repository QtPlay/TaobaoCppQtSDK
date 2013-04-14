#ifndef WLBORDERPAGEGETRESPONSE_H
#define WLBORDERPAGEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbOrder.h>


/**
 * @brief TOP RESPONSE API: 分页查询物流宝订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderPageGetResponse : public TaoResponse
{
public:
 virtual ~WlbOrderPageGetResponse() { }

  QList<WlbOrder> getOrderList() const;
  void setOrderList (QList<WlbOrder> orderList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 分页查询返回结果
 **/
  QList<WlbOrder> orderList;

/**
 * @brief 总条数
 **/
  qlonglong totalCount;

};

#endif
