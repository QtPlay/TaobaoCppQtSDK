#ifndef CATEGORYRECOMMENDITEMSGETRESPONSE_H
#define CATEGORYRECOMMENDITEMSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FavoriteItem.h>


/**
 * @brief TOP RESPONSE API: 根据类目信息推荐相关联的宝贝集
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CategoryrecommendItemsGetResponse : public TaoResponse
{
public:
 virtual ~CategoryrecommendItemsGetResponse() { }

  QList<FavoriteItem> getFavoriteItems() const;
  void setFavoriteItems (QList<FavoriteItem> favoriteItems);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回关联的商品集合
 **/
  QList<FavoriteItem> favoriteItems;

};

#endif
