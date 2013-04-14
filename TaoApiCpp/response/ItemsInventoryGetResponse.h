#ifndef ITEMSINVENTORYGETRESPONSE_H
#define ITEMSINVENTORYGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 获取当前用户作为卖家的仓库中的商品列表，并能根据传入的搜索条件对仓库中的商品列表进行过滤  
只能获得商品的部分信息，商品的详细信息请通过taobao.item.get获取
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemsInventoryGetResponse : public TaoResponse
{
public:
 virtual ~ItemsInventoryGetResponse() { }

  QList<Item> getItems() const;
  void setItems (QList<Item> items);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 搜索到底商品列表，具体字段根据设定的fields决定，不包括desc,stuff_status字段
 **/
  QList<Item> items;

/**
 * @brief 搜索到符合条件的结果总数
 **/
  qlonglong totalResults;

};

#endif
