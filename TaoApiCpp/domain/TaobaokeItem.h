#ifndef TAOBAOKEITEM_H
#define TAOBAOKEITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 淘宝客商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeItem : public TaoDomain
{

public:
 virtual ~TaobaokeItem() { }

  QString getClickUrl() const;
  void setClickUrl (QString clickUrl);
  QString getCommission() const;
  void setCommission (QString commission);
  QString getCommissionNum() const;
  void setCommissionNum (QString commissionNum);
  QString getCommissionRate() const;
  void setCommissionRate (QString commissionRate);
  QString getCommissionVolume() const;
  void setCommissionVolume (QString commissionVolume);
  QString getCouponEndTime() const;
  void setCouponEndTime (QString couponEndTime);
  QString getCouponPrice() const;
  void setCouponPrice (QString couponPrice);
  QString getCouponRate() const;
  void setCouponRate (QString couponRate);
  QString getCouponStartTime() const;
  void setCouponStartTime (QString couponStartTime);
  QString getItemLocation() const;
  void setItemLocation (QString itemLocation);
  QString getKeywordClickUrl() const;
  void setKeywordClickUrl (QString keywordClickUrl);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  QString getPrice() const;
  void setPrice (QString price);
  QString getPromotionPrice() const;
  void setPromotionPrice (QString promotionPrice);
  qlonglong getSellerCreditScore() const;
  void setSellerCreditScore (qlonglong sellerCreditScore);
  qlonglong getSellerId() const;
  void setSellerId (qlonglong sellerId);
  QString getShopClickUrl() const;
  void setShopClickUrl (QString shopClickUrl);
  QString getShopType() const;
  void setShopType (QString shopType);
  QString getTaobaokeCatClickUrl() const;
  void setTaobaokeCatClickUrl (QString taobaokeCatClickUrl);
  QString getTitle() const;
  void setTitle (QString title);
  qlonglong getVolume() const;
  void setVolume (qlonglong volume);
  
  virtual void parseResponse();

private:
/**
 * @brief 推广点击url
 **/
  QString clickUrl;

/**
 * @brief 淘宝客佣金
 **/
  QString commission;

/**
 * @brief 累计成交量.注：返回的数据是30天内累计推广量
 **/
  QString commissionNum;

/**
 * @brief 淘宝客佣金比率，比如：1234.00代表12.34%
 **/
  QString commissionRate;

/**
 * @brief 累计总支出佣金量
 **/
  QString commissionVolume;

/**
 * @brief 折扣活动结束时间
 **/
  QString couponEndTime;

/**
 * @brief 折扣价格
 **/
  QString couponPrice;

/**
 * @brief 折扣比率
 **/
  QString couponRate;

/**
 * @brief 折扣活动开始时间
 **/
  QString couponStartTime;

/**
 * @brief 商品所在地
 **/
  QString itemLocation;

/**
 * @brief 淘宝客关键词搜索URL
 **/
  QString keywordClickUrl;

/**
 * @brief 卖家昵称
 **/
  QString nick;

/**
 * @brief 淘宝客商品数字id
 **/
  qlonglong numIid;

/**
 * @brief 图片url
 **/
  QString picUrl;

/**
 * @brief 商品价格
 **/
  QString price;

/**
 * @brief 促销价格
 **/
  QString promotionPrice;

/**
 * @brief 卖家信用等级
 **/
  qlonglong sellerCreditScore;

/**
 * @brief 卖家id
 **/
  qlonglong sellerId;

/**
 * @brief 商品所在店铺的推广点击url
 **/
  QString shopClickUrl;

/**
 * @brief 店铺类型:B(商城),C(集市)
 **/
  QString shopType;

/**
 * @brief 淘宝客类目推广URL
 **/
  QString taobaokeCatClickUrl;

/**
 * @brief 商品title 宝贝名称
 **/
  QString title;

/**
 * @brief 30天内交易量
 **/
  qlonglong volume;

};

#endif  /* TAOBAOKEITEM_H */
