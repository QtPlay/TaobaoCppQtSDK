#ifndef HOTELROOMSUPDATERESPONSE_H
#define HOTELROOMSUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 此接口用于更新多个集市酒店商品房态信息，根据传入的gids更新商品信息，该商品必须为对应的发布者才能执行更新操作。如果对应的商品在淘宝集市酒店系统中不存在，则会返回错误提示。是全量更新，非增量，会把之前的房态进行覆盖。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomsUpdateResponse : public TaoResponse
{
public:
 virtual ~HotelRoomsUpdateResponse() { }

  QList<QString> getGids() const;
  void setGids (QList<QString> gids);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 成功的gid list
 **/
  QList<QString> gids;

};

#endif
