#ifndef HOTELCITYGETREQUEST_H
#define HOTELCITYGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelCityGetResponse.h>

/**
 * TOP API: 根据国家编码查询该国家下的城市
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelCityGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCountry() const
;  void setCountry (QString country);


  virtual HotelCityGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 国家编码
 **/
  QString country;

};

#endif  /* HOTELCITYGETREQUEST_H */
