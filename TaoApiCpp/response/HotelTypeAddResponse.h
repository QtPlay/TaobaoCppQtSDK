#ifndef HOTELTYPEADDRESPONSE_H
#define HOTELTYPEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/RoomType.h>


/**
 * @brief TOP RESPONSE API: 此接口用于发布一个房型，房型的发布者是当前会话的用户。如果该房型在淘宝集市酒店下已经存在，则会返回错误提示。 
该接口发布的是一个新增房型申请，需要淘宝小二审核
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelTypeAddResponse : public TaoResponse
{
public:
 virtual ~HotelTypeAddResponse() { }

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
