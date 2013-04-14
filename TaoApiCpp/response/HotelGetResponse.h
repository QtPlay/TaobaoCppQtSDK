#ifndef HOTELGETRESPONSE_H
#define HOTELGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Hotel.h>


/**
 * @brief TOP RESPONSE API: 此接口用于查询一个酒店，根据传入的酒店hid查询酒店信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelGetResponse : public TaoResponse
{
public:
 virtual ~HotelGetResponse() { }

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
