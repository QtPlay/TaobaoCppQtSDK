#ifndef ITEMDELETERESPONSE_H
#define ITEMDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 删除单条商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemDeleteResponse : public TaoResponse
{
public:
 virtual ~ItemDeleteResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 被删除商品的相关信息
 **/
  Item item;

};

#endif
