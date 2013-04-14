#ifndef HOTELTYPENAMEGETRESPONSE_H
#define HOTELTYPENAMEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/RoomType.h>


/**
 * @brief TOP RESPONSE API: 此接口用于查询一个房型，根据传入的酒店hid，房型名称/别名查询房型信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelTypeNameGetResponse : public TaoResponse
{
public:
 virtual ~HotelTypeNameGetResponse() { }

  RoomType getRoomType() const;
  void setRoomType (RoomType roomType);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 房型结构
 **/
  RoomType roomType;

};

#endif
