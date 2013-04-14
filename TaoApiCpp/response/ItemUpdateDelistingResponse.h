#ifndef ITEMUPDATEDELISTINGRESPONSE_H
#define ITEMUPDATEDELISTINGRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: * 单个商品下架 
    * 输入的num_iid必须属于当前会话用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemUpdateDelistingResponse : public TaoResponse
{
public:
 virtual ~ItemUpdateDelistingResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回商品更新信息：返回的结果是:num_iid和modified
 **/
  Item item;

};

#endif
