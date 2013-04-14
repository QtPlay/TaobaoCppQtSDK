#ifndef SHOPRECOMMENDITEMSGETRESPONSE_H
#define SHOPRECOMMENDITEMSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FavoriteItem.h>


/**
 * @brief TOP RESPONSE API: 根据店铺信息推荐相关联的宝贝集
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShoprecommendItemsGetResponse : public TaoResponse
{
public:
 virtual ~ShoprecommendItemsGetResponse() { }

  QList<FavoriteItem> getFavoriteItems() const;
  void setFavoriteItems (QList<FavoriteItem> favoriteItems);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回与店铺关联的宝贝集合
 **/
  QList<FavoriteItem> favoriteItems;

};

#endif
