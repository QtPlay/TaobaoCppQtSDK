#ifndef HOTELROOMGETREQUEST_H
#define HOTELROOMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelRoomGetResponse.h>

/**
 * TOP API: 此接口用于查询一个商品，根据传入的gid查询商品信息。卖家只能查询自己的商品。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getGid() const
;  void setGid (qlonglong gid);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 bool getNeedHotel() const
;  void setNeedHotel (bool needHotel);

 bool getNeedRoomDesc() const
;  void setNeedRoomDesc (bool needRoomDesc);

 bool getNeedRoomQuotas() const
;  void setNeedRoomQuotas (bool needRoomQuotas);

 bool getNeedRoomType() const
;  void setNeedRoomType (bool needRoomType);


  virtual HotelRoomGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 酒店房间商品gid。必须为数字。gid和item_id至少要传一个。
 **/
  qlonglong gid;

/**
 * @brief 酒店房间商品item_id。必须为数字。item_id和gid至少要传一个。
 **/
  qlonglong itemId;

/**
 * @brief 是否需要返回该商品的酒店信息。可选值：true，false。
 **/
  bool needHotel;

/**
 * @brief 是否需要返回该商品的宝贝描述。可选值：true，false。
 **/
  bool needRoomDesc;

/**
 * @brief 是否需要返回该商品的房态列表。可选值：true，false。
 **/
  bool needRoomQuotas;

/**
 * @brief 是否需要返回该商品的房型信息。可选值：true，false。
 **/
  bool needRoomType;

};

#endif  /* HOTELROOMGETREQUEST_H */
