#ifndef HOTELSOLDTYPESINCREMENTGETRESPONSE_H
#define HOTELSOLDTYPESINCREMENTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/RoomType.h>


/**
 * @brief TOP RESPONSE API: 1. 此接口用于查询该会话用户作为房型发布者发布的房型的审核情况。 
2. 查询提交的起始时间至今的增量房型记录：start_modified：2011-7-1 16:00:00 
3. 返回数据结果为发布房型时间正序排列
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelSoldTypesIncrementGetResponse : public TaoResponse
{
public:
 virtual ~HotelSoldTypesIncrementGetResponse() { }

  bool getHasNext() const;
  void setHasNext (bool hasNext);  QList<RoomType> getRoomTypes() const;
  void setRoomTypes (QList<RoomType> roomTypes);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否存在下一页
 **/
  bool hasNext;

/**
 * @brief 多个房型结构
 **/
  QList<RoomType> roomTypes;

/**
 * @brief 符合条件的结果总数
 **/
  qlonglong totalResults;

};

#endif
