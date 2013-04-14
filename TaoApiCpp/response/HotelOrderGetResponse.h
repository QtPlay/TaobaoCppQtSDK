#ifndef HOTELORDERGETRESPONSE_H
#define HOTELORDERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/HotelOrder.h>


/**
 * @brief TOP RESPONSE API: 此接口用于查询一个酒店订单，根据传入的订单号查询订单信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderGetResponse : public TaoResponse
{
public:
 virtual ~HotelOrderGetResponse() { }

  HotelOrder getHotelOrder() const;
  void setHotelOrder (HotelOrder hotelOrder);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 订单结构，是否返回入住人列表根据参数决定
 **/
  HotelOrder hotelOrder;

};

#endif
