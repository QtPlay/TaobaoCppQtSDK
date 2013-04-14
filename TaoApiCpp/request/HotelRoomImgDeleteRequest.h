#ifndef HOTELROOMIMGDELETEREQUEST_H
#define HOTELROOMIMGDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelRoomImgDeleteResponse.h>

/**
 * TOP API: 此接口用于为商品删除商品图片。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomImgDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getGid() const
;  void setGid (qlonglong gid);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);


  virtual HotelRoomImgDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 酒店房间商品gid。必须为数字。
 **/
  qlonglong gid;

/**
 * @brief 图片序号，可选值：1，2，3，4，5。 
如果原图片个数小于等于1，则报错，不能删除图片。 
如果原图片个数小于待删除的图片序号，则报错，图片序号错误。
 **/
  qlonglong position;

};

#endif  /* HOTELROOMIMGDELETEREQUEST_H */
