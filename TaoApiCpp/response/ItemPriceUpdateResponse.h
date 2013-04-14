#ifndef ITEMPRICEUPDATERESPONSE_H
#define ITEMPRICEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 更新商品价格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemPriceUpdateResponse : public TaoResponse
{
public:
 virtual ~ItemPriceUpdateResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品结构里的num_iid，modified
 **/
  Item item;

};

#endif
