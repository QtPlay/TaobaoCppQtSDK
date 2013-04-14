#ifndef HOTELORDERSSEARCHRESPONSE_H
#define HOTELORDERSSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/HotelOrder.h>


/**
 * @brief TOP RESPONSE API: 此接口用于查询多个酒店订单，根据传入的查询条件查询订单信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrdersSearchResponse : public TaoResponse
{
public:
 virtual ~HotelOrdersSearchResponse() { }

  QList<HotelOrder> getHotelOrders() const;
  void setHotelOrders (QList<HotelOrder> hotelOrders);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 多个订单结构，是否返回入住人列表根据参数决定
 **/
  QList<HotelOrder> hotelOrders;

/**
 * @brief 符合条件的结果总数
 **/
  qlonglong totalResults;

};

#endif
