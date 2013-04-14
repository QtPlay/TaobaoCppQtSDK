#ifndef HOTELROOMGETRESPONSE_H
#define HOTELROOMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Room.h>


/**
 * @brief TOP RESPONSE API: 此接口用于查询一个商品，根据传入的gid查询商品信息。卖家只能查询自己的商品。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomGetResponse : public TaoResponse
{
public:
 virtual ~HotelRoomGetResponse() { }

  Room getRoom() const;
  void setRoom (Room room);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品结构。是否返回酒店信息、房型信息、房态列表、宝贝描述根据参数决定
 **/
  Room room;

};

#endif
