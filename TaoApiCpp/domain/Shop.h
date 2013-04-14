#ifndef SHOP_H
#define SHOP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>
#include <TaoApiCpp/domain/ShopScore.h>


/**
 * @brief 店铺信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Shop : public TaoDomain
{

public:
 virtual ~Shop() { }

  qlonglong getAllCount() const;
  void setAllCount (qlonglong allCount);
  QString getBulletin() const;
  void setBulletin (QString bulletin);
  qlonglong getCid() const;
  void setCid (qlonglong cid);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getDesc() const;
  void setDesc (QString desc);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getNick() const;
  void setNick (QString nick);
  QString getPicPath() const;
  void setPicPath (QString picPath);
  qlonglong getRemainCount() const;
  void setRemainCount (qlonglong remainCount);
  ShopScore getShopScore() const;
  void setShopScore (ShopScore shopScore);
  qlonglong getSid() const;
  void setSid (qlonglong sid);
  QString getTitle() const;
  void setTitle (QString title);
  qlonglong getUsedCount() const;
  void setUsedCount (qlonglong usedCount);
  
  virtual void parseResponse();

private:
/**
 * @brief 总橱窗数量，对于C卖家返回总橱窗数，对于B卖家返回0（只有taobao.shop.remainshowcase.get可以返回）
 **/
  qlonglong allCount;

/**
 * @brief 店铺公告
 **/
  QString bulletin;

/**
 * @brief 店铺所属的类目编号
 **/
  qlonglong cid;

/**
 * @brief 开店时间。格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 店铺描述
 **/
  QString desc;

/**
 * @brief 最后修改时间。格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime modified;

/**
 * @brief 卖家昵称
 **/
  QString nick;

/**
 * @brief 店标地址。返回相对路径，可以用"http://logo.taobao.com/shop-logo"来拼接成绝对路径
 **/
  QString picPath;

/**
 * @brief 剩余橱窗数量，对于C卖家返回剩余橱窗数，对于B卖家返回-1（只有taobao.shop.remainshowcase.get可以返回）
 **/
  qlonglong remainCount;

/**
 * @brief 店铺动态评分信息
 **/
  ShopScore shopScore;

/**
 * @brief 店铺编号。shop+sid.taobao.com即店铺地址，如shop123456.taobao.com
 **/
  qlonglong sid;

/**
 * @brief 店铺标题
 **/
  QString title;

/**
 * @brief 已用的橱窗数量，对于C卖家返回已使用的橱窗数，对于B卖家返回-1（只有taobao.shop.remainshowcase.get可以返回）
 **/
  qlonglong usedCount;

};

#endif  /* SHOP_H */
