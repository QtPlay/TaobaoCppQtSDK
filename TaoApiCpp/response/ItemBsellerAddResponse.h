#ifndef ITEMBSELLERADDRESPONSE_H
#define ITEMBSELLERADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 淘宝助理提供的发布商城商品接口，在发布时 先查询是否有这个产品，有则将商品绑定到该产品上发布；如果没有这个产品，自动帮用户新建产品，再将商品绑定到该产品上发布。错误码参考taobao.product.add、taobao.product.img.upload、taobao.product.propimg.upload、taobao.item.add
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemBsellerAddResponse : public TaoResponse
{
public:
 virtual ~ItemBsellerAddResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 新发布的商品
 **/
  Item item;

};

#endif
