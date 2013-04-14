#ifndef HOTELROOMSUPDATEREQUEST_H
#define HOTELROOMSUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelRoomsUpdateResponse.h>

/**
 * TOP API: 此接口用于更新多个集市酒店商品房态信息，根据传入的gids更新商品信息，该商品必须为对应的发布者才能执行更新操作。如果对应的商品在淘宝集市酒店系统中不存在，则会返回错误提示。是全量更新，非增量，会把之前的房态进行覆盖。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomsUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getGidRoomQuotaMap() const
;  void setGidRoomQuotaMap (QString gidRoomQuotaMap);

 QString getMultiRoomQuotas() const
;  void setMultiRoomQuotas (QString multiRoomQuotas);


  virtual HotelRoomsUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 多商品房态信息。json encode。每个商品房态参考单商品更新中的room_quota字段。反序列化后入：array(( 'gid'=>1, 'roomQuota'=>array(('date'=>'2011-01-29', 'price'=>100, 'num'=>1),('date'=>'2011-01-30', 'price'=>100, 'num'=>1)),( 'gid'=>2, 'roomQuota'=>array(('date'=>'2011-01-29', 'price'=>100, 'num'=>1),('date'=>'2011-01-30', 'price'=>100, 'num'=>1)))
 **/
  QString gidRoomQuotaMap;

/**
 * @brief 为到店支付卖家特殊使用，可传入多种支付类型的房态信息。 
该参数有值时，忽略gid_room_quota_map参数； 
该参数无值时，使用gid_room_quota_map参数
 **/
  QString multiRoomQuotas;

};

#endif  /* HOTELROOMSUPDATEREQUEST_H */
