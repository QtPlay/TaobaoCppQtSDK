#ifndef SHOPRECOMMENDSHOPSGETRESPONSE_H
#define SHOPRECOMMENDSHOPSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FavoriteShop.h>


/**
 * @brief TOP RESPONSE API: 根据店铺信息推荐相关联的店铺集
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShoprecommendShopsGetResponse : public TaoResponse
{
public:
 virtual ~ShoprecommendShopsGetResponse() { }

  QList<FavoriteShop> getFavoriteShops() const;
  void setFavoriteShops (QList<FavoriteShop> favoriteShops);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回与店铺关联的店铺集
 **/
  QList<FavoriteShop> favoriteShops;

};

#endif
