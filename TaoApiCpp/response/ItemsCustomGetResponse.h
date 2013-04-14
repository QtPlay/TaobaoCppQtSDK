#ifndef ITEMSCUSTOMGETRESPONSE_H
#define ITEMSCUSTOMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 跟据卖家设定的商品外部id获取商品  
这个商品对应卖家从传入的session中获取，需要session绑定
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemsCustomGetResponse : public TaoResponse
{
public:
 virtual ~ItemsCustomGetResponse() { }

  QList<Item> getItems() const;
  void setItems (QList<Item> items);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品列表，具体返回字段以fields决定
 **/
  QList<Item> items;

};

#endif
