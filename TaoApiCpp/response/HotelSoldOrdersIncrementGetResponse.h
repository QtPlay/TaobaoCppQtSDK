#ifndef HOTELSOLDORDERSINCREMENTGETRESPONSE_H
#define HOTELSOLDORDERSINCREMENTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/HotelOrder.h>


/**
 * @brief TOP RESPONSE API: 1. 搜索当前会话用户作为卖家已卖出的增量交易数据  
2. 只能查询时间跨度为一天的增量交易记录：start_modified：2011-7-1 16:00:00 end_modified： 2011-7-2 15:59:59（注意不能写成16:00:00）  
3. 返回数据结果为创建订单时间的倒序
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelSoldOrdersIncrementGetResponse : public TaoResponse
{
public:
 virtual ~HotelSoldOrdersIncrementGetResponse() { }

  bool getHasNext() const;
  void setHasNext (bool hasNext);  QList<HotelOrder> getHotelOrders() const;
  void setHotelOrders (QList<HotelOrder> hotelOrders);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否存在下一页
 **/
  bool hasNext;

/**
 * @brief 多个订单结构，是否返回入住人列表根据参数决定
 **/
  QList<HotelOrder> hotelOrders;

/**
 * @brief 搜索到的交易信息总数
 **/
  qlonglong totalResults;

};

#endif
