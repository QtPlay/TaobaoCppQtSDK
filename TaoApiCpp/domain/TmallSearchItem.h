#ifndef TMALLSEARCHITEM_H
#define TMALLSEARCHITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 天猫搜索结果数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TmallSearchItem : public TaoDomain
{

public:
 virtual ~TmallSearchItem() { }

  QString getFastPostFee() const;
  void setFastPostFee (QString fastPostFee);
  qlonglong getIsCod() const;
  void setIsCod (qlonglong isCod);
  bool getIsPromotion() const;
  void setIsPromotion (bool isPromotion);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getLocation() const;
  void setLocation (QString location);
  QString getNick() const;
  void setNick (QString nick);
  QString getPicPath() const;
  void setPicPath (QString picPath);
  QString getPrice() const;
  void setPrice (QString price);
  QString getPriceWithRate() const;
  void setPriceWithRate (QString priceWithRate);
  QString getSellerLoc() const;
  void setSellerLoc (QString sellerLoc);
  qlonglong getShipping() const;
  void setShipping (qlonglong shipping);
  QString getSold() const;
  void setSold (QString sold);
  qlonglong getSpuId() const;
  void setSpuId (qlonglong spuId);
  QString getTitle() const;
  void setTitle (QString title);
  QString getUrl() const;
  void setUrl (QString url);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 邮费
 **/
  QString fastPostFee;

/**
 * @brief 是否货到付款
 **/
  qlonglong isCod;

/**
 * @brief 是否折扣
 **/
  bool isPromotion;

/**
 * @brief 搜索宝贝的数字id
 **/
  qlonglong itemId;

/**
 * @brief 搜索宝贝的宝贝所在地
 **/
  QString location;

/**
 * @brief 搜索宝贝的卖家昵称
 **/
  QString nick;

/**
 * @brief 搜索宝贝的图片url
 **/
  QString picPath;

/**
 * @brief 搜索宝贝的一口价
 **/
  QString price;

/**
 * @brief 搜索宝贝的一口价折扣价
 **/
  QString priceWithRate;

/**
 * @brief 搜索宝贝的卖家所在地
 **/
  QString sellerLoc;

/**
 * @brief 是否免邮
 **/
  qlonglong shipping;

/**
 * @brief 搜索宝贝的已售数量
 **/
  QString sold;

/**
 * @brief 搜索宝贝的spuid
 **/
  qlonglong spuId;

/**
 * @brief 搜索宝贝的标题
 **/
  QString title;

/**
 * @brief 搜索宝贝url
 **/
  QString url;

/**
 * @brief 搜索宝贝的卖家数字id
 **/
  qlonglong userId;

};

#endif  /* TMALLSEARCHITEM_H */
