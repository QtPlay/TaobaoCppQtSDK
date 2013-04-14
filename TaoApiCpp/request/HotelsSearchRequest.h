#ifndef HOTELSSEARCHREQUEST_H
#define HOTELSSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelsSearchResponse.h>

/**
 * TOP API: 此接口用于查询多个酒店，根据传入的参数查询酒店信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelsSearchRequest : public TaoRequest
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

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getProvince() const
;  void setProvince (qlonglong province);


  virtual HotelsSearchResponse *getResponseClass(const QString &session = "",
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
 * @brief 酒店名称。不能超过60字节
 **/
  QString name;

/**
 * @brief 分页页码。取值范围，大于零的整数，默认值1，即返回第一页的数据。页面大小为20
 **/
  qlonglong pageNo;

/**
 * @brief 省份编码。参见：http://kezhan.trip.taobao.com/area.html。 
domestic为true时，province,city,district不能同时为空或为0
 **/
  qlonglong province;

};

#endif  /* HOTELSSEARCHREQUEST_H */
