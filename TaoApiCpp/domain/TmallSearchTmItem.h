#ifndef TMALLSEARCHTMITEM_H
#define TMALLSEARCHTMITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 天猫品牌特卖搜索结果数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TmallSearchTmItem : public TaoDomain
{

public:
 virtual ~TmallSearchTmItem() { }

  qlonglong getBrandId() const;
  void setBrandId (qlonglong brandId);
  QString getBrandName() const;
  void setBrandName (QString brandName);
  QString getCommentNum() const;
  void setCommentNum (QString commentNum);
  QString getCommissionRate() const;
  void setCommissionRate (QString commissionRate);
  QString getDetailUrl() const;
  void setDetailUrl (QString detailUrl);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  QString getPrice() const;
  void setPrice (QString price);
  QString getPromotionPrice() const;
  void setPromotionPrice (QString promotionPrice);
  QString getTagHot() const;
  void setTagHot (QString tagHot);
  QString getTagLq() const;
  void setTagLq (QString tagLq);
  QString getTagNew() const;
  void setTagNew (QString tagNew);
  QString getTitle() const;
  void setTitle (QString title);
  QString getTrackIid() const;
  void setTrackIid (QString trackIid);
  qlonglong getVolume() const;
  void setVolume (qlonglong volume);
  
  virtual void parseResponse();

private:
/**
 * @brief 宝贝所属品牌ID
 **/
  qlonglong brandId;

/**
 * @brief 宝贝所属品牌名称
 **/
  QString brandName;

/**
 * @brief 宝贝评论数
 **/
  QString commentNum;

/**
 * @brief 宝贝佣金比（%）
 **/
  QString commissionRate;

/**
 * @brief 搜索宝贝url
 **/
  QString detailUrl;

/**
 * @brief 搜索宝贝的图片url
 **/
  QString picUrl;

/**
 * @brief 搜索宝贝原价
 **/
  QString price;

/**
 * @brief 搜索宝贝特卖价
 **/
  QString promotionPrice;

/**
 * @brief 宝贝热门标签名称
 **/
  QString tagHot;

/**
 * @brief 宝贝限量标签名称
 **/
  QString tagLq;

/**
 * @brief 宝贝新品标签名称
 **/
  QString tagNew;

/**
 * @brief 搜索宝贝的标题
 **/
  QString title;

/**
 * @brief 商品id（具有跟踪效果）代替原来的num_iid  <a href="http://dev.open.taobao.com/bbs/read.php?tid=24323">详细说明</a>
 **/
  QString trackIid;

/**
 * @brief 搜索宝贝的已售数量 （月销量）
 **/
  qlonglong volume;

};

#endif  /* TMALLSEARCHTMITEM_H */
