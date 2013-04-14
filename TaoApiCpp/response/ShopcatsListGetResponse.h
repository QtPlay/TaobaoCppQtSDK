#ifndef SHOPCATSLISTGETRESPONSE_H
#define SHOPCATSLISTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ShopCat.h>


/**
 * @brief TOP RESPONSE API: 获取淘宝面向买家的浏览导航类目（跟后台卖家商品管理的类目有差异）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShopcatsListGetResponse : public TaoResponse
{
public:
 virtual ~ShopcatsListGetResponse() { }

  QList<ShopCat> getShopCats() const;
  void setShopCats (QList<ShopCat> shopCats);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 店铺类目列表信息
 **/
  QList<ShopCat> shopCats;

};

#endif
