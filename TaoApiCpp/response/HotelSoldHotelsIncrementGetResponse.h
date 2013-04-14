#ifndef HOTELSOLDHOTELSINCREMENTGETRESPONSE_H
#define HOTELSOLDHOTELSINCREMENTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Hotel.h>


/**
 * @brief TOP RESPONSE API: 1. 此接口用于查询该会话用户作为酒店发布者发布的酒店被审核通过的增量酒店信息。 
2. 查询提交的起始时间至今的增量酒店记录：start_modified：2011-7-1 16:00:00 
3. 返回数据结果为发布酒店时间的正序排列
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelSoldHotelsIncrementGetResponse : public TaoResponse
{
public:
 virtual ~HotelSoldHotelsIncrementGetResponse() { }

  bool getHasNext() const;
  void setHasNext (bool hasNext);  QList<Hotel> getHotels() const;
  void setHotels (QList<Hotel> hotels);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否存在下一页
 **/
  bool hasNext;

/**
 * @brief 多个酒店结构
 **/
  QList<Hotel> hotels;

/**
 * @brief 符合条件的结果总数
 **/
  qlonglong totalResults;

};

#endif
