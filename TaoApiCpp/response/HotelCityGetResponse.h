#ifndef HOTELCITYGETRESPONSE_H
#define HOTELCITYGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据国家编码查询该国家下的城市
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelCityGetResponse : public TaoResponse
{
public:
 virtual ~HotelCityGetResponse() { }

  QString getResult() const;
  void setResult (QString result);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回结果
 **/
  QString result;

};

#endif
