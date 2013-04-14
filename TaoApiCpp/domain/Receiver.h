#ifndef RECEIVER_H
#define RECEIVER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 收货人详细信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Receiver : public TaoDomain
{

public:
 virtual ~Receiver() { }

  QString getAddress() const;
  void setAddress (QString address);
  QString getCity() const;
  void setCity (QString city);
  QString getDistrict() const;
  void setDistrict (QString district);
  QString getMobilePhone() const;
  void setMobilePhone (QString mobilePhone);
  QString getName() const;
  void setName (QString name);
  QString getPhone() const;
  void setPhone (QString phone);
  QString getState() const;
  void setState (QString state);
  QString getZip() const;
  void setZip (QString zip);
  
  virtual void parseResponse();

private:
/**
 * @brief 收货人的详细地址信息
 **/
  QString address;

/**
 * @brief 收货人的城市
 **/
  QString city;

/**
 * @brief 区/县
 **/
  QString district;

/**
 * @brief 移动电话。
 **/
  QString mobilePhone;

/**
 * @brief 收货人全名。
 **/
  QString name;

/**
 * @brief 固定电话。
 **/
  QString phone;

/**
 * @brief 收货人所在省份
 **/
  QString state;

/**
 * @brief 邮政编码
 **/
  QString zip;

};

#endif  /* RECEIVER_H */
