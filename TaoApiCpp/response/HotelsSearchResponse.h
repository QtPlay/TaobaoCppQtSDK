#ifndef HOTELSSEARCHRESPONSE_H
#define HOTELSSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Hotel.h>


/**
 * @brief TOP RESPONSE API: 此接口用于查询多个酒店，根据传入的参数查询酒店信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelsSearchResponse : public TaoResponse
{
public:
 virtual ~HotelsSearchResponse() { }

  QList<Hotel> getHotels() const;
  void setHotels (QList<Hotel> hotels);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 多个酒店结构<br></br><font color = red>不返回房型信息，需要查看房型信息，请调用taobao.hotel.get</font>
 **/
  QList<Hotel> hotels;

/**
 * @brief 符合条件的结果总数
 **/
  qlonglong totalResults;

};

#endif
