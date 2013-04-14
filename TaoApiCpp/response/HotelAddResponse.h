#ifndef HOTELADDRESPONSE_H
#define HOTELADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Hotel.h>


/**
 * @brief TOP RESPONSE API: 此接口用于新增一个酒店，酒店的发布者是当前会话的用户。 
该接口发出的是一个酒店申请，需要淘宝小二审核。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelAddResponse : public TaoResponse
{
public:
 virtual ~HotelAddResponse() { }

  Hotel getHotel() const;
  void setHotel (Hotel hotel);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 酒店结构
 **/
  Hotel hotel;

};

#endif
