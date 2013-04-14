#ifndef ITEMGETRESPONSE_H
#define ITEMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 获取单个商品的详细信息  
卖家未登录时只能获得这个商品的公开数据，卖家登录后可以获取商品的所有数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemGetResponse : public TaoResponse
{
public:
 virtual ~ItemGetResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 获取的商品 具体字段根据权限和设定的fields决定
 **/
  Item item;

};

#endif
