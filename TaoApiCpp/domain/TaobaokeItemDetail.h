#ifndef TAOBAOKEITEMDETAIL_H
#define TAOBAOKEITEMDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief 淘宝客商品详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeItemDetail : public TaoDomain
{

public:
 virtual ~TaobaokeItemDetail() { }

  QString getClickUrl() const;
  void setClickUrl (QString clickUrl);
  Item getItem() const;
  void setItem (Item item);
  qlonglong getSellerCreditScore() const;
  void setSellerCreditScore (qlonglong sellerCreditScore);
  QString getShopClickUrl() const;
  void setShopClickUrl (QString shopClickUrl);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品推广URL
 **/
  QString clickUrl;

/**
 * @brief 商品详细信息. fields中需要设置Item下的字段,如设置:iid,detail_url等; 只设置item_detail,则不返回的Item下的所有信息.
 **/
  Item item;

/**
 * @brief 商品所属卖家的信用等级
 **/
  qlonglong sellerCreditScore;

/**
 * @brief 商品所在的店铺的推广URL
 **/
  QString shopClickUrl;

};

#endif  /* TAOBAOKEITEMDETAIL_H */
