#ifndef ITEMUPDATELISTINGRESPONSE_H
#define ITEMUPDATELISTINGRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: * 单个商品上架 
* 输入的num_iid必须属于当前会话用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemUpdateListingResponse : public TaoResponse
{
public:
 virtual ~ItemUpdateListingResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 上架后返回的商品信息：返回的结果就是:num_iid和modified
 **/
  Item item;

};

#endif
