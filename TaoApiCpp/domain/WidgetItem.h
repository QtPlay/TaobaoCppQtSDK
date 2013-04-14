#ifndef WIDGETITEM_H
#define WIDGETITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/PromotionInItem.h>
#include <TaoApiCpp/domain/PromotionInShop.h>
#include <TaoApiCpp/domain/WidgetSkuProps.h>
#include <TaoApiCpp/domain/WidgetSku.h>


/**
 * @brief Widget获取到的商品信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WidgetItem : public TaoDomain
{

public:
 virtual ~WidgetItem() { }

  bool getAddToCart() const;
  void setAddToCart (bool addToCart);
  QString getApproveStatus() const;
  void setApproveStatus (QString approveStatus);
  QString getClickUrl() const;
  void setClickUrl (QString clickUrl);
  bool getIsMall() const;
  void setIsMall (bool isMall);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QList<QString> getItemPics() const;
  void setItemPics (QList<QString> itemPics);
  QList<PromotionInItem> getItemPromotionData() const;
  void setItemPromotionData (QList<PromotionInItem> itemPromotionData);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  QString getPrice() const;
  void setPrice (QString price);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  QList<PromotionInShop> getShopPromotionData() const;
  void setShopPromotionData (QList<PromotionInShop> shopPromotionData);
  QList<WidgetSkuProps> getSkuProps() const;
  void setSkuProps (QList<WidgetSkuProps> skuProps);
  QList<WidgetSku> getSkus() const;
  void setSkus (QList<WidgetSku> skus);
  QString getTitle() const;
  void setTitle (QString title);
  
  virtual void parseResponse();

private:
/**
 * @brief 该商品能否加入购物车
 **/
  bool addToCart;

/**
 * @brief 商品的状态。onsale出售中，instock仓库中
 **/
  QString approveStatus;

/**
 * @brief 商品的点击链接，如果此商品有淘宝客会根据app所属的淘宝用户进行淘宝客连接转换，如果无淘宝客此字段为淘宝商品详情地址
 **/
  QString clickUrl;

/**
 * @brief 是否商城的商品
 **/
  bool isMall;

/**
 * @brief 淘宝商品的数字id，与Item的num_iid一致
 **/
  qlonglong itemId;

/**
 * @brief 商品图片列表，对应Item的itemImgs
 **/
  QList<QString> itemPics;

/**
 * @brief 商品关联的商品优惠信息
 **/
  QList<PromotionInItem> itemPromotionData;

/**
 * @brief 商品的主图地址，对应Item的pic_url
 **/
  QString picUrl;

/**
 * @brief 淘宝商品的价格，对应Item的price。如果商品为无sku或者所有sku价格一致的商品，此字段为价格（199.99）；如果商品有多sku且有一个价格区间，次字段为商品的价格区间，中间用‘-’连接
 **/
  QString price;

/**
 * @brief 商品的数量，对应Item的num
 **/
  qlonglong quantity;

/**
 * @brief 商品卖家昵称，对应Item的nick
 **/
  QString sellerNick;

/**
 * @brief 商品关联的卖家店铺优惠信息
 **/
  QList<PromotionInShop> shopPromotionData;

/**
 * @brief 商品关联sku对应的商品属性列表信息
 **/
  QList<WidgetSkuProps> skuProps;

/**
 * @brief 商品关联的sku列表信息
 **/
  QList<WidgetSku> skus;

/**
 * @brief 淘宝商品的标题，与Item的title一致
 **/
  QString title;

};

#endif  /* WIDGETITEM_H */
