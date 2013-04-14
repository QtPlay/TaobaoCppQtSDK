#ifndef HOTELNAMEGETREQUEST_H
#define HOTELNAMEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelNameGetResponse.h>

/**
 * TOP API: 此接口用于查询一个酒店，根据传入的酒店名称/别名查询酒店信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelNameGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCity() const
;  void setCity (qlonglong city);

 QString getCountry() const
;  void setCountry (QString country);

 qlonglong getDistrict() const
;  void setDistrict (qlonglong district);

 bool getDomestic() const
;  void setDomestic (bool domestic);

 QString getName() const
;  void setName (QString name);

 qlonglong getProvince() const
;  void setProvince (qlonglong province);


  virtual HotelNameGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 城市编码。参见：http://kezhan.trip.taobao.com/area.html。 
domestic为true时，province,city,district不能同时为空或为0
 **/
  qlonglong city;

/**
 * @brief domestic为true时，固定China； 
domestic为false时，必须传定义的海外国家编码值，是必填项。参见：http://kezhan.trip.taobao.com/countrys.html
 **/
  QString country;

/**
 * @brief 区域（县级市）编码。参见：http://kezhan.trip.taobao.com/area.html。 
domestic为true时，province,city,district不能同时为空或为0
 **/
  qlonglong district;

/**
 * @brief 是否国内酒店。可选值：true，false
 **/
  bool domestic;

/**
 * @brief 酒店全部名称/别名。不能超过60字节
 **/
  QString name;

/**
 * @brief 省份编码。参见：http://kezhan.trip.taobao.com/area.html。 
domestic为true时，province,city,district不能同时为空或为0
 **/
  qlonglong province;

};

#endif  /* HOTELNAMEGETREQUEST_H */
