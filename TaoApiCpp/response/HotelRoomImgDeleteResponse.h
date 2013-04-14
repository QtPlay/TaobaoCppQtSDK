#ifndef HOTELROOMIMGDELETERESPONSE_H
#define HOTELROOMIMGDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/RoomImage.h>


/**
 * @brief TOP RESPONSE API: 此接口用于为商品删除商品图片。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomImgDeleteResponse : public TaoResponse
{
public:
 virtual ~HotelRoomImgDeleteResponse() { }

  RoomImage getRoomImage() const;
  void setRoomImage (RoomImage roomImage);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品图片结构
 **/
  RoomImage roomImage;

};

#endif
