#ifndef SHOPREMAINSHOWCASEGETRESPONSE_H
#define SHOPREMAINSHOWCASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shop.h>


/**
 * @brief TOP RESPONSE API: 获取卖家店铺剩余橱窗数量，已用橱窗数量，总橱窗数量（对于B卖家，后两个参数返回-1）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopRemainshowcaseGetResponse : public TaoResponse
{
public:
 virtual ~ShopRemainshowcaseGetResponse() { }

  Shop getShop() const;
  void setShop (Shop shop);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支持返回剩余橱窗数量，已用橱窗数量，总橱窗数量
 **/
  Shop shop;

};

#endif
