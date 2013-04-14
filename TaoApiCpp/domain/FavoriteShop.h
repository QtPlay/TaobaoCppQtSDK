#ifndef FAVORITESHOP_H
#define FAVORITESHOP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 推荐关联店铺信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FavoriteShop : public TaoDomain
{

public:
 virtual ~FavoriteShop() { }

  qlonglong getRate() const;
  void setRate (qlonglong rate);
  qlonglong getSellerId() const;
  void setSellerId (qlonglong sellerId);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  qlonglong getShopId() const;
  void setShopId (qlonglong shopId);
  QString getShopName() const;
  void setShopName (QString shopName);
  QString getShopPic() const;
  void setShopPic (QString shopPic);
  QString getShopUrl() const;
  void setShopUrl (QString shopUrl);
  
  virtual void parseResponse();

private:
/**
 * @brief 店铺卖家信用
 **/
  qlonglong rate;

/**
 * @brief 卖家ID
 **/
  qlonglong sellerId;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 店铺ID
 **/
  qlonglong shopId;

/**
 * @brief 店铺ID
 **/
  QString shopName;

/**
 * @brief 店铺LOGO图片
 **/
  QString shopPic;

/**
 * @brief 店铺首页链接
 **/
  QString shopUrl;

};

#endif  /* FAVORITESHOP_H */
