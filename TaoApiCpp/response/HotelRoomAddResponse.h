#ifndef HOTELROOMADDRESPONSE_H
#define HOTELROOMADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Room.h>


/**
 * @brief TOP RESPONSE API: 此接口用于发布一个集市酒店商品，商品的发布者是当前会话的用户。如果该酒店、该房型、该用户所对应的商品在淘宝集市酒店系统中已经存在，则会返回错误提示。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomAddResponse : public TaoResponse
{
public:
 virtual ~HotelRoomAddResponse() { }

  Room getRoom() const;
  void setRoom (Room room);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品结构
 **/
  Room room;

};

#endif
