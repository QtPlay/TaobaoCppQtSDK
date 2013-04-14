#ifndef DELIVERYTIME_H
#define DELIVERYTIME_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 发货时间数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DeliveryTime : public TaoDomain
{

public:
 virtual ~DeliveryTime() { }

  QString getDeliveryTime() const;
  void setDeliveryTime (QString deliveryTime);
  QString getDeliveryTimeType() const;
  void setDeliveryTimeType (QString deliveryTimeType);
  QString getNeedDeliveryTime() const;
  void setNeedDeliveryTime (QString needDeliveryTime);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品级别设置的发货时间。设置了商品级别的发货时间，相对发货时间，则填写相对发货时间的天数（大于3）；绝对发货时间，则填写yyyy-mm-dd格式，如2013-11-11
 **/
  QString deliveryTime;

/**
 * @brief 发货时间类型：绝对发货时间或者相对发货时间
 **/
  QString deliveryTimeType;

/**
 * @brief 设置是否使用发货时间，商品级别，sku级别
 **/
  QString needDeliveryTime;

};

#endif  /* DELIVERYTIME_H */
