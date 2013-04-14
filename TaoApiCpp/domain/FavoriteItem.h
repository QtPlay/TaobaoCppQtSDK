#ifndef FAVORITEITEM_H
#define FAVORITEITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 推荐的关联商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FavoriteItem : public TaoDomain
{

public:
 virtual ~FavoriteItem() { }

  QString getItemName() const;
  void setItemName (QString itemName);
  QString getItemPictrue() const;
  void setItemPictrue (QString itemPictrue);
  QString getItemPrice() const;
  void setItemPrice (QString itemPrice);
  QString getItemUrl() const;
  void setItemUrl (QString itemUrl);
  QString getPromotionPrice() const;
  void setPromotionPrice (QString promotionPrice);
  qlonglong getSellCount() const;
  void setSellCount (qlonglong sellCount);
  QString getTrackIid() const;
  void setTrackIid (QString trackIid);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品名称
 **/
  QString itemName;

/**
 * @brief 商品图片地址
 **/
  QString itemPictrue;

/**
 * @brief 商品价格
 **/
  QString itemPrice;

/**
 * @brief 商品的详情页面地址
 **/
  QString itemUrl;

/**
 * @brief 促销价格
 **/
  QString promotionPrice;

/**
 * @brief 商品销售次数
 **/
  qlonglong sellCount;

/**
 * @brief 商品id（具有跟踪效果）代替原来的item_id  <a href="http://dev.open.taobao.com/bbs/read.php?tid=24323">详细说明</a>
 **/
  QString trackIid;

};

#endif  /* FAVORITEITEM_H */
