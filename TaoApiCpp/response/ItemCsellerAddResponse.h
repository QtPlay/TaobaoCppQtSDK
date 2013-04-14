#ifndef ITEMCSELLERADDRESPONSE_H
#define ITEMCSELLERADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 淘宝助理提供的发布集市商品接口，接口参数除了包括taobao.item.vip.add的参数外，新增一个sub_pic_paths参数，为图片空间的url，本方法会在发布商品同时，将这些图片作为副图关联到新商品。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemCsellerAddResponse : public TaoResponse
{
public:
 virtual ~ItemCsellerAddResponse() { }

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
