#ifndef SHOPSCORE_H
#define SHOPSCORE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 店铺动态评分信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopScore : public TaoDomain
{

public:
 virtual ~ShopScore() { }

  QString getDeliveryScore() const;
  void setDeliveryScore (QString deliveryScore);
  QString getItemScore() const;
  void setItemScore (QString itemScore);
  QString getServiceScore() const;
  void setServiceScore (QString serviceScore);
  
  virtual void parseResponse();

private:
/**
 * @brief 发货速度评分
 **/
  QString deliveryScore;

/**
 * @brief 商品描述评分
 **/
  QString itemScore;

/**
 * @brief 服务态度评分
 **/
  QString serviceScore;

};

#endif  /* SHOPSCORE_H */
