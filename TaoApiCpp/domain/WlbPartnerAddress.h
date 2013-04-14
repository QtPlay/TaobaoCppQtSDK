#ifndef WLBPARTNERADDRESS_H
#define WLBPARTNERADDRESS_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 联系人地址信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbPartnerAddress : public TaoDomain
{

public:
 virtual ~WlbPartnerAddress() { }

  QString getAddress() const;
  void setAddress (QString address);
  QString getBorough() const;
  void setBorough (QString borough);
  QString getCity() const;
  void setCity (QString city);
  QString getProvince() const;
  void setProvince (QString province);
  QString getZip() const;
  void setZip (QString zip);
  
  virtual void parseResponse();

private:
/**
 * @brief 详细地址
 **/
  QString address;

/**
 * @brief 区
 **/
  QString borough;

/**
 * @brief 市
 **/
  QString city;

/**
 * @brief 省
 **/
  QString province;

/**
 * @brief 邮编
 **/
  QString zip;

};

#endif  /* WLBPARTNERADDRESS_H */
