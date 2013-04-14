#ifndef TAOBAOKESHOP_H
#define TAOBAOKESHOP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 淘宝客店铺
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeShop : public TaoDomain
{

public:
 virtual ~TaobaokeShop() { }

  qlonglong getAuctionCount() const;
  void setAuctionCount (qlonglong auctionCount);
  QString getClickUrl() const;
  void setClickUrl (QString clickUrl);
  QString getCommissionRate() const;
  void setCommissionRate (QString commissionRate);
  QString getSellerCredit() const;
  void setSellerCredit (QString sellerCredit);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  QString getShopTitle() const;
  void setShopTitle (QString shopTitle);
  QString getShopType() const;
  void setShopType (QString shopType);
  QString getTotalAuction() const;
  void setTotalAuction (QString totalAuction);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 店铺内商品总数
 **/
  qlonglong auctionCount;

/**
 * @brief 店铺推广URL
 **/
  QString clickUrl;

/**
 * @brief 淘宝客店铺佣金比率
 **/
  QString commissionRate;

/**
 * @brief 店铺掌柜信用等级
 **/
  QString sellerCredit;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 店铺名称
 **/
  QString shopTitle;

/**
 * @brief 店铺类型 B=商城卖家 C=普通卖家
 **/
  QString shopType;

/**
 * @brief 累计推广量
 **/
  QString totalAuction;

/**
 * @brief 店铺用户id
 **/
  qlonglong userId;

};

#endif  /* TAOBAOKESHOP_H */
