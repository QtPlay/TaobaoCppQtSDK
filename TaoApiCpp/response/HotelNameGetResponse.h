#ifndef HOTELNAMEGETRESPONSE_H
#define HOTELNAMEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Hotel.h>


/**
 * @brief TOP RESPONSE API: 此接口用于查询一个酒店，根据传入的酒店名称/别名查询酒店信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelNameGetResponse : public TaoResponse
{
public:
 virtual ~HotelNameGetResponse() { }

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
