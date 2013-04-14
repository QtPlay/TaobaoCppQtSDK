#ifndef ITEMRECOMMENDITEMSGETRESPONSE_H
#define ITEMRECOMMENDITEMSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FavoriteItem.h>


/**
 * @brief TOP RESPONSE API: 根据推荐类型获取推荐的关联关系商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemrecommendItemsGetResponse : public TaoResponse
{
public:
 virtual ~ItemrecommendItemsGetResponse() { }

  QList<FavoriteItem> getValues() const;
  void setValues (QList<FavoriteItem> values);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回的推荐商品列表结果集
 **/
  QList<FavoriteItem> values;

};

#endif
