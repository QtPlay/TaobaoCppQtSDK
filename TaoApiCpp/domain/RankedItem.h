#ifndef RANKEDITEM_H
#define RANKEDITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 关键词排名推广商品信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RankedItem : public TaoDomain
{

public:
 virtual ~RankedItem() { }

  QString getLinkUrl() const;
  void setLinkUrl (QString linkUrl);
  QString getMaxPrice() const;
  void setMaxPrice (QString maxPrice);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getOrder() const;
  void setOrder (qlonglong order);
  qlonglong getRankScore() const;
  void setRankScore (qlonglong rankScore);
  QString getTitle() const;
  void setTitle (QString title);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品链接
 **/
  QString linkUrl;

/**
 * @brief 最高出价
 **/
  QString maxPrice;

/**
 * @brief 客户昵称
 **/
  QString nick;

/**
 * @brief 排名
 **/
  qlonglong order;

/**
 * @brief 原始质量评分
 **/
  qlonglong rankScore;

/**
 * @brief 创意标题
 **/
  QString title;

};

#endif  /* RANKEDITEM_H */
