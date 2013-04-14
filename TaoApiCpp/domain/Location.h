#ifndef LOCATION_H
#define LOCATION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 用户地址
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Location : public TaoDomain
{

public:
 virtual ~Location() { }

  QString getAddress() const;
  void setAddress (QString address);
  QString getCity() const;
  void setCity (QString city);
  QString getCountry() const;
  void setCountry (QString country);
  QString getDistrict() const;
  void setDistrict (QString district);
  QString getState() const;
  void setState (QString state);
  QString getZip() const;
  void setZip (QString zip);
  
  virtual void parseResponse();

private:
/**
 * @brief 详细地址，最大256个字节（128个中文）
 **/
  QString address;

/**
 * @brief 所在城市（中文名称）
 **/
  QString city;

/**
 * @brief 国家名称
 **/
  QString country;

/**
 * @brief 区/县（只适用于物流API）
 **/
  QString district;

/**
 * @brief 所在省份（中文名称）
 **/
  QString state;

/**
 * @brief 邮政编码
 **/
  QString zip;

};

#endif  /* LOCATION_H */
