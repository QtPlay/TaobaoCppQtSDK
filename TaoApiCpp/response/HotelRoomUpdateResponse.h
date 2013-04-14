#ifndef HOTELROOMUPDATERESPONSE_H
#define HOTELROOMUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Room.h>


/**
 * @brief TOP RESPONSE API: 此接口用于更新一个集市酒店商品，根据传入的gid更新商品信息，该商品必须为对应的发布者才能执行更新操作。如果对应的商品在淘宝集市酒店系统中不存在，则会返回错误提示。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomUpdateResponse : public TaoResponse
{
public:
 virtual ~HotelRoomUpdateResponse() { }

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
