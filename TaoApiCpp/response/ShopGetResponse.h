#ifndef SHOPGETRESPONSE_H
#define SHOPGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shop.h>


/**
 * @brief TOP RESPONSE API: 获取卖家店铺的基本信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopGetResponse : public TaoResponse
{
public:
 virtual ~ShopGetResponse() { }

  Shop getShop() const;
  void setShop (Shop shop);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 店铺信息
 **/
  Shop shop;

};

#endif
