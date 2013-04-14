#ifndef HOTELROOMSSEARCHREQUEST_H
#define HOTELROOMSSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelRoomsSearchResponse.h>

/**
 * TOP API: 此接口用于查询多个酒店商品，根据传入的参数查询商品信息。卖家只能查询自己的商品。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomsSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getGids() const
;  void setGids (QString gids);

 QString getHids() const
;  void setHids (QString hids);

 QString getItemIds() const
;  void setItemIds (QString itemIds);

 bool getNeedHotel() const
;  void setNeedHotel (bool needHotel);

 bool getNeedRoomDesc() const
;  void setNeedRoomDesc (bool needRoomDesc);

 bool getNeedRoomQuotas() const
;  void setNeedRoomQuotas (bool needRoomQuotas);

 bool getNeedRoomType() const
;  void setNeedRoomType (bool needRoomType);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 QString getRids() const
;  void setRids (QString rids);


  virtual HotelRoomsSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 酒店房间商品gid列表，多个gid用英文逗号隔开，一次不超过20个。gids，item_ids , hids，rids四项必须传一项，同时传递的情况下，作为查询条件的优先级由高到低依次为gids，item_ids , hids，rids。
 **/
  QString gids;

/**
 * @brief 酒店hid列表，多个hid用英文逗号隔开，一次不超过5个。gids，item_ids , hids，rids四项必须传一项，同时传递的情况下，作为查询条件的优先级由高到低依次为gids，item_ids , hids，rids。
 **/
  QString hids;

/**
 * @brief 酒店房间商品item_id列表，多个item_id用英文逗号隔开，一次不超过20个。gids，item_ids , hids，rids四项必须传一项，同时传递的情况下，作为查询条件的优先级由高到低依次为gids，item_ids , hids，rids。当item_ids参数值为-1，gids项不传值时，会返回卖家所有商品列表
 **/
  QString itemIds;

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

/**
 * @brief 分页页码。取值范围，大于零的整数，默认值1，即返回第一页的数据。页面大小为20
 **/
  qlonglong pageNo;

/**
 * @brief 房型rid列表，多个rid用英文逗号隔开，一次不超过20个。gids，item_ids , hids，rids四项必须传一项，同时传递的情况下，作为查询条件的优先级由高到低依次为gids，item_ids , hids，rids。
 **/
  QString rids;

};

#endif  /* HOTELROOMSSEARCHREQUEST_H */
