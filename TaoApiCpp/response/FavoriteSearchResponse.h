#ifndef FAVORITESEARCHRESPONSE_H
#define FAVORITESEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/CollectItem.h>


/**
 * @brief TOP RESPONSE API: 查询淘宝用户收藏的商品或店铺信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FavoriteSearchResponse : public TaoResponse
{
public:
 virtual ~FavoriteSearchResponse() { }

  QList<CollectItem> getCollectItems() const;
  void setCollectItems (QList<CollectItem> collectItems);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回查询到的商品或店铺的数字id列表
 **/
  QList<CollectItem> collectItems;

/**
 * @brief 查询到的宝贝的收藏总数
 **/
  qlonglong totalResults;

};

#endif
