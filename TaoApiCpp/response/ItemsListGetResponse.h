#ifndef ITEMSLISTGETRESPONSE_H
#define ITEMSLISTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 查看非公开属性时需要用户登录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemsListGetResponse : public TaoResponse
{
public:
 virtual ~ItemsListGetResponse() { }

  QList<Item> getItems() const;
  void setItems (QList<Item> items);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 获取的商品 具体字段根据权限和设定的fields决定
 **/
  QList<Item> items;

};

#endif
