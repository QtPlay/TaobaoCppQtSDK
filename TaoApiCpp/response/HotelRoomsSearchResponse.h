#ifndef HOTELROOMSSEARCHRESPONSE_H
#define HOTELROOMSSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Room.h>


/**
 * @brief TOP RESPONSE API: 此接口用于查询多个酒店商品，根据传入的参数查询商品信息。卖家只能查询自己的商品。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomsSearchResponse : public TaoResponse
{
public:
 virtual ~HotelRoomsSearchResponse() { }

  QList<Room> getRooms() const;
  void setRooms (QList<Room> rooms);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 多个商品结构。是否返回酒店信息、房型信息、房态列表、宝贝描述根据参数决定
 **/
  QList<Room> rooms;

/**
 * @brief 符合条件的结果总数
 **/
  qlonglong totalResults;

};

#endif
