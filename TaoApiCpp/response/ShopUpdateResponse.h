#ifndef SHOPUPDATERESPONSE_H
#define SHOPUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Shop.h>


/**
 * @brief TOP RESPONSE API: 目前只支持标题、公告和描述的更新
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopUpdateResponse : public TaoResponse
{
public:
 virtual ~ShopUpdateResponse() { }

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
